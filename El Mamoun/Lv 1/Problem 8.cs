using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 8: Write a program to ask the user to enter: • Mark Then Print the “PASS” if mark >=50, otherwise print “Fail”
*/

namespace Problem_8
{
    internal class Program
    {
        enum enPassOrFail { Pass=1,Fail=2};
        static short ReadMark()
        {
            short Mark;
            Console.WriteLine("Please Enter your Mark?: ");
            Mark = Convert.ToInt16(Console.ReadLine());

            return Mark;
        }
        static enPassOrFail CheckMark(short Mark)
        {

            if (Mark >= 50)
                return enPassOrFail.Pass;
            else
                return enPassOrFail.Fail;
        }
       static void PrintResult(short Mark)
        {
            if (CheckMark(Mark) == enPassOrFail.Pass)
                Console.WriteLine("You are Pass.");
            else
                Console.Write("You are Fail");

        }


        static void Main(string[] args)
        {

            PrintResult(ReadMark());

            Console.ReadKey();

        }
    }
}
