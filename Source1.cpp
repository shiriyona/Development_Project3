// Shiri Yona
// exercise 5 question 3

#include<iostream>
using namespace std;
int sumDigits(int num) //function that calculates the sum of the digits ID
{
	int num2 = 0, sum = 0;
	while (num > 0)
	{
		num2 = num % 10 * 2; // the even digit*2
		num2 = num2 % 10 + num2 / 10; //in case the number bigger or equal to 10 calculates the sum of the digits
		num = num / 10; //takes out 1 digit from the ID
		num2 = num % 10 * 1 + num2; //the odd digit*1
		num = num / 10; //takes out 1 digit from the ID
		sum = sum + num2;
	}
	return sum; //the sum of the digit 
}
int lastDigitID(int digits) //function that calculates the last digit of the ID
{
	int temp = sumDigits(digits); //sends the digits to the first function
	temp = temp % 10;
	temp = 10 - temp;
	return temp; //the last digit of the ID
}
int main()
{
	int digits;
	cout << "enter your ID:" << endl;
	cin >> digits;
	long temp2 = lastDigitID(digits); //sends the digits to the second function
	cout << "your full ID is:" << endl;
	cout << digits << temp2;
}

/*example:
enter your ID:
12345678
your full ID is:
123456782
*/
