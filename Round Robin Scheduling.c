#include<stdio.h>
typedef struct _ABC
{
    char process[10];
    int brustTime;
} ABC;

int main()
{
    int i, j, processNumber, sumBrustTime=0, sum=0, quantam;
    printf("Please Enter Process Number: ");
    scanf("%d", &processNumber);
    ABC object[processNumber];
    for(i=0; i<processNumber; i++)
    {
        printf("\nEnter Process: ");
        scanf("%s", object[i].process);
        printf("\nEnter Burst Time: ");
        scanf("%d", &object[i].brustTime);
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", &quantam);

    printf("%d ", sumBrustTime);
    for(i=0; i<processNumber; i++)
    {
        if(object[i].brustTime>=quantam)
        {
            object[i].brustTime=object[i].brustTime-quantam;
            sumBrustTime = sumBrustTime + quantam;
            printf("%s %d ", object[i].process, sumBrustTime);
            sum = sum + sumBrustTime - object[i].brustTime;
        }
        else if((object[i].brustTime<quantam)!=0)
        {
            object[i].brustTime=object[i].brustTime-object[i].brustTime;
            sumBrustTime = sumBrustTime + object[i].brustTime;
            printf("%s %d ", object[i].process, sumBrustTime);
            sum = sum + sumBrustTime - object[i].brustTime;
        }
    }

    printf("\n");
    sum=sum-sumBrustTime;

    printf("The average waiting time will be %.2f ms\n",(float)sum/processNumber );

    return 0;
}

