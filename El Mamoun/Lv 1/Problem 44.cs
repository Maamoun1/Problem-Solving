using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
Problem 44: Write a program to ask the user to enter:
 • Day
 Then print the day as follows:
 • 1 Print Sunday
 • 2 Print Monday
 • 3 Print Tuesday
 • 4 Print Wednesday
 • 5 Print Thursday
 • 6 Print Friday
 • 7 Print Saturday
 • Otherwise print “Wrong Day” and ask the use to enter the day again.
*/
namespace Problem_44
{
    internal class Program
    {

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
        static string PrintDaysOfWeeks(int Number)
        {

            switch(Number)
            {
                case 1:
                    return "SunDay";
                case 2:
                    return "Monday";
                case 3:
                    return "Tuesday";
                
                case 4:
                    return "Wednesday";
                case 5:
                    return "Thursday";
                case 6:
                    return "Friday";
                case 7:
                    return "Saturday";

                default:
                    return "Wrong Day";

            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine(PrintDaysOfWeeks(ReadPostiveNumber("Please Enter a Day?: ")));

            Console.ReadKey();
        }
    }
}
