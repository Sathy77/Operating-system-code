#include<stdio.h>
typedef struct _ABC
{
    char process[10];
    int brustTime;
} ABC;

int main()
{
    int i, j, processNumber, sumBrustTime=0, sum=0;
    printf("Please Enter Process Number: ");
    scanf("%d", &processNumber);
    ABC object[processNumber];
    ABC temporary;
    for(i=0; i<processNumber; i++)
    {
        printf("\nEnter Process: ");
        scanf("%s", object[i].process);
        printf("\nEnter Burst Time: ");
        scanf("%d", &object[i].brustTime);
    }

    for(i=0; i<processNumber; i++)
    {
        for(j=i+1; j<processNumber; j++)
        {
            if(object[j].brustTime <object[i].brustTime)
            {
                temporary = object[i];
                object[i] = object[j];
                object[j] = temporary;
            }
        }
    }
    printf("%d ", sumBrustTime);
    for(i=0; i<processNumber; i++)
    {
        sumBrustTime = sumBrustTime + object[i].brustTime;
        printf("%s %d ", object[i].process, sumBrustTime);
        sum=sum+sumBrustTime;
    }

    printf("\n");
    sum=sum-sumBrustTime;

    printf("The average waiting time will be %.2f ms\n",(float)sum/processNumber );

    return 0;
}
