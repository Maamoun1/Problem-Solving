using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 27: Write a program to print numbers from N to 1.
 */

namespace Problem_27
{
    internal class Program
    {
        static int ReadNumber()
        {
            Console.WriteLine("Please Enter a Number?: ");
            int Number = Convert.ToInt32(Console.ReadLine());

            return Number;
        }

        static void PrintNumberFrom1ToN(int Number)
        {
            for (int Counter = Number; Counter >= 1; Counter--)
            {
                Console.WriteLine(Counter);
            }
        }

        static void Main(string[] args)
        {

            PrintNumberFrom1ToN(ReadNumber());

            Console.ReadKey();  

        }
    }
}
