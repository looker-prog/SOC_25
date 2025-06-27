
#include <iostream>
using namespace std;

int main(){
    int n,m,year;
    bool not_found = true;
    cin >> n;
    m = n + 1;

    while(not_found){
        int digit_count[10] = {0};
        int temp = m;

        while (temp > 0){
            int digit = temp % 10;
            digit_count[digit] += 1;
            temp = temp / 10;
        }

        not_found = false;

        for (int i = 0; i < 10; i++){
            if (digit_count[i] > 1){
                not_found = true;
                break;
            }
        }

        if (!not_found){
            year = m;
        }

        m = m + 1;
    }
    cout << year;
}
