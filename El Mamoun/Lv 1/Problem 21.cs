using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 21: Write a program to calculate circle area along the circumference, then print it on the screen.
 The use should enter:
 L
 */
namespace Problem_21
{
    internal class Program
    {
        static float ReadCircumference()
        {

            Console.WriteLine("Please Enter circumference?: ");
            float circumference = Convert.ToSingle(Console.ReadLine());

            return circumference;
        }
        static float CalCircleAreaThroughCircumference(float Circumference)
        {
            const double PI = 3.14159265359;
            double Area = 0;
            Area = ((Circumference * Circumference) / (4 * PI));

            return (float)Area;
        }
        static void PrintArea(float Area)
        {
            Console.Write("The Area Of Circle is: " + Area);
        }


        static void Main(string[] args)
        {


            PrintArea(CalCircleAreaThroughCircumference(ReadCircumference()));
            Console.ReadKey();
        }
    }
}
