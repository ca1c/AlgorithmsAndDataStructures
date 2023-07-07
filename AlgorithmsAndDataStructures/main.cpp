#include <iostream>

using namespace std;

/*
* Conducts a binary search on a sorted array of integers
* returns index of number
* arr is a pointer to an integer array
* l is the lower bound, or index 0
* r is the upper bound or length - 1
* x is the number the function is searching for
*/

int binarySearch(int* arr, int l, int r, int x) {
	
	while (l <= r) {
		int median = l + (r - l) / 2;

		if (arr[median] == x) {
			return median;
		}

		if (arr[median] < x) {
			l = median + 1;
		}
		else {
			r = median - 1;
		}
	}

	return -1;
}

/*
* Finds and returns the nth fibonacci number
* n is the nth fibonacci number
*/

int recursiveFibonacci(int n) {
	if (n == 0) {
		return n;
	}
	if (n == 1) {
		return n;
	}
	return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main() {
	
	//int sortedArray[] = { 1, 5, 9, 12, 15, 17, 20 };
	//int length = sizeof(sortedArray) / sizeof(sortedArray[0]);
	//cout << "searching for number 17" << endl;
	//cout << "found at index " << binarySearch(sortedArray, 0, length - 1, 17) << endl;

	//cout << endl;
	//cout << endl;

	//cout << "the 7th fibonacci number is " << recursiveFibonacci(2) << endl;

	return 0;
}