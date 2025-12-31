#include <stdio.h>
#include <string.h>

int binarySearchStrings(char *arr[], int size, char *target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        int res = strcmp(arr[mid], target);

        if (res == 0)
            return mid;

        if (res < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

int main() {
    char *arr[] = {"Apple", "Banana", "Cherry", "Date", "Elderberry", "Fig", "Grape"};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    char *target = "Elderberry";

    printf("List of fruits: ");
    for(int i = 0; i < n; i++) printf("[%s] ", arr[i]);
    
    printf("\n\nSearching for: %s\n", target);

    int result = binarySearchStrings(arr, n, target);

    if (result != -1)
        printf("Result: Found at index %d\n", result);
    else
        printf("Result: Not found in the list\n");

    return 0;
}
