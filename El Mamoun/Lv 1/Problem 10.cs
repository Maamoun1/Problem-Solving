using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Write a program to ask the user to enter:• Mark1, Mark2, Mark3 Then Print the Average of entered Marks
*/

namespace Problem_10
{
    internal class Program
    {
        struct stNumbers
        {
            public int Number1;
            public int Number2;
            public int Number3;
        }
        static stNumbers ReadNumbers()
        {
            stNumbers Numbers;

            Console.Write("Please Enter Number1?: ");
            Numbers.Number1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Please Enter Number2?: ");
            Numbers.Number2 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Please Enter Number3?: ");
            Numbers.Number3 = Convert.ToInt32(Console.ReadLine());

            return Numbers;
        }
        static int SumOf3Numbers(stNumbers Numbers)
        {
            return Numbers.Number1 + Numbers.Number2 + Numbers.Number3;
        }
        static float Average3Numbers(stNumbers Numbers)
        {
            return (float)(SumOf3Numbers(Numbers) / 3);
        }
        static void PrintResult(stNumbers Numbers)
        {
            Console.WriteLine("Average of 3 Numbers is: " + Average3Numbers(Numbers));
        }

        static void Main(string[] args)
        {

            PrintResult(ReadNumbers());
            Console.ReadKey();
        }
    }
}
