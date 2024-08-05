using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 34: Write a program to ask the user to enter:
 • TotalSales
 The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage 
to use of the following:
 • > 1000,000    Percentage is 1%
 • > 500K to 1M  Percentage is 2%
 • > 100K  – 500K Percentage is 3%
 • > 50K to 100K  Percentage is 5%
 • Otherwise  Percentage is 0%
*/

namespace Problem_34
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

        static double GetCommessionPercentage(int TotalSales)
        {
            if (TotalSales > 1000000)
                return 0.01;

            else if (TotalSales >= 500000)
                return 0.02;

            else if (TotalSales >= 100000)
                return 0.03;

            else if (TotalSales >= 50000)
                return 0.05;

            else
                return 0.00;

        }

        static double TotalCommession(int TotalSales)
        {
            return GetCommessionPercentage(TotalSales) * TotalSales;
        }
    
        static void Main(string[] args)
        {

            int TotalSales = ReadPostiveNumber("Please Enter a TotalSales?: ");
            Console.WriteLine("Commession Percentage is: " + GetCommessionPercentage(TotalSales));
            Console.WriteLine("Total Commession Percentage is: " + TotalCommession(TotalSales));


            Console.ReadKey();
        }

    }

}
