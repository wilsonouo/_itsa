#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, string> table;

    // set the Morse Code
    table['T'] = "0";
    table['M'] = "00";
    table['N'] = "01";
    table['O'] = "000";
    table['G'] = "001";
    table['K'] = "010";
    table['D'] = "011";
    table['c'] = "0000"; // ch
    table['Ö'] = "0001";
    table['Q'] = "0010";
    table['Z'] = "0011";
    table['Y'] = "0100";
    table['C'] = "0101";
    table['X'] = "0110";
    table['B'] = "0111";
    table['E'] = "1";
    table['A'] = "10";
    table['I'] = "11";
    table['W'] = "100";
    table['R'] = "101";
    table['U'] = "110";
    table['S'] = "111";
    table['J'] = "1000";
    table['P'] = "1001";
    table['Ä'] = "1010";
    table['L'] = "1011";
    table['Ü'] = "1100";
    table['F'] = "1101";
    table['V'] = "1110";
    table['H'] = "1111";

    int n;
    string code;

    cin >> n;

    for(int k = 0;k < n;k++){
        cin >> code;
        cout << code << ":";
        int len = code.length();
        for(int i = 0;i < len;i++){
            cout << " ";
            if(code.at(i) == 'c' && code.at(i+1) == 'h'){
                cout << table['c'];
                i++;
            }
            else{
                cout << table[code.at(i)];
            }
        }
        cout << endl;
    }

    return 0;
}
