using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/* 
 Problem 23:Write a program to calculate  circle area circle described around an arbitrary triangle, then print it on the screen.
 The use should enter:
 a
 b
 C
 */

namespace Problem_23
{
    internal class Program
    {
        static void ReadNumbers(ref float A, ref float B,ref float C)
        {

            Console.WriteLine("Enter A: ");
            A = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("Enter B: ");
            B = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("Enter C: ");
            C = Convert.ToSingle(Console.ReadLine());

        }

        static double CalCircleAreaThroughDescribedArbitraryTriangle(double A, double B, double C)
        {
            double P = (A + B + C) / 2;
            const double PI = 3.14159265359;
            
            double T = ((A * B * C) / (4 * Math.Sqrt(P * (P - A) * (P - B) * (P - C))) );
            double Area = PI * Math.Pow(T, 2);

            return Area;        
        }

        static void PrintArea(double Area)
        {
            Console.Write("The Area Of Circle is: " + Area);
        }


        static void Main(string[] args)
        {

            float A=0, B=0, C=0;
            ReadNumbers(ref A, ref B, ref C);

            PrintArea(CalCircleAreaThroughDescribedArbitraryTriangle(A, B, C));

            Console.ReadKey();
        }
    }
}
