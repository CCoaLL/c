#include <iostream>
using namespace std;

bool function(int p1) {
    for(int i=1; i<=p1; i++) {
        for(int j=1; j<=p1; j++) {
            for(int k=1; k<=p1; k++) {
                if(p1 == i*(i+1)/2 + j*(j+1)/2 + k*(k+1)/2) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int t, k;
    cin >> t;
    
    for(int i=0; i<t; i++) {
        cin >> k;
        if(function(k)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
}
