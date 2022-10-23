#include<stdio.h>
int arry[];
int index=-1;
void Push(int newNumber)
{
    index++;
    arry[index]=newNumber;
}
void Pop()
{
    int j;
    if(index<0)
        printf("Worng! Queue has no value\n");
    else
    {
        for( j=0; j<index; j++)
        {
            arry[j]=arry[j+1];
        }
        index--;
    }

}

void Array ()
{
    int i=0, sum=0, sum2=0;
    float average;
    if(index<0)

        printf("No value\n");
    else
    {
        printf("\n");
        printf("%d", sum);
        for( ; i<=index; i++)
            {
                sum=sum+arry[i];
                printf(" p%d %d", i+1,sum);
                sum2=sum2+sum;
            }

    }
    printf("\n");
    sum2=sum2-sum;
    average=(float)sum2/((float)index+1);
    printf("\nThe average waiting time will be %.2f ms\n",average );

}


int main()
{
    int process,burst_time,i=0;
    printf("Please Enter Process Number: ");
    scanf("%d", &process);
    char proces[process];
    while(process!=0)
    {
        printf("\nEnter Process: ");
        scanf("%s", &proces[i]);
        printf("\nEnter Burst Time: ");
        scanf("%d",&burst_time );
        Push(burst_time);
        process--;
        i++;

    }

    Array();


    return 0;
}
