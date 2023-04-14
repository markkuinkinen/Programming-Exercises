using System;

//Exericse 1

/*class HelloWorld
{
	static void Main()
	{
		Console.WriteLine("Hello, World!");	
	}
}*/


//Exercise 2

/*class Fruit
{
	static void Main()
	{
		string favourite_fruit;
		
		Console.Write("What is your favourite fruit? ");
		favourite_fruit = Console.ReadLine();
		Console.WriteLine("Your favourite fruit is " + favourite_fruit);
	}
}*/


//Exercise 3

/*class cmdArgument
{
	static void Main(String[] args)
	{
		Console.WriteLine("The command line argument was: " + args[0]);
	}
}*/


//Exercise 4 - Data types

/*		short var1 = 16000;
		byte var2 = 160;
		float var3 = 40659.4324f;
		char var4 = 'a';
		bool var5 = true;
		ulong var6 = 123456789101112;
		decimal var7 = 212.1m; 

        sbyte var1 = 127;
		long var2 = 9223372036854775807;
		ushort var3 = 65535;
		double var4 = 1.79769313486232e305; */


//Exercise 5

/*class Program
{
	static void Main() 
	{
		int age;
		
		Console.WriteLine("Please input your age: ");
		age = Convert.ToInt32(Console.ReadLine());
		
		if (age >= 18)
		{
			Console.WriteLine("You can cast your vote!");	
		}
	}
}*/


//Exercise 6

/*class Equal
{
	static void Main()
	{
		int first_num, second_num;
		
		Console.WriteLine("Please input the first number: ");
		first_num = Convert.ToInt32(Console.ReadLine());
				
		Console.WriteLine("Please input the second number: ");
		second_num = Convert.ToInt32(Console.ReadLine());
		
		if (first_num > second_num)
		{
			Console.WriteLine("Number 1 is greater than number 2.");	
		}
		else if (first_num < second_num)
		{
			Console.WriteLine("Number 2 is greater than number 1.");	
		}
		else
		{
			Console.WriteLine("Numbers are equal.");	
		}
	}
}*/

//Exercise 7

/*
class Selection
{
	static void Main()
	{
		int choice;
		
		Console.WriteLine("Please select:\n1) Water\n2) Juice\n3) Lemonade\n4) Quit");
		choice = Convert.ToInt32(Console.ReadLine());
		
		switch(choice)
		{
			case 1:
				Console.WriteLine("You selected Water.");
				break;
			case 2:
				Console.WriteLine("You selected Juice.");
				break;
			case 3:
				Console.WriteLine("You selected Lemonade.");
				break;
			case 4:
				Console.WriteLine("Quit!");
				break;
		}
	}
}*/


//Exercise 8

/*class coordinates
{
	static void Main()
	{
		int x, y;
		
		Console.Write("Find the quadrant for a point in the x-y axis:\nX coordinate: ");
		x = Convert.ToInt32(Console.ReadLine());
		Console.Write("Y coordinate: ");
		y = Convert.ToInt32(Console.ReadLine());
		
		if (x > 0)
		{
			if (y > 0)
			{
				Console.WriteLine("The coordinate point (" + x + "," + y + ") is at quadrant 1.");
			}
			else 
			{
				Console.WriteLine("The coordinate point (" + x + "," + y + ") is at quadrant 4.");
			}
		}
        else if (x < 0)
        {
            if (y > 0)
            {
                Console.WriteLine("The coordinate point (" + x + "," + y + ") is at quadrant 2.");
            }
            else 
            {
                Console.WriteLine("The coordinate point (" + x + "," + y + ") is at quadrant 3.");
            }
        }
        else
        {
            Console.WriteLine("The coordinate point (" + x + "," + y + ") is at the origin.");
        }
		
	}
}*/


//Exercise 8
// class Repeating
// {
// 	static void Main()
// 	{
//         string output = "";
// 		int input = Convert.ToInt32(Console.ReadLine());
// 		for (int i = 1; i <= input; i++)
// 		{
//             output += i.ToString();
// 			Console.WriteLine(output);
// 		}
// 	}
// }

// Version 2 WITH ARGS
// class Repeating
// {
// 	static void Main(string[] args)		//string input = 5 --> args[0] == 5 --> Convert.ToInt32(args[0])
// 	{
//         string output = "";
// 		for (int i = 1; i <= Convert.ToInt32(args[0]); i++)
// 		{
//             output += i.ToString();
// 			Console.Write(output + "\n\r");
// 		}
// 	}
// }


//Exercise 9

// class sum
// {
// 	static void Main()
// 	{
// 		int total = 0;
// 		int user_input;

// 		while (total < 200) 
// 		{
// 		Console.Write("Sum is now " + total + ". Input: ");
// 		user_input = Convert.ToInt16(Console.ReadLine());
// 		total += user_input;
// 		}
// 		Console.WriteLine("Reached 200. The total was " + total.ToString() + ".");
// 	}
// }

