using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 40: A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the 
screen.

*/

namespace Probem_40
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

       static double TotalBillAfterServicesaAndFee(double TotalBill)
        {

            TotalBill = TotalBill * 1.1;
            TotalBill = TotalBill * 1.16;
           
            return TotalBill;
        }


        static void Main(string[] args)
        {

            Console.WriteLine(TotalBillAfterServicesaAndFee(ReadNumber("Please Enter a TotalBill?: ")));
            Console.ReadKey();
        }



    }
}
