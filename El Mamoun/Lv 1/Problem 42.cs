using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Write a program to calculate the task duration in seconds and print it on screen
 Given the time duration of a task in the number of days, hours, minutes, and seconds,
*/
namespace Problem_42
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

       static stTaskDurationInfo ReadTaskDurationInfo()
        {
            stTaskDurationInfo TaskDurationInfo;

            Console.WriteLine("Please Enter Number of Days?: ");
            TaskDurationInfo.NumberOfDays = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Please Enter Number of Hours?: ");
            TaskDurationInfo.NumberOfHours = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Please Enter Number of Minutes?: ");
            TaskDurationInfo.NumberOfMinutes = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Please Enter Number of Seconds?: ");
            TaskDurationInfo.NumberOfSeconds = Convert.ToInt32(Console.ReadLine());

            return TaskDurationInfo;

        }

       static float CalculteTaskDuration(stTaskDurationInfo TaskDurationInfo)
        {

            float Result = TaskDurationInfo.NumberOfDays * 24 * 60 * 60 + TaskDurationInfo.NumberOfHours * 60 * 60 +
                TaskDurationInfo.NumberOfMinutes * 60 + TaskDurationInfo.NumberOfSeconds;

            return Result;


        }


        static void Main(string[] args)
        {

            Console.WriteLine(CalculteTaskDuration(ReadTaskDurationInfo()));         
            Console.ReadKey();
        }
    }
}
