#include <stdio.h>

int main() {
    int arr[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    printf("Cold spots found are:\n\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int temp = arr[i][j];
            int isCold = 1;

            if (i > 0 && temp >= arr[i - 1][j]) isCold = 0;
            if (i < 3 && temp >= arr[i + 1][j]) isCold = 0;
            if (j > 0 && temp >= arr[i][j - 1]) isCold = 0;
            if (j < 3 && temp >= arr[i][j + 1]) isCold = 0;

            if (isCold)
                printf("At position (%d,%d) with temperature %d°C.\n\n", i + 1, j + 1, temp);
        }
    }

    return 0;
}
