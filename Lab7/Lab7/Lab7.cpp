#include <iostream>
#include <vector>
#include "Lab7.h"

using namespace std;

int main()
{
	cout << "Lab 7 " << endl << endl;

	// initialize vector with values
	vector<int> values{ 5, 10, 15, 20, 25, 25 };

	// print vector content
	cout << "The numbers in the vector are: ";
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] << " ";
	}

	// print sum of the values in the vector
	cout << "\nThe sum of the vector is: " << sum(values);

	// print the max value in the vector
	cout << "\nThe max value in the vector is: " << max(values);

	// print the min value in the vector
	cout << "\nThe min value in the vector is: " << min(values);

	// print the average value in the vector
	cout << "\nThe average value in the vector is: " << average(values);

	cout << endl << endl;


	vector<int> values2{ 5 };

	// print vector content
	cout << "The numbers in the vector are: ";
	for (int i = 0; i < values2.size(); i++) {
		cout << values[i] << " ";
	}

	// print sum of the values in the vector
	cout << "\nThe sum of the vector is: " << sum(values2);

	// print the max value in the vector
	cout << "\nThe max value in the vector is: " << max(values2);

	// print the min value in the vector
	cout << "\nThe min value in the vector is: " << min(values2);

	// print the average value in the vector
	cout << "\nThe average value in the vector is: " << average(values2);

	cout << endl << endl;

	system("pause");
	return 0;
}