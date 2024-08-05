using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 38: Write a program to read a number and check if it is a prime number or not.
 Note: Prime number can only divide on one and on itself.
*/

namespace Problem_38
{
    internal class Program
    {
        enum enPrimeOrNot { Prime=1,NotPrime=2};

        static int ReadPostiveNumber(string Message)
        {

            int Number = 0;
            do
            {
                Console.WriteLine(Message);
                Number = Convert.ToInt32(Console.ReadLine());

            } while (Number < 0);

            return Number;
        }

        static enPrimeOrNot CheckPrime(double Number)
        {
            double M = Math.Round(Number / 2);

            for (int Counter = 2; Counter < M; Counter++)
            {

                if (Number % Counter == 0)
                {
                    return enPrimeOrNot.NotPrime;
                }
            }

            return enPrimeOrNot.Prime;
        }

        static void PrintNumberType(int Number)
        {
            if (CheckPrime(Number)==enPrimeOrNot.Prime)
            {
                Console.WriteLine("Number is Prime");

            }
            else
                Console.WriteLine("Number is Not Prime");
        }


        static void Main(string[] args)
        {

            PrintNumberType(ReadPostiveNumber("Please Enter a Postive Number?"));
            Console.ReadKey();
        }


    }
}
