/* Program that checks whether a given number is prime or not. */

#include <iostream>

using namespace std;

bool check_for_prime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    /* 
        Since factors of a number come in pairs,
        if x <= y in a pair (x,y) for a number n, x*x <= n.
    */

    for (int i = 5; i * i <= n; i += 6)  // For prime numbers between 5 and 25, the loop doesn't even run, thereby returning true.
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    cout << "Is 169 a prime number? " << check_for_prime(169);
    return 0;
}

/* 
    An application of this program is found in the problem statement where given a number N, we need to print 
    the count of all numbers <= N that have exactly 3 divisors. 

    Solution
    --------
    A number that has exactly two divisors is a prime number.

    Therefore, all the squares of prime numbers smaller than or equal to N are to be counted.
    i.e. if i is a prime number and i*i <= N, then the i*i has exactly 3 divisors.
*/