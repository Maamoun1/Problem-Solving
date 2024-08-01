using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 20: Write a program to calculate Circle area inscribed in a square, then print it on the screen.
 The use should enter:
 A
*/
namespace Problem_20
{
    internal class Program
    {

        static float ReadAreaSquare()
        {

            Console.WriteLine("Pleae Enter a Area Square?: ");
            float AreaSquare = Convert.ToSingle(Console.ReadLine());

            return AreaSquare;
        }
        static double CalRectangeAreaInscribedSquare(double Square)
        {

            const double PI = 3.14159265359;
            double Area = (PI * (Math.Pow(Square, 2)) / 4);

            return Area;
        }
        static void PrintArea(double Area)
        {
            Console.WriteLine("The Area of Circle is: " + Area);
        }

        static void Main(string[] args)
        {

            PrintArea(CalRectangeAreaInscribedSquare(ReadAreaSquare()));
            Console.ReadKey();
        }



    }
}
