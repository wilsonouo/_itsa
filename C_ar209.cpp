#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string name;
    int smart, work_hard;

    for(int i = 0;i < n;i++){
        cin >> name >> smart >> work_hard;
        cout << name << " ";
        if(smart == 1 && work_hard == 4){
            cout << "General" << endl;
        }
        else if(smart == 1 && work_hard == 3){
            cout << "Staff" << endl;
        }
        else if(smart == 2 && work_hard == 4){
            cout << "Soldier" << endl;
        }
        else if(smart == 2 && work_hard == 3){
            cout << "execute by shooting" << endl;
        }
    }
    return 0;
}
