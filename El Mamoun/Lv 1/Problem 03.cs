using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 3 :Write a program to ask the user to enter a number, then Print “ODD” if its odd, Or “Even” if its even.
*/

namespace Problem__3
{
    internal class Program
    {
        enum enEvenOrOdd { Even = 1, Odd = 2 };
        static int ReadNumber()
        {
            Console.WriteLine("Please Enter a Number?:");
            int Number = Convert.ToInt32(Console.ReadLine());

            return Number;
        }
        static enEvenOrOdd CheckEvenOrOdd(int Number)
        {
            if (Number % 2 == 0)
                return enEvenOrOdd.Even;

            else
                return enEvenOrOdd.Odd;
        }
        static void PrintNumberType(enEvenOrOdd NumberType)
        {
            if (NumberType == enEvenOrOdd.Even)
                Console.WriteLine("Number is Even");
            else
                Console.WriteLine("Number is Odd");
        }

        static void Main(string[] args)
        {

            PrintNumberType(CheckEvenOrOdd(ReadNumber()));

            Console.ReadKey();
        }
    }
}
