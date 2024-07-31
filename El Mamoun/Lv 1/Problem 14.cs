using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 14: Write a program to ask the user to enter:
 • Number1
 • Number2
 Then print the two numbers , then Swap the two numbers and print them
*/

namespace Problem_15
{
    internal class Program
    {
        static int ReadNumbr()
        {
            int numbr = 0;
            Console.Write("Please Enter a Number? ");
            numbr=Convert.ToInt32(Console.ReadLine());

            return numbr;
        }
        static void SwapNumber(ref int Num1 ,ref int Num2)
        {
            int Swap;

            Swap = Num1;
            Num1 = Num2;
            Num2 = Swap;

        }
        static void PrintSwapNumber(int Num1,int Num2)
        {
            Console.WriteLine("Number Before Swap " + Num1 + " " + Num2);

            SwapNumber(ref Num1, ref Num2);
            Console.Write("Number After   Swap " + Num1 + " " + Num2);

        }
        static void Main(string[] args)
        {

            int Num1, Num2;

            Num1 = ReadNumbr();
            Num2 = ReadNumbr();

           PrintSwapNumber(Num1,Num2);
            Console.ReadKey();

        }

    }
}
