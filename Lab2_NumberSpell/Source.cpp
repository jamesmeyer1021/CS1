#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using namespace std;

int main() {
	int number, leftdigit, rightdigit;
	string ones[] = {
		"Zero",
	"One",
	"Two",
	"Three",
	"Four",
	"Five",
	"Six",
	"Seven",
	"Eight",
	"Nine",
	"Ten",
	"Eleven",
	"Twelve",
	"Thirteen",
	"Fourteen",
	"Fifteen",
	"Sixteen",
	"Seventeen",
	"Eighteen",
	"Nineteen" };

	string tens[] = {
	"Twenty",
	"Thirty",
	"Fourty",
	"Fifty", };

	cout << "Enter a number from 1 to 50:" << endl;
	cin >> number;

	if (number >= 1 && number <= 19)
	{
		cout << "The number you have entered is:" << ones[number] << endl;
	}
	else if (number >= 20 && number <= 50)
	{
		leftdigit = number / 10;
		rightdigit = number % 10;
		cout << "The number you have entered is: " << tens[leftdigit - 2] << " " << ones[rightdigit] << endl;
	}
};