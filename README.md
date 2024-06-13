Name of Project: Programming Assignment #5 (PA5)

Complete Assignment in C++ using Vectors 

  Write a program that prompts the user for an integer greater than 1, and then uses the Sieve 
  of Eratosthenes to calculate all the prime numbers less than or equal to that integer. You 
  must implement the following algorithm which uses vectors to solve the problem.

  
  Declare two vectors. One vector, which is empty initially, will contain prime numbers that 
  you have discovered. The other vector will be where the sieve takes place. Initially, it should 
  contain all the integers between two and the number entered by the user, inclusive. Insert 
  these numbers into the vector so that they are in increasing order.

  
  Remove the first integer from the sieve vector, which is prime. Insert it into the prime vector. 
  Then, remove all elements from the sieve vector that are multiples of that value.
  Repeat the previous step until the sieve vector is empty.

  
  At this point, the prime vector contains all the prime numbers between 2 and the number 
  entered by the user. Print out the contents of this vector in increasing order. Finally, show 
  the sum of all these prime numbers. 

Here is an example of what your program should look like when executed. User input is shown in bold.

    Enter a positive integer greater than 1: **25**
    Here are the primes less than or equal to 25:
    2
    3
    5
    7
    11
    13
    17
    19
    23
    The summation of these prime numbers is = **100**
    
➢ Comment your code appropriately, including an introductory comment at the beginning 
of the main program.
