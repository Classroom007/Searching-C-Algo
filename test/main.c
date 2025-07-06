#include <stdio.h>
#include "search.h"
#include "sort.h"

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    // Read array size
    if (scanf("%d", &n) != 1) return 1;
    int arr[n];
    // Read n array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    int target;
    // Read target value to search
    if (scanf("%d", &target) != 1) return 1;

    // Test searches
    int idx_lin = linear_search(arr, n, target);
    printf("%d", idx_lin);
    int idx_bin = binary_search(arr, n, target);
    printf("%d", idx_bin);

    // Test sorts
    int temp[n];
    // Bubble sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    bubble_sort(temp, n);
    print_array(temp, n);

    // Selection sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    selection_sort(temp, n);
    print_array(temp, n);

    // Insertion sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    insertion_sort(temp, n);
    print_array(temp, n);

    return 0;
}
