using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 30: Write a program to calculate factorial of N!
 */
namespace Problem_30
{
    internal class Program
    {

      static int ReadPostiveNumber(string Message)
        {
           
            int Number = 0;
            do
            {
                Console.WriteLine(Message);
                Number = Convert.ToInt32(Console.ReadLine());

            } while (Number < 0);

            return Number;
        }   

      static int Factorial(int Number)
        {
            int Fact = 1;

            for(int Counter =Number; Counter >= 1; Counter--)
            {
                Fact *= Counter;
            }

            return Fact;
        }

      
        static void Main(string[] args)
        {

            Console.WriteLine("Facorial Number is: "+Factorial(ReadPostiveNumber("Please Enter a Number?: ")));


            Console.ReadKey();
        }
    }
}
