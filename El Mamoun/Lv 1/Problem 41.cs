using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 41: Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that 
number
*/

namespace Problem_41
{
    internal class Program
    {
        static int ReadNumber(string Message)
        {
            int Number = 0;
            Console.WriteLine(Message);
            Number = Convert.ToInt32(Console.ReadLine());

            return Number;
        }

        static double HoursToDays(int NumberOfHours)
        {
            return (double) (NumberOfHours /24);
        }

        static double HoursToWeeks(int NumberOfHours)
        {
            return (HoursToDays(NumberOfHours )/ 24);
        }

        static void Main(string[] args)
        {

            int NumberOfHours = ReadNumber("Please Enter Of Hours?: ");
            Console.WriteLine("Total Days is: " + HoursToDays(NumberOfHours));

            Console.ReadKey();
        }
    }
}
