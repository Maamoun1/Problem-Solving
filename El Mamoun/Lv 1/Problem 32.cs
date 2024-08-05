using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Problem 32: Write a program to ask the user to enter:• Number • M
 Then Print the Number^M
 */


namespace Problem_32
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
        static int Power_OfM(int Number, int Base)
        {
            int P = 1;


            if (Base == 0)
                return 1;

            for (int Counter = 1; Counter <= Base; Counter++)
            {
                P = Number * P;
            }
            return P;

        }


        static void Main(string[] args)
        {


            Console.WriteLine(Power_OfM(
            ReadPostiveNumber("Please Enter a Number?: "), ReadPostiveNumber("Please Enter a Base?: ")));
            Console.ReadKey();


        }
    }
}
