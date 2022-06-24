#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string table[9] = {"Mercury", "Venus", "Earth", "Mars", "Juputer", "Saturn", "Uranus", "Neptunus", "Pluto"};

    cin >> n;

    int dis = 0;
    for(int i = 0;i < n;i++){
        cin >> dis;
        cout << dis << " " << table[dis-1] << endl;
    }
    return 0;
}
