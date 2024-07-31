using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 19: Write a program to calculate circle area through diameter, then print it on the screen.
 The use should enter:
 D
*/
namespace Problem_19
{
    internal class Program
    {
        static float ReadDiameter()
        {

            Console.WriteLine("Pleae Enter a Diameter?: ");
            float Diameter = Convert.ToSingle(Console.ReadLine());

            return Diameter;
        }
        static double CalRectangeAreaThroughDiameter(double Diameter)
        {

            const double PI = 3.14159265359;
            double Area = (PI / 4) * (Math.Pow(Diameter, 2));

            return Area;
        }
        static void PrintArea(double Area)
        {
            Console.WriteLine("The Area of Rectange is: " + Area);
        }

        static void Main(string[] args)
        {


            PrintArea(CalRectangeAreaThroughDiameter(ReadDiameter()));
            Console.ReadKey();
        }
    }
}
