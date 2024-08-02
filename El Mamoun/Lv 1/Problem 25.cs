using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Write a program to ask the user to enter :• Age If age is between 18 and 45 print “Valid Age” otherwise print 
“Invalid Age” and re-ask user to enter a valid age
 */
namespace ConsoleApp1
{
    internal class Program
    {
        static short ReadAge()
        {
            Console.WriteLine("Please Enter Your Age?: ");
            short Age = Convert.ToInt16(Console.ReadLine());

            return Age;
        }
        static bool ValidNumberInRange(short Number,int From , int To)
        {
            return (Number > From && Number < To);
        }

        static short ReadUntilAgeBetween(int From, int To)
        {
            short Age;

            do
            {
                Age = ReadAge();


            } while (!ValidateNumberInRange(Age, 18, 45));

            return Age;
        }

        static void PrintResults(short Age)
        {

            if (ValidNumberInRange(Age, 18, 40))
                Console.WriteLine("Valid");
            else
                Console.Write("Not Valid");

        }

        static void Main(string[] args)
        {

            PrintResults(ReadAge());
            Console.ReadKey();  
        }

    }
}
