using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Write a program to ask the user to enter: • Mark1, Mark2, Mark3
 Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
*/

namespace Problem_11
{
    internal class Program
    {
        struct stMatks
        {
            public int Mark1;
            public int Mark2;
            public int Mark3;
        }
        static stMatks ReadNumbers()
        {
            stMatks Marks;

            Console.Write("Please Enter Mark1?: ");
            Marks.Mark1 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Please Enter Mark2?: ");
            Marks.Mark2 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Please Enter Mark3?: ");
            Marks.Mark3 = Convert.ToInt32(Console.ReadLine());

            return Marks;
        }
        static int SumOf3Numbers(stMatks Marks)
        {
            return Marks.Mark1 + Marks.Mark2 + Marks.Mark3;
        }
        static float Average3Numbers(stMatks Marks)
        {
            return (float)(SumOf3Numbers(Marks) / 3);
        }
        static bool CheckPassOrFail(stMatks Marks)
        {
            return (Average3Numbers(Marks) >= 50);
        }
        static void PrintResult(stMatks Marks)
        {
            Console.WriteLine(Average3Numbers(Marks));

            if (CheckPassOrFail(Marks))
                Console.Write("Pass");
            else
                Console.Write("Fail");
        }
     
        static void Main(string[] args)
        {

            PrintResult(ReadNumbers());
            Console.ReadKey();
        }
    }
}
