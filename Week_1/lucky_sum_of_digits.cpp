
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 0;
    int min_digits = INT_MAX;
    cin >> n;

    for (int i = 0; i <= floor(n / 7); i++){
        int rem = n - (7 * i);
        if (rem % 4 == 0){
            int j = rem / 4;
            if (i + j < min_digits){
                min_digits = i + j;
                a = i;
                b = j;
            }
        }
    }

    if (min_digits == INT_MAX){
        cout << -1;
    }
    else{
        for (int m = 0; m < b; m++){
            cout << '4';
        }
        for (int k = 0; k < a; k++){
            cout << '7';
        }
    }
}
