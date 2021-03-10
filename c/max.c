#include "max.h"

int max(int arr[], int n){
	int m = arr[0];
	int i = 1;
	for(i = 1; i < n; i++){
		if(arr[i] > m){
			m = arr[i];
		}
	}
	return m;
}
