#include <stdio.h>

void merge_sort_algorithm(int arr[], int init, int end);
void merge(int arr[], int init, int medianQ, int end);

int main() {

	int arr[] = {5, 456, -1, -35, 500, 1, 2, 68, 100};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	
	printf("\nUnsorted Arr: {");
	for(int i = 0; i < arr_size - 1; i++) 
		printf("%d, ", arr[i]);
	printf("%d}\n", arr[arr_size-1]);
	
	merge_sort_algorithm(arr, 0, arr_size-1);
	
	printf("Sorted Arr: {");
	for(int j = 0; j < arr_size - 1; j++) 
		printf("%d, ", arr[j]);
	printf("%d}\n", arr[arr_size-1]);
	
	
	return 0;
	
}


void merge(int arr[], int init, int medianQ, int end) {
	
	int arrL_size = medianQ - init + 1;
	int arrM_size = end - medianQ;
	
	int L[arrL_size], M[arrM_size];
	
	for (int i = 0; i < arrL_size; i++)
		L[i] = arr[init + 1];
	for (int j = 0; j < arrM_size; j++)
		M[j] = arr[medianQ + 1 + j];
	
	int i, j, k;
	i = 0;
	j = 0;
	k = init;
	
	while (i < arrL_size  && j < arrM_size) {
		
		if (L[i] <= M[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = M[j];
			j++;
		}
		k++;
		
	}
	
	while (i < arrL_size) {
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while (j < arrM_size) {
		arr[k] = M[j];
		j++;
		k++;
	}

}

void merge_sort_algorithm(int arr[], int init, int end) {

	if (init < end) { 
	    int medianQ = ((end + (init - end)) / 2);
	    merge_sort_algorithm(arr, init, medianQ);
	    merge_sort_algorithm(arr, medianQ+1, end);
	    merge(arr, init, medianQ, end);
    }

}