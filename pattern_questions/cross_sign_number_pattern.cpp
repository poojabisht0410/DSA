
#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(j==i){
                cout<<j;
            }
            else if(i+j==N+1){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}