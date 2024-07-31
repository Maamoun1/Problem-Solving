using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 6: Write a program to ask the user to enter: • First Name • Last Name Then Print Full Name on screen.
 */


namespace Problem_6
{
    internal class Program
    {
        struct stPeronsInfo
        {
            public string FirstName;
            public string LastName;
        }
        static stPeronsInfo ReadPeronsInfo()
        {
            stPeronsInfo PeronsInfo;

            Console.Write("Please Enter you FirstName?: ");
            PeronsInfo.FirstName = Console.ReadLine();

            Console.Write("Please Enter you LastName?: ");
            PeronsInfo.LastName = Console.ReadLine();

            return PeronsInfo;

        }
        static string GetFullName(stPeronsInfo peronsInfo)
        {
            return peronsInfo.FirstName + " " + peronsInfo.LastName;
        }
        static void PrintResult(stPeronsInfo peronsInfo)
        {
            Console.Write("\nYou are Full Name is: " + GetFullName(peronsInfo));
        }


        static void Main(string[] args)
        {

            PrintResult(ReadPeronsInfo());
            Console.ReadKey();
        }
    }
}
