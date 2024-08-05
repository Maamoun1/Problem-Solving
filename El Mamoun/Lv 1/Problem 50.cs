using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 50: to user, otherwise print “Wong PIN” and ask the user to enter the PIN again. 
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
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
            short Counter = 3;

            do
            {
                --Counter;
                PinCode = ReadPinCode();

                if (PinCode == "1234")
                    return true;
                else
                {
                    Console.WriteLine("Wrong PinCode,you have " + Counter + " Trie(s)");
                }

            } while (PinCode != "1234" && Counter >= 1);

            return false;
        }


        static void Main(string[] args)
        {

            if (Login())
            {
                Console.WriteLine("\nYour balance is: 7500");
            }
            Console.ReadKey();
        }


    }
}
