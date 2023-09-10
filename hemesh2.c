/*Name=Hemesh Chopade
  Branch=IT,SE(3rd sem)
  Roll No=10
2023
*/
#include<stdio.h>

/*function that prints the pascal's triangle*/
void pascal(int new_row[],int prev_row[], int n, int a)
{
    if(a==n-1)
    {
        return;
    }
    for(int i=0; i<a; i++)
    {
        new_row[i]=prev_row[i]+prev_row[i-1];
    }
    new_row[a]=1;
    for(int i=0; i<n-a; i++)
    {
        printf(" ");
    }
    for(int i=0; i<=a; i++)
    {
        printf("%3d", new_row[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        prev_row[i]=new_row[i];
    }
    pascal(new_row, prev_row, n, a+1);
}

void main()
{
    int n;
    printf("enter the value of number of rows: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    pascal(arr1, arr2, n+1, 0);
}