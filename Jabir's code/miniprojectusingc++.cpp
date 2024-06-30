#include <iostream>
#include <fstream>
using namespace std;

class temp
{
    string searchName, searchPass, searchEmail;
    string Username, Email, Password;
    fstream file;

public:
    void Login();
    void SingUp();
   
    void ForgotPassword();
    
} obj;
int main()
{
    char choice;
    cout << "1-Login "<<endl;
    cout << "2-sing-up "<<endl;
    cout << "3-Forgot Password "<<endl;
    cout << "4-Exit"<<endl;
    cout << "Enter your choce  ::" << endl;
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
    case '1':
        obj.Login();

        break;
    case '2':
        obj.SingUp();

        break;
    case '3':
        obj.ForgotPassword();
        break;
    case '4':
       return 0;
        break;
    default:
       
        cout << "Invalid Selection " << endl;
    }
}
void temp ::SingUp()
{
    cout << "Enter your User name " << endl;
    getline(cin, Username);
    cout << "Enter your Email Addres" << endl;
    getline(cin, Email);
    cout << "Enter your Password " << endl;
    getline(cin, Password);

    file.open("loginData.txt", ios ::out | ios ::app);
    file << Username << "*" << Email << "*" << Password << "*" << endl;
    file.close();
}

void temp ::Login()
{

    cout << "----------LOGIN----------" << endl;

    cout << "Enter your User name ::" << endl;
    getline(cin, searchName);
    cout << "Enter your Password ::" << endl;
    getline(cin, searchPass);
    file.open("loginData.txt", ios ::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, Password, '\n');
    while (!file.eof())
    {
        if (Username == searchName)
        {
            if (Password == searchPass)
            {
                cout << "Accout Login Succesfull." << endl;
                cout << "Username " << Username << endl;
                cout << "Email " << Email << endl;
            }
            else
            {
                cout << "Password is incorrect ::" << endl;
            }
        }
        getline(file, Username, '*');
        getline(file, Email, '*');
        getline(file, Password, '\n');
    }
    file.close();
}
void temp ::ForgotPassword()
{
    cout << "Enter your Usrename  ::" << endl;
    getline(cin, searchName);
    cout << "Enter your Email Address ::" << endl;
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);
    getline(file, Username, '*');
    getline(file, Email, '*');
    getline(file, Password, '\n');
    if (Username == searchName)
    {
        if (Email == searchEmail)
        {
            cout << "Account Found" << endl;
            cout << "Your password " << Password << endl;
        }
        else
        {
            cout << "Not found..." << endl;
        }
    }
    else
    {
        cout << "Not found" << endl;
    }

    file.close();
}
