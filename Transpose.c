/*This c program is for transposing a given 2d square array.
I/P: 1) order of the 2d square array.
     2) elements of the square array (order*order elements)

O/P: Displays the transpose of the given 2d square array

Constraints:
            1 <= order <= 100
Note:
        This program only works for square matrix of order from 0 to 100 since dynamic memory allocation is not used.
*/
#include<stdio.h>

// this function gets the input for a 2d square matrix

void input(int mat[][100], int order)
{
	for(int i=0;i<order;i++)
	{
		for(int j=0;j<order;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

//this function transposes the 2d array passed and stores it in the same array
void transpose(int mat[][100], int order)
{
	int temp;
	for(int i=0;i<order-1;i++)
    {
		for(int j=i+1;j<order;j++)
    	{
	    	temp = mat[i][j];
		    mat[i][j] = mat[j][i];
		    mat[j][i] = temp;
	    }
    }
}

//this function prints the 2d array
void output(int mat[][100], int order)
{
	for(int i=0;i<order;i++)
	{
		for(int j=0;j<order;j++)
		{
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}	
}

int main()
{
	int mat[100][100],order,temp;
	printf("\nEnter the order of the square matrix ranging from 1-100:");
	scanf("%d",&order);
	if(order >= 1 && order <=100)
	{
		printf("\n Enter the element of the square matrix: ");
		input(mat,order);
		printf("\nThe transpose is:\n");
		output(mat,order);		
	}
	else
	{
		printf("\n Enter the order in mentioned range...");
	}
	return 0;
}
