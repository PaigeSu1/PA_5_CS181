/*
# Author: Paige Su
# BannerID: 001395655
# Course: CS 181
# Assignment: PA5
# Date Assigned: Saturday, April 20, 2024
# Date/Time Due: Thursday, May 2, 2024 -- 11:55 pm
# Description: This program will exercise object-oriented concepts in C++.
# Certification of Authenticity:
I certify that this assignment is entirely my own work
*/

/*
 * Pre-Programing notes
 * THe sieve of Eratosthenes is a function definition for an algorithms
 *
 * it takes an integer n as input and calculates all the primes numbers that are less than or equal to that n
 *
 * one vector to discover which numbers are prime and one vector to store the rest of the numbers.
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform Sieve of Eratosthenes algorithm of finding what numbers are prime and which ones are not
void sieveOfEratosthenes(int n)
{
    // Vector to store prime numbers this will be the final result vector
    vector<int> primes;

    // Vector to perform the sieve // the testing vector to find the prime numbers.
    vector<bool> sieve(n + 1, true); //this makes sure to excluded 0 and 1 because they are not prime

    // Iterate through numbers from 2 to n (meaning some number the user enters into the program)
    //Stops at the square root of n b/c the num will have prime factor less than or equal to its square root
    for (int p = 2; p * p <= n; ++p) {

        // If p is prime
        if (sieve[p]) {
            primes.push_back(p);   // Add p to primes vector

            // Remove multiples of p from sieve (the testing vector)
            for (int i = p * p; i <= n; i += p) {
                sieve[i] = false;
            }
        }
    }

    // Add remaining primes to primes vector
    //adds the remaining primes that are greater than the square root of n to the primes vector.
    for (int p = sqrt(n) + 1; p <= n; ++p) {
        if (sieve[p]) {
            primes.push_back(p);
        }
    }

    // Print primes for the user
    cout << "Here are the primes less than or equal to " << n << ":" << endl;
    int sum = 0;
    for (int prime : primes) {
        cout << prime << endl;
        sum += prime; //add up all the primes that have been moved into the primes list
    }
    cout << "The summation of these prime numbers is = " << sum << endl;
}

int main()
{
    // Prompt user for input
    int num;
    cout << "Enter a positive integer greater than 1: " ;
    cin >> num;


    // Validate user input so the number must be greater than 1
    if (num <= 1) {
        cout << "Input must be greater than 1." << endl;
        return 1;
    }

    // Perform Sieve of Eratosthenes
    //The calling function is called when the user input is valid
    sieveOfEratosthenes(num);

    return 0;
}

