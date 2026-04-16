#include<stdio.h>
int main(void){
    int i,j;
    const int ROW = 3;
    const int COL = 4;
    
    int arr[ROW][COL]={
        1,2,3,4,
        5,6,7,8,
        9,10,11,12
    };

printf(">>>> *(arr+i)+j) <<<\n");
for(i=0; i<ROW;i++){
    for(j=0; j<COL; j++){
        printf("%4d",*(*(arr+i)+j));

    }
    printf("\n");

}

printf(">>>> *(arr[i][i]) <<<\n");
for(i=0; i<ROW;i++){
    for(j=0; j<COL; j++){
        printf("%4d",arr[i][j]);


    }
    printf("\n");

}

}