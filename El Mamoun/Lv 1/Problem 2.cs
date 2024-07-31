using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 2: Write a program to ask the use to enter his/her name and  print it on screen. 
*/

namespace Problem_2
{
    internal class Program
    {
        static string ReadName()
        {

            Console.Write("Please Enter Your Name?: ");
            string Name = Console.ReadLine();

            return Name;

        }
        static void PrintName(string Name)
        {
            Console.Write("You are Name is " + Name);
        }

        static void Main(string[] args)
        {
            PrintName(ReadName());

            Console.ReadKey();
        }
    }
}
