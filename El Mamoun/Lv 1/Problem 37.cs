using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Problem 37: Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print 
the Sum on screen.
*/
namespace Problem_37
{
    internal class Program
    {
        static float ReadNumber()
        {
            float Number = 0;
            Console.WriteLine("Please Enter a Number?: ");
            Number = Convert.ToSingle(Console.ReadLine());

            return Number;
        }
        static float SumNumUntil_99()
        {
            float Number = 0;
            float Sum = 0;
            int Counter = 1;
            do
            {
                Console.WriteLine("Please Enter Number" + Counter);
                Number = Convert.ToInt32(Console.ReadLine());
                if(Number==-99)
                {
                    break;
                }

                Counter++;
                Sum += Number;
                
            } while (Number != -99);

            return Sum;
        }


        static void Main(string[] args)
        {

            Console.WriteLine(SumNumUntil_99());


            Console.ReadKey();
        }
    }
}
