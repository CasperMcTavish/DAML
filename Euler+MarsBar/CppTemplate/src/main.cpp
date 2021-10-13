// Using the new class
#include "MyClass.h"

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <chrono>

int main( /*int argc, char * argv[]*/ )
{


    // Mars bar time!

    // Can start at 2, as 0 and 1 are not prime numbers
    // One is the counter, one is the 'true last calculated prime'
    int primecount = 2, prime = 2;
    bool isPrime = true;
    std::cout << "Calculating highest prime in 5 seconds..." << std::endl;

    // Create timer
    auto start = std::chrono::steady_clock::now();

    // Infinite loop
    for (;;)
    {
      // Prime number calculator
      for (int i = 2; i < primecount; i++)
      {
          if ((primecount % i) == 0)
            {
              isPrime = false;
              break;
            }
      }
      // If isPrime was never trigerred, update new prime
      if (isPrime)
        {
          prime = primecount;
        }

      // If time between start and now is 5 seconds, break
      if(std::chrono::steady_clock::now() - start > std::chrono::seconds(5))
        {
          break;
        }
      // Next number, and reset isPrime
      isPrime = true;
      primecount++;
    }

    std::cout << "After five seconds, the highest prime is: " << prime << std::endl;




  /*
  // Project Euler - IGNORE

  // Sum of all multiples of 3, 5 or 7 below 2000
  // Create lists of all multiples
  std::vector<int> seqthree;
  std::vector<int> seqfive;
  std::vector<int> seqseven;
  int sumvals = 0;

  for (int i = 1; i < 2000; i++)
  {
    // The longer brute-force modulus method
    if ((i % 3) == 0){ sumvals += i; }
    else if ((i % 5) == 0){ sumvals += i; }
    else if ((i % 7) == 0){ sumvals += i; }
  }

  std::cout << "Total summation: " << sumvals << std::endl;




  // Fibonacci, first two terms, then the next term
  int sumFibs = 0, t1 = 0, t2 = 1, nextTerm = 0;

  // Start of Fibonacci, add the odd
  sumFibs += t2;

  // Infinite loop. Scary!
  for (;;)
  {
    // Basic Fib loop
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

    // Check for two mil
    if (nextTerm >= 2000000)
    {
        break;

    }

    // Add odds
    if (nextTerm % 2 == 0)
    {
        continue;
    }
    else
    {
        sumFibs += nextTerm;
    }

  }

  // Output
  std::cout << "Total odd Fibonacci sum: " << sumFibs << std::endl;
  */

// Don't touch this
}
