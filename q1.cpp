#include <iostream>
using namespace std;

//Function to display multiplication table
void multiplicationTable (int number)
{
	for (int i=0; i<=10; i++)
	{
		cout << i << "x" << number << "=" << i*number << endl;
	}
}
int main()
{
	int number;
	char choice;
	
	do
	{
		cout << "Enter number to multiply: ";
		cin >> number;
		
		//Call the function
		multiplicationTable (number);
		
		cout << "Want to continue (y-yes / n-no): ";
		cin >> choice;
	}
	while (choice =='y'|| choice == 'Y');
	
	return 0;
}
