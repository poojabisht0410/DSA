#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){

        for(int j=1;j<=N-i;j++){
            cout<<"  ";

        }

        int m=2*i-1;
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m--;
        }

        for(int j=1;j<i;j++){
            cout<<m<<" ";
            m--;
        }

        cout<<endl;
    }
return 0;
}