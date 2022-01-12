#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;


    for(int i=N;i>=0;i--){
        for(int j=N;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    for(int i=1;i<=N;i++){

        for(int j=N;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
return 0;
}