#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n = 10;
    int a = 3;
    int r = 4;

    for (int i = 1; i < n; i++)
    {
        int gp = a * pow(r,(i-1));
        cout << gp << " ";
    }
    int i = i + 1;
    cout << endl;
     
}