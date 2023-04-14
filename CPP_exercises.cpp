#include <iostream>
using namespace std;

/* Exercise 1
main()
{
	int firstNum;
	int secondNum;
	
	cout << "Type the first number:";
	cin >> firstNum;
	cout << "Type the second number:";
	cin >> secondNum;
	cout << "Sum of the numbers is " << firstNum + secondNum << endl;
}*/

// Exercise 2
/*main() 
{
	double dollars;
	double euroToDollar = 0.727802;
	
	cout << "How much dollars do you want to exchange:";
	cin >> dollars;
	cout << "Amount in euros: " << dollars * euroToDollar << endl;	
}*/

//Exercise 3
/*int main()
{
	int radius;
	
	cout << "Input circle radius:";
	cin >> radius;
	cout << "Circle area with the given radius: " << 3.142 * radius * radius << endl;
}*/

//Exercise 4
/*int main()
{
	int first_int;
	int second_int;
	
	cout << "Input first integer:";
	cin >> first_int;
	cout << "Input second integer:";
	cin >> second_int;
	
	cout << first_int << "+" << second_int << " = " << first_int + second_int << endl;
	cout << first_int << "-" << second_int << " = " << first_int - second_int << endl;
	cout << first_int << "*" << second_int << " = " << first_int * second_int << endl;
	cout << "Remainder: " << first_int % second_int << endl;
	
	return 0;
}*/

//Exercise 5
/*int main()
{
	int leg1, leg2;
	double hypotenuse;
	
	cout << "Input first triangle leg:";
	cin >> leg1;
	cout << "Input second triangle leg:";
	cin >> leg2;
	
	hypotenuse = sqrt(leg1*leg1 + leg2*leg2);
	cout << "Hypotenuse length: " << hypotenuse << endl;	
}*/

//Exercise 6
/*int main()
{
	int input;
	
	cout << "Input an integer: ";
	cin >> input;
	
	if (input % 2 == 0) 
	{
		cout << "The number " << input << " is even." << endl;	
	}
	else 
	{
		cout << "The number " << input << " is odd." << endl;	
	}
}*/

//Exercise 7
/*int main()
{
	char drink;
	int cubes;
	
	cout << "Do you drink coffee or tea? (c/t) ";
	cin >> drink;
	
	cout << "With how many cubes of sugar? ";
	cin >> cubes;
	
	if (drink == 'c')
	{
		if (cubes >= 3)
		{
			cout << "Well, coffee can taste pretty intense..." << endl;
		}
		else if (cubes >= 0)
		{
			cout << "Coffee certainly is invigorating!" << endl;	
		}
		else
		{
			cout << "An error occurred in the program!" << endl;	
		}
	}
	else 
	{
		if (cubes >= 3)
		{
			cout << "Guess you enjoy your tea overly sweet?" << endl;
		}
		else if (cubes >= 0)
		{
			cout << "Tea can have a soothing effect!" << endl;
		}
		else
		{
			cout << "An error occurred in the program!" << endl;	
		}
	}
}*/

//Exercise 8
/*int main()
{
	int firstNum, secondNum, userChoice;
	
	cout << "Choose desired calculation:" << endl;
	cout << "1: subtraction" << endl;
	cout << "2: addition" << endl;
	cout << "3: multiplication" << endl;
	cout << "4: division" << endl;
	cout << "5: Remainder" << endl;
	
	cout << "Choose a calculation:";
	cin >> userChoice;
	
	cout << "Input first number:";
	cin >> firstNum;
	
	cout << "Input second number:";
	cin >> secondNum;
	
	switch(userChoice)
	{
		case 1:
			cout << firstNum << "-" << secondNum << " = " << firstNum - secondNum << endl;
			break;
			
		case 2:
			cout << firstNum << "+" << secondNum << " = " << firstNum + secondNum << endl;
			break;
			
		case 3:
			cout << firstNum << "*" << secondNum << " = " << firstNum * secondNum << endl;
			break;
			
		case 4:
			cout << firstNum << "/" << secondNum << " = " << firstNum / secondNum << endl;
			break;
			
		case 5:
			cout << firstNum << "%" << secondNum << " = " << firstNum % secondNum << endl;
			break;
			
		default:
			cout << "Incorrect input." << endl;
	}
}*/

//Exercise 9
/*int main()
{
	int userInput;
	cout << "Input an integer:";
	cin >> userInput;
	
	for (int i = 1; i <= userInput; i++)
	{
		cout << i << endl;	
	}
}*/

