#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,temp;
    printf("Enter the element of 3x3 matrics:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
     
    printf("The transpose of given matrics: \n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}