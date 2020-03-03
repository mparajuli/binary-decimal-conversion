#include <iostream>
#include <cmath>		//include <cmath> for using pow and math problems.
#include <string>		//declare string
using namespace std;
int numbers;			//declare numbers
int option;				//declare option
int binaryToDecimal (int numbers);			//declare prototype function
void decimalToBinary (int numbers);			//declare prototype function

int main()
{
	cout << "1) Convert Binary to Decimal." << endl;	//print out some sentences for options
	cout << "2) Convert Decimal to Binary." << endl;
	cout << "Enter 1, 2, or 0 to exit." << endl <<endl;
	cout << "Choose a number from 0, 1, and 2: ";
	cin >> option;										//prompts the user to insert the option number
	cout << endl;
	
	while (option)					//using while loop for options
	{
		if (option == 1)			//option equals one
		
		{	
			cout <<"1) Binary to Decimal Conversion." << endl;
			cout << "Enter the binary number(numbers <= 1000 000 000): "; 			//print out the sentence that tell the user the limited number that they can insert.
			cin >> numbers;	
			cout << numbers << " = " << binaryToDecimal(numbers) << endl << endl;
		}
		else if (option == 2)	 	//option equals two
		{
			cout <<"2) Decimal to Binary Conversion." << endl;
			cout <<"Enter the decimal number(numbers <= 1000 000 000): ";			//print out the sentence that tell the user the limited number that they can insert. 
			cin >> numbers;
			decimalToBinary(numbers);
			cout << endl;
		}
		else
		{
			cout <<"Invalid number. Please try again." << endl << endl;				//print out the sentence to tell the user that they insert the invalid number.
		}
		
	cout << "1) Convert Binary to Decimal." << endl;		//print out some sentences for options in while loop for repeating.
	cout << "2) Convert Decimal to Binary." << endl;
	cout << "Enter 1, 2, or 0 to exit." << endl <<endl;
	cout << "Choose a number from 0, 1, and 2: ";
	cin >> option;
	cout << endl;
	}
	
	return 0;
}


int binaryToDecimal (int numbers) //prototype function and formula that converts the result from binary to decimal.
{
	int numbers1 = numbers;  		//declare variables 
	int remainder;
	int decimal=0;
	int i = 0;
	while (numbers1 != 0)		//numbers1 differs from 0
	{
		remainder = numbers1 % 10;					//formula for finding binary to decimal.
		decimal = decimal + remainder * pow(2,i);
		i++;						// i starts from 0, 1, 2, 3,.....
		numbers1 = numbers1 / 10;
	}
	return decimal;				// return decimal.
}


void decimalToBinary (int numbers) //void prototype function and formula that converts the result from decimal to binary. 
{
	int numbers1 = numbers;  //declare variables
	int remainder;
	string binary =" ";
	while (numbers1 !=0)
	{
		remainder = numbers1 % 2;				// formula for finding from decimal and binary.
		binary = char(remainder+48)+ binary;  //remainder plus 48 and change into char to make result reverse in the correct order. 
		numbers1 = numbers1 / 2;

	}
	cout << numbers << " = " << binary;		//print out the result. 
	cout << endl;
}
