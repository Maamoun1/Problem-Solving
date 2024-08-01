using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Proble 15: Write a program to calculate rectangle area and print it on the screen.
*/

namespace Problem_15
{
    internal class Program
    {
        static void ReadNumbers(ref float Length,ref float Width)
        {
            
            Console.WriteLine("Pleae Enter a Length?: ");
            Length = Convert.ToSingle(Console.ReadLine());

            Console.WriteLine("Pleae Enter a Width?: ");
            Width = Convert.ToSingle(Console.ReadLine());

        }
        static float CalRectangeArea(float Length,float Width)
        {
            return (Length * Width);
        }
        static void PrintArea(float Area)
        {
            Console.WriteLine("The Area of Rectange is: " + Area);
        }


        static void Main(string[] args)
        {

            float Length = 0, Width = 0;
            ReadNumbers(ref Length,ref Width);

            PrintArea(CalRectangeArea(Length,Width));

            Console.ReadKey();
        }
    }
}
