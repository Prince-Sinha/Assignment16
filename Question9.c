#include<stdio.h>
int main(){
    int a[3][3],i,j,countzero=0,countnonzero=0;
    printf("Enter the element of 3x3 matrics: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            if(a[i][j])
               countnonzero++;
            else
              countzero++;    
        }
    }
    if(countnonzero<countzero)
      printf("The given 3x3 matrix is sparse matrix");
    else
      printf("The given 3x3 matrix is not sparse matrix");
    return 0;
}