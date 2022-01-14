#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){

        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;

        
    }
return 0;
}

