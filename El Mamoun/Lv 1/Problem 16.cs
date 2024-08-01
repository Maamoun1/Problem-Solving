using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Problem 16: Write a program to calculate rectangle area through diagonal and side area of rectangle and print it on the screen.
 The use should enter:
 a
 d
 */

namespace Problem_16
{
    internal class Program
    {
        static void ReadNumbers(ref double Diagonal, ref double Width)
        {
           
            Console.WriteLine("Pleae Enter a Width?: ");
            Width = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("Pleae Enter a Digonal?: ");
            Diagonal = Convert.ToSingle(Console.ReadLine());
        }
        static double CalRectangeAreaThroughDigonal(double Digonal, double Width )
        {
            double Area = (Width * (Math.Sqrt(Math.Pow(Digonal, 2)- Math.Pow(Width, 2) )));
            
            return Area;
        }
        static void PrintArea(double Area)
        {
            Console.WriteLine("The Area of Rectange is: " + Area);
        }


        static void Main(string[] args)
        {

            double Width = 0, Digonal = 0;
            ReadNumbers(ref Digonal, ref Width);

            PrintArea(CalRectangeAreaThroughDigonal(Digonal, Width));

            Console.ReadKey();
        }
    }
}
