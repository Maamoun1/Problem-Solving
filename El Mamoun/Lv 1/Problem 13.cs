using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Problem 13:Write a program to ask the user to enter 3 numbers:
 • A
 • B
 • C
 Then Print Max number
*/

namespace Problem_13
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
        static int Max3Num(int Num1, int Num2,int Num3)
        {
            return (Num1 > Num2) ? (Num1 > Num3) ? Num1 : (Num2 > Num3) ? Num2 : Num3 : (Num3 > Num2) ? Num3 : Num2;
        }
        static void PrintResult(int Max)
        {
            Console.Write(Max);
        }


        static void Main(string[] args)
        {
            PrintResult(Max3Num(ReadNumber(), ReadNumber(), ReadNumber()));

            Console.ReadKey();
        }
    }
}
