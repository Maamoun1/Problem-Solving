﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 Write a program to ask the user to enter his/her: • Age • Driver license
 Then Print “Hired” if his\her age is grater than 21 and s/he has a driver license, otherwise Print “Rejected”
*/

namespace Problem_4
{
    internal class Program
    {
        struct stInfo
        {
            public short Age;
            public bool HasDriveLicence;
        }
        static stInfo ReadPersonInfo()
        {
            stInfo Info;
            Console.Write("Please Enter Your Age?: ");
            Info.Age = Convert.ToInt16(Console.ReadLine());

            Console.Write("Do you have DriveLicence?: ");
            Info.HasDriveLicence = Convert.ToBoolean(Console.ReadLine());

            return Info;
        }
        static bool IsAccepted(stInfo Info)
        {
            return (Info.Age > 21 && Info.HasDriveLicence);

        }
        static void PrintRestult(stInfo Info)
        {
            if (IsAccepted(Info))
                Console.WriteLine("Hired");
            else
                Console.WriteLine("Rejected");
        }


        static void Main(string[] args)
        {

            PrintRestult(ReadPersonInfo());

            Console.ReadKey();
        }
    }
}
