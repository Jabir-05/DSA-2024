#include<iostream>
using namespace std;
 int main (){
     
      // Q :- count the number of digits for a given number n ? e.g: 34762

    //  int n;
    //  cin>>n; //610
       
    //    int digits=0;
    //    while(n>0)
    //      {
    //         digits++;  
    //         n=n/10;
    //      }
    //       cout<<digits<<endl;


    // Q:- Find the sum of digits in a given number ? 

    //   int n;
    //   cin>>n;
    //   int sum =0;
    //   while (n>0){
    //   int lastdigits=n%10;
    //   sum+=lastdigits;
    //   n/=10;
    //   }
    //   cout<<sum<<endl;
      
      // Q:- Reverse the digits of a number ?

    //     int n;
    //     cin>>n;
    //     int reverse =0;
    //     while(n>0){
    //         int lastdigit=n%10;
    //          reverse=reverse*10+lastdigit;
    //          n/=10;
    //     }
    //    cout<<reverse<<endl;



      // Q:- Find the sum of the following series ?
      // s=1-2+3-4.....n

    //   int n;
    //   cin>>n;
    //   int result=0;
    //   for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         result-=i;

    //     }
    //     else{
    //         result+=i;
    //     }
    //   }
    //   cout<<result<<endl;
     


      // Q:- Print the first factorial number ?


       int n;
       cin>>n;
       int fact=1;
        for (int i=1;i<=n;i++){
            fact*=i;
            cout<<fact<<endl;

        }
 return 0;
 }