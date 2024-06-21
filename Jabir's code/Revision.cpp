#include <iostream>
using namespace std;
int main()
{
    //     for(int i=0;i<10;i++){
    //         cout<<i;
    //     }

    // int i=1;
    // while(i<=10){
    //     cout<<i;
    //     i+=1;
    // }

    //  int i=0;
    //  do{
    //     cout<<"hello"<<endl;
    //     i++;

    //  }while(i<3);

   

    //       char ch= 'A';
    //   // Type conversion
    //   int x= ch +1;

    //       cout<<(char)x<<endl;

    //  for(int i=0;i<9;i++){
    //     cout<<(char)('A'+i)<<endl;
    //  }


 // Q :- Write a program to print alphabet diamond pattern ?


    // upper triang
    int n ;
    cin>>n;

    for (int line = 0; line <= n; line++)
    {
       int space = (n - line);
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        int no_of_chars = 2 * line - 1;
        for (int i = 0; i < no_of_chars; i++)
        {
            char ch = (char)('A' + i);
            cout << ch;
        }
        cout << endl;
    }

    //    lower triang

      
      
            for(int line=n+1; line <=2*n-1;line++){
                int no_of_spaces =(line -n);
                for(int i=0; i<no_of_spaces; i++){
                    cout<<" ";

                }
                int no_of_chars = 2*(2*n-line )-1;
                for (int j=0;j<no_of_chars; j++){
                    cout<<(char)('A'+j);
                }
                cout<<endl;
            }



           
        

    return 0;
}