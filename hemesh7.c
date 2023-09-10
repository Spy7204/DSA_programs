/*Name=Hemesh Chopade
  Branch=IT
  Roll No=11
*/


#include<stdio.h>

/*function that checkes that two array are identical*/
int check(int arr1[], int arr2[], int n)
{
    int flag=1;
    for(int i=0; i<n; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            flag=0;
        }
    }
    return flag;
}
void main()
{  
    int n;
    printf("enter the numbers of elements you want in a array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("enter 1st array values: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter 2nd array values: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("the array are identical: %d", check(arr1, arr2, n));
}