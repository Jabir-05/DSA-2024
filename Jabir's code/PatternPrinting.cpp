#include <iostream>
using namespace std;
int main()
{
  //  Q1:- Rectangular Parttern
  //  int n,m;
  //   cin>>n;
  //   cin>>m;
  //    for (int i=1; i<=n;i++){
  //     for( int j=1; j<=m; j++){
  //       cout<<"*";

  //     }
  //      cout<<endl;
  //    }


  // Holo rec pat

  //  int n,m;
  //  cin>>n;
  //  cin>>m;
  //   for(int i =1; i<=n; i++){
  //     for(int j=1; j<=m; j++){
  //       if (i==1 || j==1|| i==n || j==m){
  //         cout<<"*";
  //       }
  //        else {
  //         cout<<" ";
  //        }

  //     }
  //      cout<<endl;
  //   }

  ///  Triangular Parrten

  // int n;
  // cin>>n;
  //  for ( int i=1; i<=n; i++){
  //   for (int j = 1; j<=i;j++){
  //     cout<<"*";

  //   }
  //    cout<<endl;
  //  }
  // int n;
  // cin >> n;

  // for (int j = 1; j <= n; j++)
  // {
  //   for (int i = i; i <= j; i++)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  //}

  //

  //  int n;
  //   cin>>n;
  //    for (int i=1; i<=n;i++){
  //     for(int j=1;j<=(n-i);j++){
  //       cout<<" ";
  //     }
  //     for(int j=1; j<=(2*i-1);j++){
  //       cout<<"*";
  //     }
  //     cout<<endl;

  //}

  // Numerical Rec
  // int n;
  //  cin>>n;
  //   for(int i=1; i<=n; i++){
  //     for(int j=i;j<=n; j++){
  //       cout<<j;
  //     }
  //     for(int j=1; j<=(i-1);j++){
  //       cout<<j;
  //     }
  //     cout<<endl;
  //   }

  //  int n;
  //  cin>>n;
  //  for(int i=1; i<=n;
  //  i++){
  //   for(int j=1; j<=n;j++){
  //     cout<<j
  //     ;

  //   }
  //   cout<<endl;
  //  }

  //                 int n,m;
  //  cin>>n;
  //  cin>>m;
  //   for(int i =1; i<=n; i++){
  //     for(int j=1; j<=m; j++){
  //       if (i==1 || j==1|| i==n || j==m){
  //         cout<<"j";
  //       }
  //        else {
  //         cout<<" ";
  //        }

  //     }
  //      cout<<endl;
  //   }

  // For  Alternate printing
  //  int n,m;
  //  cin>>n;
  //  cin>>m;
  //  for(int i=1; i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     if((i+j)%2==0){
  //       cout<<"1";

  //     }
  //     else{
  //       cout<<"2";

  //     }
  //   }
  //   cout<<endl;
  //  }

  // Numerical Triangular Pattern

  // int n;
  // cin >> n;
  // for (int i = 1; i <= n;
  //      i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }


     // try this 

      int n;
      cin>>n;
      for(int i=1;i<=n;i++){
        for(int j=1;j=(n-i);j++){
          cout<<" ";

        }
        for(int j=1;j<=i;j++){
          cout<<j;
        }
        for(int j=(i-1);j>=1;j--){
          cout<<j;

        }
        cout<<endl;
      }
      
      

  return 0;
}