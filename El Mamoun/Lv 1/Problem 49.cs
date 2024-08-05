using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 49: Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the 
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
 Assume User Balance is 7500.
 */
namespace Problem_49
{
    internal class Program
    {

        static string ReadPinCode()
        {

            Console.WriteLine("Please Enter a PIN Code?: ");
            string pinCode = Console.ReadLine();

            return pinCode;
        }

       static bool Login()
        {
            string PinCode = "";
          

            do
            {
               
                PinCode = ReadPinCode();

                if (PinCode == "1234")
                    return true;
                else
                {
                    Console.WriteLine("Wrong Pincode.");
                }

            } while (PinCode !="!234");

            return false;
        }


        static void Main(string[] args)
        {

            if(Login())
            {
                Console.WriteLine("\nYour balance is: 7500");
            }



            Console.ReadKey();
        }
    }
}
