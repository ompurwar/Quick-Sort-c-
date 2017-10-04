//============================================================================
// Name        : main.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Quick Sort in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class  array{
private:
	int a[10];

	void quicksort(int a[], int p, int r) {
		if (p < r) {
			int q;
			q = partition(a, p, r);
			quicksort(a, p, q - 1);
			quicksort(a, q + 1, r);

		}
	}
public:
	void sort() {
		quicksort(this->a, 0, 9);
	}
	void display() {
		for (int i = 0; i < 10; ++i) {
			cout << a[i];
			cout << "\n";
		}
	}
	void fillArray() {
		this->fill(this->a);
	}
private:
	void fill(int a[]) {
		for (int i = 0; i < 10; ++i) {
			cin >> a[i];
		}
	}
	int partition(int a[], int p, int r) {
		int x = a[r];
		int i = p - 1;
		for (int j = p; j <= r - 1; ++j) {
			if (a[j] <= x) {
				++i;
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		int temp;
		temp = a[i + 1];
		a[i + 1] = a[r];
		a[r] = temp;
		return (i + 1);
	}

};

int main() {
	array om = array();
	om.fillArray();
	om.sort();
	om.display();
	return 0;
}
