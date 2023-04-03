#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"hello\n";
    int n,h;
    cin>>n>>h;
    int i=0;
    int min=0;
    while (i<n)
    {   int a;
        cout<<"Donner a,"<<i;
        cin>>a;
        if (a>h) {
            min++;
        }
        min++;
        i++;
    }
    cout<<min;   
return 0;
}

