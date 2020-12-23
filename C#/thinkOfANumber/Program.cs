using System;

namespace thinkOfANumber
{
    class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int rnum = random.Next(1, 1000);
            int guessing = 0;
            int steps = 0;

            Console.Clear();
            Console.Write("Welcome in the `I was thinking of a number` game!");
            Console.Write("\nI was thinking of a number from 0 to 1000.\n");

            do
            {
                steps += 1;
                Console.Write("What number did I mean? ");

                try
                {
                    guessing = Convert.ToInt32(Console.ReadLine());

                    if (rnum < guessing)
                    {
                        Console.WriteLine("\nIt was smaller!\n");
                    }
                    else
                    {
                        Console.WriteLine("\nIt was bigger!\n");
                    }
                }
                catch
                {
                    Console.WriteLine("It not was a number!\nTry again.");
                }

            } while (rnum != guessing);

            Console.WriteLine($"Congratulations!\nYes, it was the {rnum}.\nYou guessed it in {steps} steps.");
        }
    }
}

