#include <iostream>

using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout <<  string(i+1, '*') << endl;
    }
}
