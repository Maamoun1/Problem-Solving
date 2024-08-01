using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 1: Write a program to print your name on screen.

*/
namespace Problem_1
{

    internal class Program
    {
     static  void PrintName(string Name)
     {
           Console.WriteLine("You are Name is " + Name);
     }
   
        static void Main(string[] args)
        {
           
            PrintName("Mamoun");
            
            Console.ReadKey();
        }
    }
}
