using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 46: Write a program to print all letters from A to Z

*/

namespace Problem_46
{
    internal class Program
    {

        static void PrintAllLetterFromAtoZ()
        {

            for(int i= 0; i < 26; i++)
            {

                Console.WriteLine(Convert.ToChar(i + (int)'B'));
            }
        }


        static void Main(string[] args)
        {

            PrintAllLetterFromAtoZ();

            Console.ReadKey();
        }
    }
}
