
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1000;
    vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

    while (n < 4 || n > 100)
    {
        cout << "Por favor, ingrese un numero menor que 100: ";
        cin >> n;
    }

    for (int i = 4; i < n; i += 2)
    {
        for (int k = 0; k < primes.size() && primes[k] < i; k++)
        {
            int j = primes[k];
            for (size_t m = k ; m < primes.size() && primes[m] <= (i - j) ; m++)
            {
                if (j + primes[m] == i)
                {
                    cout << j << " + " << (i - j) << " = " << i << "\n";
                    k = primes.size();
                    break;
                }
            }      
        }
    }
}



