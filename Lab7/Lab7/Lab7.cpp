#include <iostream>
#include <vector>

using namespace std;

int sum(const std::vector<int> &v);
int max(const std::vector<int> &v);

int main()
{
	cout << "Lab 7 " << endl;

	// initialize vector with values
	vector<int> values{ 5, 10, 15, 20, 25, 25 };


	// print vector content
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] << " ";
	}

	// print vector sum 
	cout << "\nThe sum of the vector is: " << sum(values);

	// print vector sum 
	cout << "\nThe max value in the vector is: " << max(values);


	cout << endl;
	system("pause");
	return 0;
}


int sum(const std::vector<int> &v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	return sum;
}

int max(const std::vector<int> &v)
{
	int max = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}