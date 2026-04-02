#include<stdio.h>
int main() {
	int arr[3] = { 7,14,21 };

	int* ptr = arr;

	printf(" % d \n\n", ptr[2]);
	printf(" % d \n\n", arr[2]);

	return 0;

}