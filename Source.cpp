#include <iostream>
using namespace std;

void answers(float, float, float);
void gpa(int, int);

int student_numbers;
float x, maxm, minm, y = 0, z = 5, av = 0;


int main() {
	cout << "Enter the number of students" << endl;
	cin >> student_numbers;

	for (int i = 1; student_numbers >= i; ++i)
	{
		// Input GPA entry
		gpa(i, student_numbers);
		cin >> x;

		// error case: GPA != -ve or more than 5
		if (x > 4 || x < 0) {
			x = 0;
			cout << "You entered Wrong GPA" << endl << "please enter NEW GPA" << endl;
			cin >> x;
		}

		// maximum
		if (x > y) {
			y = x;
			maxm = y;
		}
		else {
			maxm = y;
		}

		// minimum
		if (x < z) {
			z = x;
			minm = z;
		}
		else {
			minm = z;
		}

		// avarage
		av += x;
	}

	// output
	answers(av, maxm, minm);
	return 0;
}

// Input
void gpa(int m, int n) {
	if (m == 1)
		cout << endl << "please enter the frist GPA from 0 to 4" << endl;
	else if (m == n)
		cout << endl << "please enter the last one from 0 to 4" << endl;
	else
		cout << endl << "please enter anther one from 0 to 4" << endl;
}

// output
void answers(float ava, float maxm, float minm) {
	cout << endl << "The avarage of GPA = " << ava / student_numbers << endl;
	cout << "The maximum GPA is " << maxm << endl;
	cout << "The minimum GPA  is " << minm << endl;
}
