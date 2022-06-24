#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string table[12] = {"pig", "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog"};

    cin >> n;

    int year = 0;
    for(int i = 0;i < n;i++){
        cin >> year;
        int y = year;
        if(year < 0){
            y = (-year) / 12;
            y = ((-year) / 12)*12 + 13 + year; // shifted
        }
        cout << year << " " << table[(y%12)] << endl;
    }
    return 0;
}
