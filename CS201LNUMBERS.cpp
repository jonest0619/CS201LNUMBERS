//Name: Tori Jones
//Program 1 - Numbers
//Program allows user to enter 4 numbers. It should output the largest, smallest, average, print in increasing order, and in descendcing order/ It should 

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	char again = 'y';
	while (again == 'y') {
		cout << "Enter 4 numbers: ";
		//define variables
		int num1, num2, num3, num4;
		cin >> num1 >> num2 >> num3 >> num4;

		//find the largest number
		int large = num1;
		if (num2 > large)
			large = num2;
		if (num3 > large)
			large = num3;
		if (num4 > large)
			large = num4;

		cout << "The largest number is: " << large << endl;
		//find the smallest number
		int small = num1;
		if (num2 < small)
			small = num2;
		if (num3 < small)
			small = num3;
		if (num4 < small)
			small = num4;
		cout << "The smallest number is: " << small << endl;
		//find the average
		double average = (num1 + num2 + num3 + num4) / 4.0;
		cout << "The average is: " << average << endl;

		//print in ascending order
		int ascendingNumbers[] = { num1, num2, num3, num4 };
		sort(ascendingNumbers, ascendingNumbers + 4); //sort the array in ascending order
		cout << "Ascending order: " << ascendingNumbers[0] << " " << ascendingNumbers[1] << " " << ascendingNumbers[2] << " " << ascendingNumbers[3] << endl;

		//print in descending order 
		int descendingNumbers[] = { num1, num2, num3, num4 };
		sort(descendingNumbers, descendingNumbers + 4, greater<int>()); //sort the array in descending order
		cout << "Descending order: " << descendingNumbers[0] << " " << descendingNumbers[1] << " " << descendingNumbers[2] << " " << descendingNumbers[3] << endl;


		cout << "Do you want to enter another set of numbers? (y/n): ";
		cin >> again;

	}

}