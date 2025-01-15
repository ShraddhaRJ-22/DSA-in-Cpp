// Operator Overloading : Matrix Addition
#include<iostream>
using namespace std;

class Matrix {
	int a[3][3];
public:
	void getdata();
	void showdata();
	Matrix operator+(Matrix m);
};

void Matrix::getdata() {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
}

void Matrix::showdata() {
	for(int i = 0; i < 3; i++) {
		cout << " ";
		for(int j = 0; j < 3; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

Matrix Matrix::operator+(Matrix m) {
	Matrix result;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			result.a[i][j] = a[i][j] + m.a[i][j];
		}
	}
	return result;
}

int main() {
	Matrix m1, m2, m3;
	cout << "Enter elements for 1st Matrix:" << endl;
	m1.getdata();
	cout << "Enter elements for 2nd Matrix:" << endl;
	m2.getdata();

	cout << "1st Matrix: " << endl;
	m1.showdata();
	cout << "2nd Matrix: " << endl;
	m2.showdata();

	m3 = m1 + m2; // corrected this line
	cout << "Addition of Matrix: " << endl;
	m3.showdata();

	return 0;
}

