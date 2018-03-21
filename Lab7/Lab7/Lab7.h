#pragma once
#include <vector>

// Calculates the sum of the values in the vector
// PRE: The vector must contain values and cannot be empty
// POST: Returns the sum of the values 
int sum(const std::vector<int> &v)
{
	int sum = 0;

	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	return sum;
}

// Finds the max value in the vector
// PRE: The vector must contain values and cannot be empty
// POST: Returns the max value in the vector
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

// Finds the min value in the vector
// PRE: The vector must contain values and cannot be empty
// POST: Returns the min value in the vector
int min(const std::vector<int> &v)
{
	int min = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

// Finds the average value in the vector
// PRE: The vector must contain values and cannot be empty
// POST: Returns the average value in the vector
double average(const std::vector<int> &v)
{
	return static_cast<double>(sum(v)) / v.size();
}