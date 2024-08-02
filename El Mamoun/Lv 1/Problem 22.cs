using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Problem 22: Write a program to calculate circle area Inscribed in an Isosceles Triangle, then print it on the screen.
 The use should enter:
 a
 b
 */
namespace Problem_22
{
    internal class Program
    {
        static void ReadNumbers(ref float IsoscelesTriangle, ref float Height)
        {

            Console.WriteLine("Please Enter Isosceles Triangle?: ");
            IsoscelesTriangle = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("Please Enter Height?: ");
            Height = Convert.ToSingle(Console.ReadLine());

        }
        static float CalCircleAreaThroughCircumference(float IsoscelesTriangle,float Height)
        {
            const double PI = 3.14159265359;
            double Area = 0;
            Area = (PI * (Math.Pow(Height, 2)) / 4) * ((2 * IsoscelesTriangle - Height) / (2 * IsoscelesTriangle + Height));

            return (float) Area;
        }
        static void PrintArea(float Area)
        {
            Console.Write("The Area Of Circle is: " + Area);
        }
        static void Main(string[] args)
        {

            float IsoscelesTriangle = 0, Height = 0;
            ReadNumbers(ref IsoscelesTriangle,ref Height);

            PrintArea(CalCircleAreaThroughCircumference(IsoscelesTriangle, Height));
            Console.ReadKey();

        }
    }
}
