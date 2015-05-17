#include <iostream>
using namespace std;

int height(int n) {
    int H=1,i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        H=H+1;    
        }    
        else
        H=H*2;
        
    }
    return H;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

