#include<stdio.h>
int main(){
    int a[3][3],i,j,sumrow=0,sumcoloum=0;
    printf("Enter the element of 3x3 matrics: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j])
             sumrow+=a[i][j];
        }
        printf("The Sum of row %d is %d",i+1,sumrow);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sumcoloum+=a[j][i];
        }
        printf("The Sum of coloum %d is %d",j+1,sumcoloum);
    }

    return 0;
}