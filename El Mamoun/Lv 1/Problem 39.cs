using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 39: Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
*/


namespace Problem_39
{
    internal class Program
    {
        static float ReadNumber(string Message)
        {

            float Number = 0;
            Console.WriteLine(Message);
            Number = Convert.ToSingle(Console.ReadLine());

            return Number;
        }

        static float CalPayRemainder(float TotalBill,float CashPaid)
        {
            return (CashPaid - TotalBill);
        }

        static void Main(string[] args)
        {
            float TotalBill = ReadNumber("Please Enter a TotalBill");
            float CashPaid = ReadNumber("Please Enter a CashPaid");

            Console.WriteLine(CalPayRemainder(ReadNumber("Please Enter a TotalBill"), ReadNumber("Please Enter a CashPaid")));
            Console.WriteLine(CalPayRemainder(TotalBill, CashPaid));

            Console.ReadKey();
        }
    }
}
