using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 35: Write a program to ask the user to enter:
 • Pennies, Nickels, Dimes, Quarters, Dollars
 Then calculate the total pennies , total dollars and print them on screen
 giving that:
 • Penny = 1
 • Nickel = 5
 • Dime = 10
 • Quarter = 25
 • Dollar = 100
*/

namespace Problem_35
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
        static double GetTotalPennies(int Penny,int Nickle,int Dime,int Quarter,int Dollar)
        {
            double Total = 0;
            Total = Penny * 1 + Nickle * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;

            return Total;
        }
        static double GetTotalDollars(int Penny, int Nickle, int Dime, int Quarter, int Dollar)
        {
            return GetTotalPennies(Penny, Nickle, Dime, Quarter, Dollar) * 100;
        }

        static void Main(string[] args)
        {
        }
    }
}
