#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<char, string> table;
    table['N'] = "N: Nutrition";
    table['E'] = "E: Exercise";
    table['W'] = "W: Water";
    table['S'] = "S: Sun";
    table['T'] = "T: Temper";
    table['A'] = "A: Air";
    table['R'] = "R: Rest";
    table['t'] = "t: trust";

    char character;
    for(int i = 0;i < n;i++){
        cin >> character;
        cout << table[character] << endl;
    }
    return 0;
}
