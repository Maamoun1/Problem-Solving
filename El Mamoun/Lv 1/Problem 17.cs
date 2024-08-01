using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
 Problem 17: Write a program to calculate triangle area then print it on the screen.
 The use should enter:
 a
 h
 */

namespace Problem_17
{
    internal class Program
    {

        static void ReadNumbers(ref double Length,ref double Height)
        {
            Console.Write("Please Enter a Length?: ");
            Length = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please Enter a Height?: ");
            Height = Convert.ToDouble(Console.ReadLine());
        }
        static double CalculateTriangleArea(double Length,double Height)
        {
            return ((Length * Height) / 2);
        }

        static void PrintResults(double Area)
        {
            Console.Write("The Area of Triangle is: " + Area);
        }


        static void Main(string[] args)
        {

            double Length = 0, Height = 0;
            ReadNumbers(ref Length, ref Height);

            PrintResults(CalculateTriangleArea(Length, Height));
            Console.ReadKey();

        }
    }
}
