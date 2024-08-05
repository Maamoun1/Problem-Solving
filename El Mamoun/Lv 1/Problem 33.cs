using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 33: Write a program to ask the user to enter:
 • Grade
 Then print the grade as follows:
 • 90 –100 Print A
 • 80 –89   Print B
 • 70 –79   Print C
 • 60 –69   Print D
 • 50 –59   Print E
 • Otherwise Print F
*/

namespace Problem_33
{
    internal class Program
    {

        static int ReadNumberInRange(int From, int To)
        {
            int Number = 0;

            do
            {
                Console.Write("Please Enter Number Between " + From + " and " + To);
                Number=Convert.ToInt32(Console.ReadLine());

            } while (Number < From || Number > To);

            return Number;
        }
        static char GetGradeLetter(int Grade)
        {

            if (Grade >= 90)
                return 'A';

            else if (Grade >= 80)
                return 'B';

            else if (Grade >= 70)
                return 'C';

            else if (Grade >= 60)
                return 'D';

            else if (Grade >= 50)
                return 'E';

            else
                return 'F';

        }


        static void Main(string[] args)
        {

            Console.Write(GetGradeLetter(ReadNumberInRange(0, 100)));
            Console.ReadKey();
        }
    }
}
