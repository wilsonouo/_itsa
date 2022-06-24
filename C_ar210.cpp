#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char code;

    for(int i = 0;i < n;i++){
        cin >> code;
        code += 2;
        cout << code << endl;
    }
    return 0;
}
