using Timo = System.Console;

namespace HelloWorld
{

    class Program
    {
        static void Main(string[] args)
        {

            // using Koko alias instead of System.Console
            Timo.WriteLine("Hello World!");
            Timo.ReadKey();
        }


    }
}