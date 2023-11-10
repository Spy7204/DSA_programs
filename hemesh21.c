include <stdio.h>
//bubble sort
void bubbleSort(int *a, int n);

int main() {
    int n;
    printf("Specify the no. of elements :");
    scanf("%d", &n);
    printf("Enter elements : \n");
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before Sorting : \n");
    for (int i = 0; i < n; i++) {
        printf("a%d = %d\n", i + 1, a[i]);
    }

    printf("After Sorting : ");
    bubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        printf("a%d = %d\n", i + 1, a[i]);
    }

    return 0;
}

void bubbleSort(int *a, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}




//selection sort
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *a, int n) {
    int i, j, minIndex;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&a[i], &a[minIndex]);
        }
    }
}

int main() {
int n;
    printf("Specify the no. of elements :");
    scanf("%d", &n);
    printf("Enter elements : \n");
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
   printf("Before Sorting : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    printf("After Sorting : ");
    selectionSort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n",a[i]);
    }

return 0;
}


