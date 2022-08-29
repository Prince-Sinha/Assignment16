#include<stdio.h>
int main(){
    int a[3][3],b[3],i,j,count,max;
    printf("Enter the element of 3x3 matrics: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            count=0;
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
                count++;
            }
            b[i]=count;
    }
    for(i=1;i<3;i++){
       if(b[i-1]>b[i])
         max=i;
        else
         max=i+1;
    }
    printf("The %d row has maximum no. of zero",max);
    return 0;
}