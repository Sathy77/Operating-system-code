#include<stdio.h>
int main(){
    int i,j,k,requests,sum=0,x,y,head;
    printf("Enter number of requests ");
    scanf("%d",&requests);
    printf("\nqueue= ");
    int ary[requests];

    for(i=0;i<requests;i++)
    {
        scanf("%d",&ary[i]);
    }

    printf("\nhead start at ");
    scanf("%d",&head);


    int temp=head;
    printf("\nTotal distance: ");
    for(i=0;i<requests;i++){
        sum+=abs(ary[i]-temp);
        if(ary[i]>temp)
            printf("(%d-%d)",ary[i], temp);
        if(ary[i]<temp)
            printf("(%d-%d)", temp,ary[i]);
        if(i<(requests-1))
            printf("+");
        temp=ary[i];
    }
    printf("\n");
    temp=head;
    printf("Path: %d", temp);
    for(i=0;i<requests;i++){
        printf(" %d",ary[i]);
        temp=ary[i];
    }
    printf("\n");
    printf("\nIllustration shows total head movement of %d cylinders\n", sum);
    return 0;
}
