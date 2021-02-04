using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nWhat is your name?");
            var username = Console.ReadLine();
            Console.WriteLine($"\nHello {username}!");
            int dayOfYear = DateTime.Now.DayOfYear;
            Console.Write("Day of year: ");
            Console.WriteLine(dayOfYear);
        }
    }
}
