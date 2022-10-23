#include<stdio.h>
int main()
{
    int i,j,n,a[50],frame[10],no,k,avail,count=0;
    printf("\n Enter number of frames: ");
    scanf("%d",&no);
    printf("\n Enter number of pages: ");
    scanf("%d",&n);
    printf("\n Enter page number: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<no; i++)
        frame[i]= -1;
    j=0;
    for(i=1; i<=n; i++)
    {
        avail=0;
        for(k=0; k<no; k++)
            if(frame[k]==a[i])
                avail=1;
        if (avail==0)
        {
            frame[j]=a[i];
            j=(j+1)%no;
            count++;
            for(k=0; k<no; k++)
            {
                if(frame[k]==-1)
                    printf("_\t");

                else
                    printf("%d\t",frame[k]);
            }

        }
        printf("\n");
    }
    printf("Page Fault Is %d",count);
    return 0;
}
