using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Useful Escape Characters:\n");

            //Newline
            Console.WriteLine("Newline:");
            Console.WriteLine("Welcome to \n El-Maamoun\n");

            //Tab
            Console.WriteLine("Tab:");
            Console.WriteLine("Welcome to\Maamoun\n");

            //Backspace
            Console.WriteLine("Backspace:");
            Console.WriteLine("Welcome to \Maamoun\n");

            //Single quote
            Console.WriteLine("Single Quote:");
            Console.WriteLine("Welcome to \' Maamoun\n");

            //Double quote
            Console.WriteLine("Double Quote:");
            Console.WriteLine("Welcome to \" Maamoun\n");

            //Backslash
            Console.WriteLine("Backslash:");
            Console.WriteLine("Welcome to \\ Maamoun\n");

            //Alert
            Console.WriteLine("Alert:");
            Console.WriteLine("\a");


            Console.ReadKey();

        }
    }
}
