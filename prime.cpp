#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int j){

    for (int i = 2; i <=  sqrt(j); i++)
    {
        if (j%i == 0){
            return false;
        }
    }
    
    return true;

}

int main(){

    int a, b ;

    cin >> a >> b ;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
        
    }

    return 0;
    
}