//Exercise 10

// class Program
// {
//     static void Main()
//     {
//         char[] characters = { 'L', 'e', 'a', 'r', 'n', ' ', 'C','#'};

// 		foreach(char character in characters)
// 		{
// 			Console.Write(character);
// 		}
// 	}
// }


//Exercise 11

// class Program
// {
//     static void Main()
//     {
//         List<int> numbers = new List<int>(); // change array to list

//         int input;
//         do 
//         {
//             Console.Write("Input a number:");
//             input = Convert.ToInt32(Console.ReadLine()); // use ReadLine() instead of Read()
//             if (input > 0) // add a condition to avoid adding negative values
//             {
//                 numbers.Add(input); // use Add() method instead of Append()
//             }
//         } while (input > 0);

//         Console.Write("Your input: ");
//         foreach (int number in numbers) 
//         {
//             Console.Write(number + " ");
//         }
//     }
// }


//Exercise 12

/*class Game
{
    static void Main()
    {
        Random random = new Random();
        int user_input = 0, wins = 0, losses = 0, ties = 0;
        
        while (true)
        {
            Console.WriteLine("Cockroach-Foot-Nuke. Choose 1-4.\n1) Cockroach 2) Foot 3) Nuke 4) Exit");

            user_input = Convert.ToInt32(Console.ReadLine());   
			int computer_choice = random.Next(1, 4);        

            switch (user_input)
            {
                case 1:        
                    {
                        Console.Write("Cockroach!\n");
                        if (computer_choice == 1)    
                        {
                            Console.WriteLine("Computer had cockroach. A Tie\n");
                            ties++;
                        }
                        else if (computer_choice == 2)   
                        {
                            Console.WriteLine("Computer had foot. You lose!\n");
                            losses++;
                        }
                        else    
                        {
                            Console.WriteLine("Computer had nuke. You win!\n");
                            wins++;
                        }
                        break;
                    }
                case 2:        
                    {
                        Console.WriteLine("Foot!\n");
                        if (computer_choice == 1)
                        {
                            Console.WriteLine("Computer had cockroach. You win!\n");
                            wins++;
                        }
                        else if (computer_choice == 2) 
                        {
                            Console.WriteLine("Computer had foot. A tie!\n");
                            ties++;
                        }
                        else  
                        {
                            Console.WriteLine("Computer had nuke. You lose!\n");
                            losses++;
                        }
                        break;
                    }
                case 3: 
                    {
                        Console.WriteLine("Nuke!\n");
                        if (computer_choice == 1) 
                        {
                            Console.WriteLine("Computer had cockroach. You lose!\n");
                            losses++;
                        }
                        else if (computer_choice == 2) 
                        {
                            Console.WriteLine("Computer had foot. You win!\n");
                            wins++;
                        }
                        else 
                        {
                            Console.WriteLine("Computer had nuke. A tie!\n");
                            ties++;
                        }
                        break;
                    }
                case 4:
                    {
                        Console.WriteLine("Thank you for playing.\nYou won " + wins + " times, lost " + losses + " times, and tied " + ties + " times.");
                        return;
                    }
                default:
                    {
                        Console.WriteLine("Invalid input. Please choose 1-4.\n");
                        break;
                    }
            }
        }
    }
}*/

//Exercise 13
/*class printFileContents
{
	static void Main(string[] args)
    {
        if (args.Length == 0)
        {
            Console.WriteLine("No filename provided!");
            return;
        }

        string filename = args[0];

        if (!File.Exists(filename))
        {
            Console.WriteLine("File does not exist!");
            return;
        }

        string content = File.ReadAllText(filename);
        Console.WriteLine(content);
    }
}*/

//Exercise 14

/*class BubbleSort        // With normal array
{
	static void Main()
	{

		int[] numbers = {5, 4, 3, 2, 1};


        for(int i = 0; i < numbers.Length - 1; i++) 
        {
            for (int j = 0; j < numbers.Length - i - 1; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    int temp = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
        }

        foreach (int number in numbers)
        {
            Console.Write(number + " ");
        }
    } 
}*/

/*class bubbleSort        // Using args
{
	static void Main(string[] args)
	{
		int[] numbers = new int[args.Length];

		for (int i = 0; i < args.Length; i++)
		{
			numbers[i] = int.Parse(args[i]);
		}
		
		for (int i = 0; i < numbers.Length - 1; i++)
		{
			for (int j = 0; j < numbers.Length - i - 1; j++)
			{
				if (numbers[j] > numbers[j+1])
				{
					int temp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1] = temp;
				}
			}
		}
		
		foreach (int number in numbers)
		{
			Console.Write(number + " ");	
		}
		
	}
}*/
