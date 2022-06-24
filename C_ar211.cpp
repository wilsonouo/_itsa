#include <iostream>
#include <string>

using namespace std;

int main()
{
    string card;
    int total[13] = {0};
    char number;

    for(int i = 0;i < 5;i++){
        cin >> card;
        number = card.at(0);
        if(number >= '1' && number <= '9'){
            total[(int)number-'0']++;
        }
        else if(number == 'j' || number == 'J'){
            total[10]++;
        }
        else if(number == 'q' || number == 'Q'){
            total[11]++;
        }
        else if(number == 'k' || number == 'K'){
            total[12]++;
        }
        else if(number == 'a' || number == 'A'){
            total[0]++;
        }
    }

    int ans = 0;
    for(int i = 0;i < 13;i++){
        ans += total[i]/2;
    }

    cout << ans << endl;

    return 0;
}
