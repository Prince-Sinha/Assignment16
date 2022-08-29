#include<stdio.h>
int main(){
    int a[3][3],i,j,sum=0;
    printf("Enter the element of 3x3 matrics: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("The Sum of 3x3 matrics is %d ",sum);
    return 0;
}