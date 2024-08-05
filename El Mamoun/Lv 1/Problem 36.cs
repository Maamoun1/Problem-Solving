using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 Problem 36 :Write a program to ask the user to enter:
 • Number1
 • Number 2
 • OperationType
*/

namespace Problem_36
{
    internal class Program
    {
        enum enCharType { Add='+',Sub='-',Multy='*',Div='/'};
        static enCharType ReadOperationType()
        {
            char C;

            Console.WriteLine("Pleae Enter a Operation Type?: ");
            C = Convert.ToChar(Console.ReadLine());

            return (enCharType) C;
        }
        static float ReadNumber()
        {
            float Number = 0;
            Console.WriteLine("Please Enter a Number?: ");
            Number=Convert.ToSingle(Console.ReadLine());

            return Number;
        }
        static float CalOperationType(float Number1, float Number2,enCharType OpType)
        {
            if (OpType == enCharType.Add)
                return Number1 + Number2;

            else if (OpType == enCharType.Sub)
                return Number1 - Number2;

            else if (OpType == enCharType.Div)
                return (Number1 / Number2);

            else if (OpType == enCharType.Multy)
                return (Number1 * Number2);

            else
                return 0;
        }

        static void Main(string[] args)
        {

            float Number1 = ReadNumber();
            float Number2 = ReadNumber();

            enCharType OpType = ReadOperationType();

            Console.WriteLine(CalOperationType(Number1, Number2, OpType));


            Console.ReadKey();
        }
    }
}
