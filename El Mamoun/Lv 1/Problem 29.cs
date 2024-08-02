using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 29: Write a program to Sum even numbers from 1 to N.
 */

namespace Problem_29
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
        static int SumEvenNumber(int Number)
        {
            int SumEvenNumber = 0;

            for (int Counter = 1; Counter <= Number; Counter++)
            {
                if (CheckEvenOrOdd(Counter) == enEvenOrOdd.Even)
                    SumEvenNumber += Counter;
            }
            return SumEvenNumber;
        }
        static void PrintEvenNumberFrom1ToN(int SumEvenNumber)
        {
            Console.WriteLine("Sum Even Number is: " + SumEvenNumber);
        }

        static void Main(string[] args)
        {

            PrintEvenNumberFrom1ToN(SumEvenNumber(ReadNumber()));

            Console.ReadKey();
        }
    }
}
