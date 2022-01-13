// #include<iostream>
// using namespace std;




// int main()
// {
//     int N;
//     cin>>N;
//     char ch='A' + N-1;
//     char mh='A'+N-1;

//     for(int i=N;i>0;i--){
//         for(int j=i;j<N;j++){
//             cout<<" ";
//         }

//         for(int j=i;j<=i;j++){
//             cout<<ch;
//             ch--;

//         }

//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }

//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }

//         for(int j=N-2;j<=N-2;j++){
//             cout<<mh;
//             mh--;
//         }
//         cout<<endl;
//     }

    

    

// return 0;
// }


#include<iostream>
using namespace std;




int main()
{
    int N;
    cin>>N;
    char ch='A'+N-1;
    char mh='A'+N-1;

    for(int i=N;i>0;i--){
        for(int j=i;j<N;j++){
            cout<<" ";
        }

        for(int j=i;j<=i;j++){
            cout<<ch;
            ch--;

        }

        for(int j=1;j<i;j++){
            cout<<" ";
        }

        for(int j=1;j<i;j++){
            cout<<" ";
        }

        for(int j=i;j<=i;j++){
            if(j==1){
                break;
            }
            cout<<mh;
            mh--;
        }
        cout<<endl;
    }
return 0;
}
