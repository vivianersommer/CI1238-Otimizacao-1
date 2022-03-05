#include<stdio.h>

void binPacking(int *a, int size, int n) {

    int resto = 0, i = 0, viagens = 1, s = size, temp = 0;

    for (i = 0; i < n; i++) {

        if (s - *(a + i) > 0) {

            s -= *(a + i);

        } else {

            temp = s - *(a + i);
            temp = temp * (-1);
            viagens++;
            s = size - temp;
            
        }

    }


 
    printf("Number of bins required: %d\n", viagens);
}
 
int main(int argc, char **argv) {

    int n, i, size;

    printf("Enter the number of items in Set: ");
    scanf("%d", &n);

    printf("Enter %d items:", n);
    int a[n];
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the bin size: ");
    scanf("%d", &size);

    binPacking(a, size, n);
    return 0;
}