using System;

namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {

            //  String Interpolation

            string firstName = "Maamoun";
            string lastName = "ibrahim";
            string code = "107";

            //You shold use $ to $ to identify an interpolated string 
            string fullName = $"Mr. {firstName} {lastName}, Code: {code}";

            Console.WriteLine(fullName);

            Console.ReadKey();

        }
    }
}
