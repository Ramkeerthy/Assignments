#include<stdio.h>
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
