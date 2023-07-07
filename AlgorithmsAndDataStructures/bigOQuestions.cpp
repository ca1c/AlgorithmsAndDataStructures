#include <iostream>

using namespace std;

/*
* I have converted the java examples from the book
* Cracking the Coding Interview, 6th Edition by
* Gayle Laakmann Mcdowell
* into c++ code and left it here
*/

// What is the runtime of the below code?
void foo(int* arr, int arrLength) {
	int sum = 0;
	int product = 1;

	for (int i = 0; i < arrLength; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < arrLength; i++) {
		product += arr[i];
	}

	cout << sum << ", " << product << endl;
}

/*
* Answer:
* 
* Because each array item has two operations
* it seems like the time complexity is O(2N)
* but because we drop the constants the complexity
* is O(N)
*/

// What is the runtime of the below code?
void printPairs(int* arr, int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		for (int j = 0; j < arrLength; j++) {
			cout << arr[i] << "," << arr[j] << endl;
		}
	}
}

/*
* Answer:
* 
* Because the for loop is inside the for loop
* the function is doing one operation
* FOR every other operation inside the for loop
* which makes the run time
* O(N^2)
*/

// What is the runtime of the below code?
// "This is very similar code to the above example, but now the inner for loop
// starts at i + 1"(Mcdowell 46)
void printUnorderedPairs(int* arr, int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		for (int j = i + 1; j < arrLength; j++) {
			cout << arr[i] << "," << arr[j] << endl;
		}
	}
}

/*
* Answer:
* 
* for each iteration of the outside for loop
* the runtime complexit of the inner for loop would be
* O(N - 1)
* 
* with N = i
* 
* because this is a for loop we are multiplying this by the outside for loop so
* 
* N(N - 1)
* 
* because we subtract 1 from N for each iteration we are essentially cutting N by half inside
* the for loop
* so this expression would be
* 
* (N(N - 1)) / 2
* 
* so the complexity of this is
* 
* O((N(N - 1)) / 2)
* 
* when we remove the constants its just
* 
* O(N(N))
* 
* simplified:
* 
* O(N^2)
*/


















