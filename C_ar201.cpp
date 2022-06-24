#include <iostream>

#define SWAP(a,b) {int c = a; a = b; b = c;}

using namespace std;

int main()
{
  int n; // how many data need to test
  cin >> n;

  for(int k = 0;k < n;k++){

    int height[100] = {0};
    int left, right, h;
    int right_most = 0;

    int m; // how many houses in the city
    cin >> m;

    for(int t = 0;t < m;t++){
      cin >> left >> right >> h;
      if(right < left) SWAP(right,left);
      if(right > right_most) right_most = right;
      for(int i = left;i <= right;i++){
        if(h > height[i]){
          height[i] = h;
        }
      }
    }

    for(int i = 0;i < right_most;i++){
        cout << height[i] << " ";
    }
    cout << height[right_most] << endl;
  }


  return 0;
}
