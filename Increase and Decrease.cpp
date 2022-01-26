#include <iostream>
#include <math.h>
using namespace std;

int a;
int b;
double start_val, current_val, subtracted_val, final_val;
int sel;
double answer;

void printab() {
	cout << "Enter Starting Value: ";
	cin >> start_val;
	cout << "Enter Current Value: ";
	cin >> current_val;
}

void options() {
	cout << "Select a switch from below: " << endl;
	cout << "1. Increase Calculator" << endl;
	cout << "2. Decrease Calculator" << endl;
	cout << "0. EXIT" << endl;
	cin >> sel;
}
void cases() {
	switch (sel) {
	case 1:
		printab();
		subtracted_val = current_val - start_val;
		final_val = (subtracted_val / start_val) * 100;
		cout << "Percentage Increased = " << final_val << "%" << endl;
		cout << "Do you want to continue";
		break;
	case 2:
		printab();
		subtracted_val = start_val - current_val;
		final_val = (subtracted_val / start_val) * 100;
		cout << "Percentage Decreased = " << final_val << "%" << endl;
		cout << "Do you want to continue";
		break;
	case 0:
		cout << "EXIT! " << endl;
		break;
	default:
		cout << "Invalid select for switch. Please try again" << endl;
		break;
	}
}

int main()
{
	int tries = 1;
	while (tries != -1) {
		options();
		cases();
		cout << "If you wish to continue using the calculator press any integer" << endl;
		cout << "Input Integer (-1 to EXIT)" << endl;
		cin >> tries;
	}
}