#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string element;
    string relationship;
    string table[5] = {"Wood", "Fire", "Earth", "Metal", "Water"};

    cin >> n;


    for(int i = 0;i < n;i++){
        cin >> element >> relationship;  // input
        for(int k = 0;k < 5;k++){
            if(element == table[k]){    // find the correspond element
                if(relationship == "Generating"){
                    cout << table[(k+1)%5] << endl;
                }
                else{
                    cout << table[(k+2)%5] << endl;
                }
                break;
            }
        }

    }
    return 0;
}
