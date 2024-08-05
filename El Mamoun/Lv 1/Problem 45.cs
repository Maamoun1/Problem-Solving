using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
Write a program to ask the user to enter:
 • Month
 Then print the day as follows:
 • 1 Print January
 • 2 Print February
 • 3 Print March
 • 4 Print April
 • 5 Print May
 • 6 Print June
 • 7 Print July
 • 8 Print August
 • 9 Print September
 • 10 Print October
 • 11 Print November
 • 12 December
 • Otherwise print “Wrong Month” and ask the use to enter the Month again

*/
namespace Prblem_45
{
    internal class Program
    {

        static int ReadNumberInRange(int From, int To)
        {
            int Number = 0;

            do
            {
                Console.Write("Please Enter Number Between " + From + " and " + To);
                Number = Convert.ToInt32(Console.ReadLine());

            } while (Number < From || Number > To);

            return Number;
        }

        enum enDayOfMonths
        {
            Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, June = 6,
            July = 7, Agues = 8, Sept = 9, Oct = 10, Nov = 11, Dec = 12

        };

        static enDayOfMonths ReadDaysOfMonths()
        {
            return (enDayOfMonths) ReadNumberInRange(1, 7);
        }

		static string GetDaysOfMonths(enDayOfMonths Day)
		{

			switch (Day)
			{

			
				case enDayOfMonths.Jan:
					return "Its January";

				case enDayOfMonths.Feb:
					return "Its February";

				case enDayOfMonths.Mar:
					return "Its March";

				case enDayOfMonths.Apr:
					return "Its April";

				case enDayOfMonths.May:
					return "Its May";

				case enDayOfMonths.June:
					return "Its June";

				case enDayOfMonths.July:
					return "Its July";

				case enDayOfMonths.Agues:
					return "Its August";

				case enDayOfMonths.Sept:
					return "Its September";

				case enDayOfMonths.Oct:
					return "Its October";

				case enDayOfMonths.Nov:
					return "Its November";

				case enDayOfMonths.Dec:
					return "Its December";

				default:
					return "Wrong";
			}
		}

		static void Main(string[] args)
        {

			Console.WriteLine(GetDaysOfMonths(enDayOfMonths.Dec));
        }



    }
}
