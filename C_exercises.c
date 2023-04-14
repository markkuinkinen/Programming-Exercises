//#include <stdio.h> 

//Exercise 1
/*
int main(void)
{
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	printf("The number was: %d\n",number);
	return 0;
}
*/

//Exercise 2
/*int main()
{
	printf("Hello everybody!\n");	
}*/

//Exercise 3
/*int main() {
	int userInput, squared_number;
	
	printf("Enter an integer: ");
	scanf("%d", &userInput);
	
	squared_number = userInput * userInput;
	
	printf("The square of the number you entered is %d", squared_number);
}
*/

//Exercise 4
/*int main() 
{
	int user_int;
	float user_float;
	
	printf("Enter an integer: ");
	scanf("%d", &user_int);
	
	printf("Enter a decimal number:");
	scanf("%f", &user_float);
	
	printf("\nYou entered the integer: %d", user_int);
	printf("\nYou entered the decimal number, rounded to two decimal places: %.2f", user_float);
}*/

//Exercise 5
/*int main() 
{
	float markka_amount, euro_amount;
	
	printf("Enter an amount in FIM:");
	scanf("%f", &markka_amount);
	
	euro_amount = markka_amount / 5.94573;
	printf("FIM converted to euro: %.2f", euro_amount);
}*/

//Exercise 6
/*int main()
{
	int first_num, second_num;
	
	printf("Enter the first number:");
	scanf("%d", &first_num);
	
	printf("Enter the second number:");
	scanf("%d", &second_num);
	
	printf("%d+%d=%d", first_num, second_num, first_num + second_num);
	printf("%d-%d=%d", first_num, second_num, first_num - second_num);
	printf("%d*%d=%d", first_num, second_num, first_num * second_num);
}*/

//Exercise 7
/*int main() 
{
	int user_input;
	
	printf("Enter an integer: ");
	scanf("%d", &user_input);
	
	if (user_input % 2 == 0)
	{
		printf("The number is 0");	
	}
	else 
	{
		printf("The number is 1");	
	}
}*/

//Exercise 8
/*int main()
{
	int user_input;
	
	printf("Enter an integer: ");
	scanf("%d", &user_input);
	
	if (user_input % 2 == 0)
	{
		printf("Number %d is even.", user_input);	
	}
	else 
	{
		printf("Number %d is odd.", user_input);	
	}
}*/

//Exercise 9
/*int main()
{
	char drink;
	int amount;
	
	printf("Do you drink coffee or tea (c/t)?");
	scanf("%c", &drink);
	
	printf("How many cups do you drink daily:");
	scanf("%d", &amount);
	
	if (drink == 'c')
	{
		if (amount >= 0 && amount <= 2)
		{
			printf("You don't drink a lot of coffee, do you?\n");	
		}
		else if (amount > 2 && amount <= 20)
		{
			printf("You drink a lot of coffee!\n");	
		}
		else
		{
			printf("An error occurred in the program!\n");	
		}
	}
	else if (drink == 't')
	{
		if (amount >= 0 && amount <= 2)
		{
			printf("You do not drink a lot of tea.\n");	
		}
		else if (amount > 2 && amount <= 20)
		{
			printf("You drink a lot of tea!\n");	
		}
		else
		{
			printf("An error occurred in the program!\n");	
		}
	}
	else 
	{
		printf("An error occurred in the program!\n");	
	}
}*/

//Exercise 10
/*int main()
{
	int function_selection;
	int first_num, second_num;
	
	printf("1: subtraction\n2: addition\n3: multiplication\nSelect function:");	
	scanf("%d", &function_selection);
	
	printf("Enter the first number:");
	scanf("%d", &first_num);
	
	printf("Enter the second number:");
	scanf("%d", &second_num);
	
	switch(function_selection) 
	{
		case 1:
		{
			printf("%d-%d=%d", first_num, second_num, first_num - second_num);
			break;
		}
		case 2:
		{
			printf("%d+%d=%d", first_num, second_num, first_num + second_num);
			break;
		}
		case 3:
		{
			printf("%d*%d=%d", first_num, second_num, first_num * second_num);
			break;
		}
	}
}*/

//Exercise 11
/*int main()
{
	int user_number;
	
	printf("Enter an integer: ");
	scanf("%d", &user_number);
	
	for (int i = 1; i <= user_number; i++)
	{
		printf("%d\n", i);	
	}
}*/

