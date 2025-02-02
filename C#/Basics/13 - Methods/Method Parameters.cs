using System;


namespace Main
{
    internal class Program
    {

        static void PrintMyInfo(string Name, byte Age)
        {
            Console.WriteLine("Name= {0} , Age= {1}", Name, Age);
        }
        static void Main(string[] args)
        {


            PrintMyInfo("Maamoun ibrahim", 45);


            Console.ReadKey();

        }
    }
}

