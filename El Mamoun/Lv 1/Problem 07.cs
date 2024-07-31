using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 7: Write a program to ask the user to enter: • Number Then Print the “Half of the <Number> is <???>”
*/

namespace Problem_7
{
    internal class Program
    {

        static int ReadNumber()
        {
            int Number = 0;
            Console.Write("Please Enter a Number?: ");
            Number = Convert.ToInt32(Console.ReadLine());

            return Number;
        }

        static float HalfOfNumber(float Number)
        {

            return (float) (Number / 2);
        }

        static void PrintResult(int Number)
        {
            Console.WriteLine("Half of Number " + Number + " is " + HalfOfNumber(Number));
        }

        static void Main(string[] args)
        {
            PrintResult(ReadNumber());

            Console.ReadKey();
        }
    }
}
