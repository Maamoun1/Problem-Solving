using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
 Problem 18: Write a program to calculate circle area then print it on the screen.
 The use should enter:
 r
*/
namespace Problem_18
{
    internal class Program
    {

        static float ReadRadius()
        {
            Console.WriteLine("Please Enter a Radius?: ");
            float radius =Convert.ToSingle(Console.ReadLine());

            return radius;
        }
        static float CalculateAreaCircle(float Radius)
        {
            const double PI = 3.1415929;

            float Area = (float)(PI * (Radius * Radius));

            return Area;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(CalculateAreaCircle(ReadRadius()));

            Console.ReadKey();
        }
    }
}
