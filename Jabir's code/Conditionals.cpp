#include <iostream>
using namespace std;
int main()
{
    // If - else satement
    // int num;
    // cout << "Enter a number" << endl;
    // cin >> num;
    // if (num % 2 == 0)
    // {
    //     cout << "Even" << endl;
    // }
    // else
    // {
    //     cout << "Odd" << endl;
    // }

    // Q:- WAP  to divide people into 3  age groups depending upon their age  ?

    // int age;
    // cout << "Enter age " << endl;
    // cin >> age;
    // if (age < 12)
    // {
    //     cout << "Child" << endl;
    // }
    // else if (age > 18)
    // {
    //     cout << "Adult" << endl;
    // }

    // else
    // {
    //     cout << "Teenager" << endl;
    // }
    // Nasted  if - else statement
    // int marks;
    // cout << "Enter the marks " << endl;
    // cin>>marks;
    // if (marks >= 33)
    // {
    //     cout << "pass" << endl;
    // }
    // else
    // {
    //     cout << "fail" << endl;
    // }

    //  // Ternary  OPerator
    //   marks > 33 ? cout << "pass" << endl : cout << "fail" <<endl;

    // Q:-  WAP  to print the value if it is even and divisible by 3 ?

    // int num;
    // cout << "Enter the number " << endl;
    // cin >> num;
    // if ((num % 2 == 0) && (num % 3 == 0))
    // {
    //     cout << num << endl;
    // }

    // Q:- WAP   to print the value if it is divisible by e or 5
    //int num;
    // cout << "Enter the number " << endl;
    // cin >> num;
    // if ((num % 3 == 0) || (num % 5 == 0))
    // {
    //     cout << num << endl;
    // }
        


     // Switch Caes 
     // Q:- WAP  to print the day based on the day number ?
    //    int day;
    //     cout<<"Enter the day "<<endl;
    //     cin>>day;
    //      switch (day){
    //         case 1:
    //         cout<<"Monday"<<endl;
    //         break;
    //         case 2:
    //         {
    //         cout<<"Tuesday"<<endl;
    //         break;
    //         case 3:
    //         cout<<"wednesday"<<endl;
    //         break;
    //         case 4:
    //         cout<<"Thursday"<<endl;
    //         break;
    //         case 5:
    //         cout<<"Friday"<<endl;
    //         break;
    //         case 6:
    //         cout<<"Satuarday"<<endl;
    //         break;
    //         case 7:
    //         cout<<"Sunday"<<endl;
    //         break;
    //          default:
    //          cout<<"default case "<<endl;
    //          break;


    //         }
    //      }
  // Vowel and Consonants 
     char character;
     cout<<"Enter the character"<<endl;
     cin>>character;
      switch (character){
        case 'a':
        cout<<"Vowel"<<endl;
        break;
        case 'e':
        cout<<"Vowel"<<endl;
        break;
        case 'i':
        cout<<"Vowel"<<endl;
        break;
        case '0':
        cout<<"Vowel"<<endl;
        break;
        case 'u':
        cout<<"Vowel"<<endl;
        break;
       default:
        cout<<"Consonants"<<endl;
        break;
      }
      
    return 0;
}