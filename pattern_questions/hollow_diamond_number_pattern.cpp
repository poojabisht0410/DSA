#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;


    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--){
            cout<<"  ";
        }

        for(int j=i;j<=i;j++){
            cout<<j ;
        }

        for(int j=1;j<i;j++){
            cout<<"  ";
        }

        for(int j=1;j<i;j++){
            cout<<"  ";
        }

        for(int j=i;j<=i;j++){
            if(j==1){
                break;
            }
            else{
                cout<<j ;
            }
        }
        cout<<endl;

    }
    

    for(int i=N-1;i>0;i--){
        for(int j=N-1;j>i;j--){
            cout<<"  ";

        }
        for(int j=i;j<=i;j++){
            cout<<j;
        }

        for(int j=i;j>1;j--){
            cout<<"  ";
        }

        for(int j=i;j>1;j--){
            cout<<"  ";
        }

        for(int j=i;j>=i;j--){
            if(j==1){
                break;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }


    
return 0;
}