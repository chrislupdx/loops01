//Lab
//Chris Lu10/30/19
//dry run of blind shot

#include <iostream>
#include <iomanip>
//not sure what other packets we need

using namespace std;

int greaterLess(int);

int main(){

int starting, ending, i;
int sum = 0;

//	cout << "this program does x" <<  endl;
	cout << "gimme 2 integers: " << endl;
	cin >> starting >> ending; 
//	cout << "starting is " << starting << endl << "ending is " << ending << endl;


//a for loop that evaluates until we reach the integer value of ending	
for(i = starting; i <= ending; i++)
{
	cout << "current number is: " << i << endl;
	sum = greaterLess(i);
	cout << "sum in 4lop is: " << sum << endl;
}

	return 0;
}

//should you be a void function and pass sum via pointer to the sum that
//live in main?
int greaterLess(int number)
{
int sum = 0;
//handles the greater less than bsnss logic
	if (number % 2 == 0)
	{
	2 + sum;
	//this adding isn't happening cleanly
	cout << "forward forward" << endl;
	cout << "sum after even is: " << sum << endl;
	}
	else {
	sum = sum - 1;
	cout << "back" << endl;
	cout << "sum after odd is: " << sum << endl;
	}
	cout << "sum inside gl is: " << sum << endl;
	return sum; 
	//how are we assigning this value from sum (the line above)
	//to an external source/actionable place
}
