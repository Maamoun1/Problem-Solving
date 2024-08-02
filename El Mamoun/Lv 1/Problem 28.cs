using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 28: Write a program to Sum odd numbers from 1 to N.

 */
namespace Problem_28
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
        static int SumOddNumber(int Number)
        {
            int SumOddNumber = 0;
            
            for (int Counter = 1; Counter < Number; Counter++)
            {
                if (CheckEvenOrOdd(Counter) == enEvenOrOdd.Odd)
                    SumOddNumber += Counter;
            }
            return SumOddNumber;
        }
        static void PrintOddNumberFrom1ToN(int SumOddNumbr)
        {
            Console.WriteLine("Sum Odd Number is: " + SumOddNumbr);
        }

        static void Main(string[] args)
        {

            PrintOddNumberFrom1ToN(SumOddNumber(ReadNumber()));

            Console.ReadKey();
        }
    }
}
