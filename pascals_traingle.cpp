#include <iostream>
using namespace std;
// The pascal's traingle for n=5 looks like as following:
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Each entry is nothing but a binomial coefficient of the form iCj where i is row number and
j is column no. both starting from zero */

// Following is the code to generate such triangle

int fact(int n)
{

    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int combination(int n, int r)
{

    int comb;

    comb = fact(n) / (fact(n - r) * fact(r));

    return comb;
}

int main()
{

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
