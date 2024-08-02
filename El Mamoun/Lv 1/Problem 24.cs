using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
  Problem 24:Write a program to ask the user to enter :• Age If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age”
 */


namespace Problem_24
{
    internal class Program
    {
        static short ReadAge()
        {

            Console.WriteLine("Please Enter Your Age?: ");
            short Age = Convert.ToInt16(Console.ReadLine());

            while (!ValidNumberInRange(Age,18,45))
            {
                Console.WriteLine("Please Enter Your Age?: ");
                Age = Convert.ToInt16(Console.ReadLine());
            }
        
            return Age;
        }

        static bool ValidNumberInRange(short Number, int From, int To)
        {
            return (Number > From && Number < To);
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
