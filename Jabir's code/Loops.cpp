#include <iostream>
using namespace std;
int main()
{
  // while loop

  // int i=1;
  // while (i<=100){
  //   cout<<i<<endl;
  //   i++;
  //}

  // Q:- print the sum of the m natural numbers, where n is the input ?
  // int n;
  // cout << "Enter  number " << endl;
  // cin >> n;
  // int sum = 0;
  // int i = 1; // loop variable
  // while (i <= n)
  // {
  //   sum += i;
  //   i++; // updating loop variable
  // }
  // cout << sum << endl;

  // For loop

  // int i;
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << i << endl;
  // }
  // int n;
  // cout << "Enter the number" << endl;
  // cin >> n;

  // int i;
  // int sum = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   sum += i;
  // }
  // cout << sum << endl;
  // Q:- Print the first multiple of 5 which is also a multiple of 7 ?

  //  int i=5;
  //   while (true){
  //     if(i%7==0){
  //       cout<<i<<endl;
  //       break;

  //     }
  //     i+=5;
  //   }

  // for (int i=5; ;i+=5){
  //   if(i%7==0){
  //     cout<<i<<endl;
  //     break;
  //   }
  // }

  // Do - while loop
  // Q:- print the sum of the stream of N integer in the input using do- while loop ?

//   int n;
//   //cout << "Enter the  number " << endl;
//   cin >> n;
//   int sum = 0;
//   do
//   {
//     int num;
//     cin >> num;
//     sum += num;
//     n--;
//   } while (n > 0);
//  cout<<sum<<endl;
   
//}
  
      //  / Q:- print all the values between 1 and 50 except for the multiples of 3 ?

       for(int i=1; i<=50;i++){
        if (i%3==0){
        continue;
        }
       cout<<i<<endl;
       }
      return 0;
}