//Exercise 12
/*int main()
{
	int user_input;
	int factorial = 1;
	
	printf("Enter an integer: ");
	scanf("%d", &user_input);
	
	for (int i = 1; i < user_input; i++)
	{
		factorial += factorial * i;
	}
	
	printf("The factorial of %d is %d", user_input, factorial);
}*/

//Exercise 13
/*int main() 
{
	int total_score = 0, added_score = 0, amount_scores = 0;
	float average_score = 0;
	
	printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
	
	while (added_score >= 0)
	{
		printf("Enter score (4-10):");
		scanf("%d", &added_score);
		if (added_score > 3 && added_score < 11)
		{
			amount_scores++;
			total_score += added_score;
		}
	}
	printf("You entered %d scores.\n", amount_scores);
	printf("Average score: %.2f\n", (float)total_score / (float)amount_scores);
}*/

//Exercise 14
/*void cat(void);
void dog(void);
void cow(void);

void main()
{
  int choice;
  do{

    printf("1:cat\n2:dog\n3:cow\n");
    printf("End with a negative number.\n");
    printf("Select animal:");
    scanf("%d", &choice);
    if(choice < 0) {
      printf("Terminating the program...");
    }
    else if(choice == 1) {
      cat();
    }
    else if(choice == 2) {
      dog();
    }
    else if(choice == 3) {
      cow();
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
  }while(choice>0);
}

void cat() 
{
	printf("The cat says meow!\n");	
}

void dog()
{
	printf("The dog says wuff-wuff!\n");	
}

void cow()
{
	printf("The cow says moo!\n");	
} */

//Exercise 15
/*void sum(int firstNum, int secondNum);
void difference(int firstNum, int secondNum);
void product(int firstNum, int secondNum);

int main()
{
	int user_option;
	while (user_option > 0) 
	{
		printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\nSelect calculation:");
		scanf("%d", &user_option);
	
		if (user_option < 0)
		{
			printf("Terminating the program...\n");
			break;
		}

		int firstNum, secondNum;
		printf("Enter the first number:");
		scanf("%d", &firstNum);
		printf("Enter the second number:");
		scanf("%d", &secondNum);

		if (user_option == 1)
		{
			sum(firstNum, secondNum);
		}
		else if (user_option == 2)
		{
			difference(firstNum, secondNum);
		}
		else if (user_option == 3)
		{
			product(firstNum, secondNum);
		}
		else
		{
			printf("Invalid option.");	
		}	
	}

}

void sum(firstNum, secondNum)
{
	int sum = firstNum + secondNum;
	printf("%d + %d = %d\n", firstNum, secondNum, sum);
}

void difference(firstNum, secondNum)
{
	int diff = firstNum - secondNum;
	printf("%d - %d = %d\n", firstNum, secondNum, diff);
}

void product(firstNum, secondNum)
{
	int product = firstNum * secondNum;
	printf("%d * %d = %d\n", firstNum, secondNum, product);
}*/

//Exercise 16
/*int largest(int num1, int num2, int num3);
int smallest(int num1, int num2, int num3);

int main()
{
	int num1, num2, num3;
	
	printf("Enter the 1. number:");
	scanf("%d", &num1);
	
	printf("Enter the 2. number:");
	scanf("%d", &num2);
	
	printf("Enter the 3. number:");
	scanf("%d", &num3);
	
	printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.\n", largest(num1, num2, num3), smallest(num1, num2, num3));
}
		   
int largest(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;	
	}
	else if (num2 > num1 && num2 > num3)
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
	if (num1 < num2 && num1 < num3)
	{
		return num1;	
	}
	else if (num2 < num1 && num2 < num3)
	{
		return num2;	
	}
	else 
	{
		return num3;	
	}
}
*/

//Exercise 17
/*int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};

int main()
{
	int sum = 0;
	int y = 0;
	
	printf("In the array:\n");
	
	while (y < 5)
	{
		for (int i = 0; i < 5; i++)
		{
			sum += matrix[y][i];
			printf("%d ", matrix[y][i]);
		}
		printf("\n");
		y++;
	}
	
	printf("\n\nthe sum of the elements is %d", sum);
}*/