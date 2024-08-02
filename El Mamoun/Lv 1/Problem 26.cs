using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 26: Write a program to print numbers from 1 to N
 */
namespace Problem_26
{
    internal class Program
    {
        
        static int ReadNumber()
        {
            Console.WriteLine("Please Enter a Number?: ");
            int Number = Convert.ToInt32(Console.ReadLine());

            return Number;
        }
        static void PrintNumberFrom1ToN(int Number)
        {
            for(int Counter = 1; Counter <= Number; Counter++)
            {
                Console.WriteLine(Counter);
            }    
        }
        static void Main(string[] args)
        {
            PrintNumberFrom1ToN(ReadNumber());


            Console.ReadKey();
        }



    }
}
