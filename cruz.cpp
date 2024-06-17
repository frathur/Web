#include <iostream>
using namespace std;
int main() {
    int grade,count=56;
    // cout<<"Enter Your Age : ";
    // cin>>age;
    // if(age>=18)
    // {
    //     cout<<"You are eligible to vote"<<endl;
    // }
    // else{
    //     cout<<"You are not eligible to vote"<<endl;
    // }
    cout<<"Enter Your Grade :";
    cin>>grade;
    if (grade>5 && grade<57)
    {
        switch (grade){
            case 6 ... 15:
            cout<<"You are qualified to take this course";
            break;
            case 16 ... 30:
            cout<<"We can offer you with fee-paying";
            break;
            default:
            cout<<"Sorry!!, we can't help you. You can go for remidial class and apply next time.";
            break;
        }  
    }
    else{
        cout<<"We do not understand your input";
    }    
    return 0;
}