//Exercise 10
/*int main() 
{
	int userInput, total = 1;
	
	cout << "Input an integer:";
	cin >> userInput;
	
	for (int i = 1; i <= userInput; i++)
	{
		total *= i;
	}
	
	cout << "The factorial of number " << userInput << " is " << total << endl;
}*/

//Exercise 11 - FIRST WAY
/*int main()
{
	int input, totalGrade = 0, counter = 0;
	float averageGrade;
	
	cout << "Program calculates the test grade average." << endl;
	cout << "Finish inputting with a negative number." << endl;
	
	do 
	{
		cout << "Input grade (4-10) ";
		cin >> input;
		if (input >= 4 && input <= 10)
		{
			counter++;
			totalGrade += input;
		}
		
	} while (input > 0);
	
	cout << "You inputted " << counter << " grades." << endl;
	averageGrade = (float)totalGrade/counter;
	cout << "Grade average: " << averageGrade << endl;	
}
*/

//11- SECOND WAY
/*int main()
{
	int input, totalGrade = 0, counter = 0;
	float averageGrade;
	
	cout << "Program calculates the test grade average." << endl;
	cout << "Finish inputting with a negative number." << endl;
	
	while (input >= 0) 
	{
		cout << "Input grade (4-10) ";
		cin >> input;
		if (input < 0)
		{
			break;
		}
		else if (input >= 4 && input <= 10)
		{
			counter++;
			totalGrade += input;	
		}
		else
		{
			continue;	
		}
	}
	
	cout << "You inputted " << counter << " grades." << endl;
	averageGrade = (float)totalGrade/counter;
	cout << "Grade average: " << averageGrade << endl;
}
*/

//Exercise 12
/*int largest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)   //num1 largest
    {
        return num1;    
    }
    else if (num2 > num1 && num2 > num3) //num2 largest
    {
        return num2;    
    }
    else
    {
        return num3;    
    }
}

int smallest(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)   //num1 smallest
    {
        return num1;    
    }
    else if (num2 < num1 && num2 < num3) //num2 smallest
    {
        return num2;    
    }
    else
    {
        return num3;    
    }
}*/

//Exercise 13
/*int main()
{
    int numberOfDays;
    float hours;
    float days[30];
    float totalHours = 0;
    float averageHours;

    cout << "The program calculates the total amount of" << endl << "work hours during a given time frame and the average work day length." << endl;
    cout << "How many days:" << endl;
    cin >> numberOfDays;
    cin.ignore();
	
    for (int i = 0; i < numberOfDays; i++)
    {
        cout << "Input hours of workday " << i+1 << ": ";
        cin >> hours;
        days[i] = hours;
        totalHours += hours;
    }

    cout << "Total work hours: " << totalHours << endl;
    averageHours = totalHours/numberOfDays;
    cout << "Average work day length: " << averageHours << endl;
    cout << "Inputted hours: ";
    for (int i = 0; i < numberOfDays; i++)
    {
        cout << days[i] << " ";
    }
    cout << endl;
    return 0;
}*/

//Exercise 14
/*class PrintClass {
public:
	void print(char* str) 
	{
		cout << str << endl;	
	}
};*/

//Exercise 15
/*class AskAndPrint {
public:
    void DoYourThing(char* text) {
        cout << text << endl;
        string userInput;
        getline(cin, userInput);
        cout << userInput << endl;
    }
};*/

//Exercise 16
/*class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}

class Printer {
public:
	void Print()
	{
		int first, second;
		cout << "Give a first integer: ";
		cin >> first;
		cout << "Give a second integer: ";
		cin >> second;
		
		Calculator calculator;
		int sum = calculator.Sum(first, second);
		cout << "Sum: " << sum << endl;
	}
};

int main()
{  
  Printer object;
  object.Print();
}  */

//Exercise 17
/*
void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++)
          {
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
}  
void print_matrix(int matrix[5][5]) 
{
	int y_value = 0;
	while(y_value < 5)
	{
		for (int x = 0; x < 5; x++)
		{		
			cout << matrix[y_value][x] << " ";
		}
		cout << endl;
		y_value++;
	}
}
	
int count_sum(int matrix[5][5])
{
	int sum = 0;
	int y_value = 0;
	while(y_value < 5)
	{
		for (int x = 0; x < 5; x++)
		{		
			sum += matrix[y_value][x];
		}
		y_value++;
	}
	return sum;
}
*/