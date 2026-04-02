#include<stdio.h>
void addNumber(int* ptr) {
	int i = 0;
	for (i = 0; i < 10;i++) {
		ptr[i] += 100;
	}//end of i=0 loop;
 }// end of addNumber

void main(void) {
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf(">> before function call<<\n");
	for (i = 0;i < 10;i++) {
		printf("%4d", arr[i]);
	}// end of i=0 loop

	printf("\n \n");
	addNumber(arr);
	printf(">> after function call << \n");
	for (i = 0; i < 10; i++) {
		printf("%4d", arr[i]);
	}//end of i=0 loop

	printf("\n");
}//end of main