#include <stdio.h>
#include "search.h"
#include "sort.h"

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, target;
    // Read array size and target for search
    if (scanf("%d %d", &n, &target) != 2) return 1;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // Test searches
    int idx_lin = linear_search(arr, n, target);
    printf("%d", idx_lin);
    int idx_bin = binary_search(arr, n, target);
    printf("%d", idx_bin);

    // Test sorts
    int temp[n];
    // Bubble sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    bubble_sort(temp, n); print_array(temp, n);

    // Selection sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    selection_sort(temp, n); print_array(temp, n);

    // Insertion sort
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    insertion_sort(temp, n); print_array(temp, n);

    return 0;
}
