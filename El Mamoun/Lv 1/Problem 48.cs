using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 48: Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then 
calculate the monthly installment amount
*/

namespace Problem_48
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

        static float CalculateMonthlyInstallmentAmount(int LoanAmount,int HowManyMonth)
        {
            return (float)LoanAmount /(float) HowManyMonth;
        }

        static void Main(string[] args)
        {

            int LoanAmount = ReadPostiveNumber("Please Enter a Loan Amount?: ");
            int  HowManyMonth = ReadPostiveNumber("Please Enter a How many Months?: ");

            Console.WriteLine(CalculateMonthlyInstallmentAmount(LoanAmount, HowManyMonth));
            Console.ReadKey();

        }
    }
}
