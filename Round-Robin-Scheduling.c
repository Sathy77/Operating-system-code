#include<stdio.h>
typedef struct _ABC
{
    char process[10];
    int brustTime;
    int forWaitingTime;
} ABC;

int main()
{
    int i, counter, processNumber, sum=0, quantam, avergeWaitingTime=0;

    printf("Please Enter Process Number: ");
    scanf("%d", &processNumber);

    ABC object[processNumber];
    int temporaryBrustTime[processNumber];

    for(i=0; i<processNumber; i++)
    {
        printf("\nEnter Process: ");
        scanf("%s", object[i].process);
        printf("\nEnter Burst Time: ");
        scanf("%d", &object[i].brustTime);
        temporaryBrustTime[i] = object[i].brustTime;
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", &quantam);

    printf("\n0");
    while(counter!=processNumber)
    {
        counter = 0;
        for(i=0; i<processNumber; i++)
        {
            if(temporaryBrustTime[i]>0)
            {
                if(temporaryBrustTime[i]>=quantam)
                {
                    sum += quantam;
                    object[i].forWaitingTime = sum;
                    printf(" %s %d", object[i].process, sum);
                    temporaryBrustTime[i] -= quantam;
                }
                else
                {
                    sum += temporaryBrustTime[i];
                    object[i].forWaitingTime = sum;
                    printf(" %s %d", object[i].process, sum);
                    temporaryBrustTime[i] = 0;
                }
            }
            else
            {
                counter += 1;
            }
        }
    }
    printf("\n");
    for(i=0; i<processNumber; i++)
    {
        avergeWaitingTime = avergeWaitingTime + object[i].forWaitingTime - object[i].brustTime;
    }
    printf("\nAverage Waiting Time = %0.2lf ms\n", (double)avergeWaitingTime/processNumber);
    return 0;
}

