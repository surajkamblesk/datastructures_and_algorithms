#include<stdio.h>
#include<stdlib.h>
main(){
  int row , col , i,j,arr[20][20];
  int col_sum = 0;
  int row_sum = 0;
  printf("enter row numeber and column number");
  scanf("%d%d",&i,&j);

  printf("enter the matrix");
  for(row=0;row<i;row++){
    for(col=0;col<j;col++){
      scanf("%d", &arr[row][col]);
    }
  }
  /* -2   4   6   4
      1   3   8   2
      12  5   0   2
      12  8  -6   6*/

  for(row=0;row<i;row++)
  row_sum = row_sum + arr[row][row];

  for(col=0;col<j;col++)
  col_sum = col_sum + arr[col][col];

  int DiaTotal = col_sum + row_sum;

  printf("DiagonalI : %d\n DiagonalII : %d\n",row_sum,col_sum);
  printf("Total : %d\n",DiaTotal );


}
