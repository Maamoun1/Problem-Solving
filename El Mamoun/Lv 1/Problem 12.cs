using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 12: Write a program to ask the user to enter:• Number1 , Number2 Then Print the Max Number
*/
namespace Problem_12
{
    internal class Program
    {
        static int ReadNumber()
        {
            int Num;
            Console.Write("Please Enter a Number? ");
            Num = Convert.ToInt32(Console.ReadLine());

            return Num;
        }
        static int Max2Num(int Num1,int Num2)
        {
            return (Num1 > Num2) ? Num1 : Num2;
        }
        static void PrintResult(int Max)
        {
            Console.Write(Max);  
        }
        static void Main(string[] args)
        {
            PrintResult(Max2Num(ReadNumber(), ReadNumber()));

            Console.ReadKey();
        }
    }
}
