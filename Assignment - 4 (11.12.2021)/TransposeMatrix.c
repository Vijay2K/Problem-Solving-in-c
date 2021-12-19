//write c program to find transpose matrix using 2D array

#include <stdio.h>

int main(){
   int rows, columns, i, j, matrix[10][10], transpose[10][10];
   
   printf("Enter rows and columns :\n");
   scanf("%d%d", &rows, &columns);
   
   printf("Enter elements of the matrix\n");
   
   for (i= 0; i < rows; i++)
   {
      for (j = 0; j < columns; j++)
      {
          printf("Enter the value for matrix[%d][%d] : ", i, j);
          scanf("%d", &matrix[i][j]);
      }
   }
  
   for (i = 0;i < rows;i++)
   {
      for (j = 0; j < columns; j++)
      {
        transpose[j][i] = matrix[i][j];          
      }
   }

   printf("Transpose of the matrix:\n");
   
   for (i = 0; i< columns; i++) {
      for (j = 0; j < rows; j++)
      {
        printf("%d\t", transpose[i][j]);
      }
      
      printf("\n");
   }
   return 0;
}