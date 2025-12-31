#include <stdio.h>
#include <string.h>
int linearSearchStrings(char *arr[], int size, char *target) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], target) == 0) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    char *cities[] = {"New York", "London", "Tokyo", "Paris", "Mumbai", "Berlin"};
    int n = sizeof(cities) / sizeof(cities[0]);
    char *target = "Mumbai";
    printf("City List: ");
    for(int i = 0; i < n; i++) {
        printf("[%s] ", cities[i]);
    }
    printf("\n\nSearching for: %s\n", target);
    int result = linearSearchStrings(cities, n, target);
    if (result != -1) {
        printf("Success: '%s' found at index %d.\n", target, result);
    } else {
        printf("Error: '%s' not found in the list.\n", target);
    }
    return 0;
}
