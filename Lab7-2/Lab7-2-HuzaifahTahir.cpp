#include <iostream>
#include <fstream>

using namespace std;

int main() {

	system("title Lab7-2-HuzaifahTahir");

	const int SIZE = 10;

	int theArray[SIZE];



	// INPUT: save the scores into theArray.

	//...


	for (int i = 0; i < SIZE; i++) {
		
		cout << "Enter score: ";
		cin >> theArray[i];

	}



	// PROCESS: count the perfect scores (i.e., 100s) in the array

	//...

	int counter = 0;
	for (int i = 0; i < SIZE; i++) {
		if (theArray[i] == 100)
			counter++;
	}

	// OUTPUT:  display the count of prefect scores on the screen

	//...

	cout << "The number of perfect scores in the array: " << counter << ".\n";
	system("pause");



	return 0;

}

