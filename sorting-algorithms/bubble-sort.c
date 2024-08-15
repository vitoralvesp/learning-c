#include <stdio.h>

void bubble_sort_algorithm(int arr[], int arr_size);
void swap(int arr[], int left, int right);

int main() {

	int arr[] = {10, 5, 6, 3, 1, 0, 2, 7, 4, 8, 9};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	
	printf("\nUnsorted Arr: {");
	for(int i = 0; i < arr_size - 1; i++) 
		printf("%d, ", arr[i]);
	printf("%d}\n", arr[arr_size-1]);
	
	bubble_sort_algorithm(arr, arr_size);
	
	printf("Sorted Arr: {");
	for(int j = 0; j < arr_size - 1; j++) 
		printf("%d, ", arr[j]);
	printf("%d}\n\n", arr[arr_size-1]);
	
	
	return 0;
	
}

// bubble_sort_algorithm(array, total of elements) --> sort an array in ascending order
void bubble_sort_algorithm(int arr[], int arr_size) {

	for(int k = 0; k < arr_size - 1; k++) {
        for(int l = 0; l < arr_size - k - 1; l++)
            if (arr[l] > arr[l+1]) swap(arr, l, l+1);
    }

}

// swap(array, left element, right element) --> swap elements position on a given array
void swap(int arr[], int left, int right) {
	 
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;

}
