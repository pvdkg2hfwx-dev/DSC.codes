#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;

    // Input main array size
    printf("Enter size of main array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of main array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input subarray size
    printf("Enter size of subarray: ");
    scanf("%d", &m);

    int sub[m];

    printf("Enter %d elements of subarray:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &sub[i]);
    }

    // Search for subarray
    int found = 0;
    int startIndex = -1;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (arr[i + j] != sub[j]) {
                break;
            }
        }

        if (j == m) {      // Full match
            found = 1;
            startIndex = i;
            break;
        }
    }

    // Output results
    if (found) {
        printf("Subarray found at index %d in the main array.\n", startIndex);
    } else {
        printf("Subarray NOT found.\n");
    }

    return EXIT_SUCCESS;
}
