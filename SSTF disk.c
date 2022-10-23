#include<stdio.h>
int main()
{
    int i,j=1,n,TotalHeadMoment=0,initial,count=0;
    printf("Enter the number of Requests ");
    scanf("%d",&n);
    int RQ[n], storedData[n];
    printf("\nqueue= ");
    for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);
    printf("\nhead starts at: ");
    scanf("%d",&initial);

    storedData[0] = initial;
    printf("\nTotal distance: ");
    while(count!=n)
    {
        int min=1000,d,index;
        for(i=0;i<n;i++)
        {
           d=abs(RQ[i]-initial);
           if(min>d)
           {
               min=d;
               index=i;
           }

        }
        if(count<n-1)
            printf("(%d - %d) + ", RQ[index], initial);
        else
            printf("(%d - %d)", RQ[index], initial);
        TotalHeadMoment=TotalHeadMoment+min;
        initial=RQ[index];
        storedData[j] = initial;
        RQ[index]=1000;
        count++;
        j++;
    }
    printf("\npath: ");
    for(i=0; i<=n; i++)
    {
        printf("%d ", storedData[i]);
    }
    printf("\n\nIllustration shows total head movement of %d cylinders",TotalHeadMoment);
    printf("\n");
    return 0;
}
