using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*
Problem 43: Write a program that inputs the number of seconds  and changes it to days, hours, minutes, and seconds

*/
namespace Problem_43
{
    internal class Program
    {
        struct stTaskDurationInfo
        {
            public int NumberOfDays;
            public int NumberOfHours;
            public int NumberOfMinutes;
            public int NumberOfSeconds;
        }
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

       static stTaskDurationInfo SecondsToTaskDurationInSeconds(int TotalSeconds)
        {
            stTaskDurationInfo TaskDuration;

            const int SecondPerDay = 24 * 60 * 60;
            const int SecondPerHour = 60 * 60;
            const int SecondPerMinute = 60;

            int Remainder = 0;

            TaskDuration.NumberOfDays = (TotalSeconds / SecondPerDay);
            Remainder = TotalSeconds % SecondPerDay;

            TaskDuration.NumberOfHours = (Remainder / SecondPerHour);
            Remainder = Remainder % SecondPerHour;

            TaskDuration.NumberOfMinutes = (Remainder / SecondPerMinute);
            Remainder = Remainder % SecondPerMinute;

            TaskDuration.NumberOfSeconds = Remainder;

            return TaskDuration;

        }

       static void PrintTaskDurationDetails(stTaskDurationInfo TaskDuration)
        {


            Console.Write(TaskDuration.NumberOfDays + ": " + TaskDuration.NumberOfHours + ": "
                 + TaskDuration.NumberOfMinutes + ": " + TaskDuration.NumberOfSeconds);
        }

        static void Main(string[] args)
        {

            int NumberOfSecods = ReadPostiveNumber("Please Enter Number of Seconds? ");
            PrintTaskDurationDetails(SecondsToTaskDurationInSeconds(NumberOfSecods));


        }
    }
}
