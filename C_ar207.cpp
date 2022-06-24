#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class student{
    public:
        string name;
        int score;
};

bool compare(student a, student b)
{
    if(a.score == b.score) return b.name > a.name;
    return a.score > b.score;
}

int main()
{
    int n;
    cin >> n;

    // read the information
    student people[20];
    for(int i = 0;i < n;i++){
        cin >> people[i].name >> people[i].score;
    }

    sort(people, people+n, compare);

    for(int i = 0;i < n;i++){
        cout << i+1 << " " << people[i].name << " " << people[i].score << endl;
    }

    return 0;
}
