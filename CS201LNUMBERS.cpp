//Name: Tori Jones
//Program 1 - Numbers
//Program allows user to enter 4 numbers. It should output the largest, smallest, average, print in increasing order, and in descendcing order/ It should 

#include <iostream>
using namespace std;

int main(){
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

		//print in increasing order

		
		

		

	}


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
