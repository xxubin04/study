#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Point2D {
	int x;
	int y;
};

int main() {
	int n = 0;
	int max_dist = 0;
	int max_x_1 = 0, max_y_1 = 0;
	int max_x_2 = 0, max_y_2 = 0;
	vector<Point2D> points;

	ifstream infile("input2.txt");

	infile >> n;
	for (int i = 0; i < n; i++) {
		
		Point2D p;

		infile >> p.x;
		infile >> p.y;

		points.push_back(p);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			double dist = pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2);
			if (dist > max_dist) {
				max_dist = dist;
				max_x_1 = points[i].x;
				max_y_1 = points[i].y;
				max_x_2 = points[j].x;
				max_y_2 = points[j].y;
			}
		}
	}

	::cout << max_x_1 << " " << max_y_1 << endl;
	::cout << max_x_2 << " " << max_y_2 << endl;
	::cout << sqrt(max_dist) << endl;

	return 0;
}