#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int* n = new int(0);
	double* average = new double(0.0);
	double* std_deviation = new double(0.0);
	int* max_value = new int(-10000);
	int* min_value = new int(10000);
	int* total = new int(0);
	int* num = new int[100];

	cin >> *n;

	for (int i = 0; i < *n; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < *n; j++) {
		if (num[j] > *max_value) {
			*max_value = num[j];
		}

		if (num[j] < *min_value) {
			*min_value = num[j];
		}
		
		*total += num[j];
	}

	*average = static_cast<double>(*total) / *n;

	for (int i = 0; i < *n; i++) {
		*std_deviation += (num[i] - *average) * (num[i] - *average);
	}

	*std_deviation = sqrt(*std_deviation / *n);

	cout << *min_value << " " << *max_value << " "
		<< (*total * 1.0) / *n << " " << *std_deviation << endl;

	return 0;
}