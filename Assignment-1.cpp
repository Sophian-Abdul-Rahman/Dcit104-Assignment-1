 
// NAME:SOPHIAN ABDUL RAHMAN
//STUDENT ID:10959827
//COURSE: DCIT104

// A C++ PROGRAM THAT PRODUCES THE SUM OF ALL PRIME NUMBERS LESS THAN 10
#include <iostream>
using namespace std;

bool checkPrime(int numX)
{
        if(numX == 1) {
                return false;
            
    }
        for (int i = 2; i*i <= numX; i++) {
                if (numX % i == 0) {
                        return false;
                    
        }
            
    }
        return true;
}

int primeSum(int x, int y)
{
        int sum = 0;
        for (int i = y; i >= x; i--) {
         
                // Checking for prime numbers
                bool isPrime = checkPrime(i);
                if (isPrime) {
             
                        // Suming the prime numbers
                        sum = sum + i;
                    
        }
            
    }
        return sum;
}
int main()
{
        int x = 0, y = 10;

        cout << primeSum(x, y);
}