#include <iostream>
using namespace std;

int main(){

int age,tall,head;

    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){

    cout << "Enter your height: ";
    cin >> tall;

        if(tall < 100)
        cout << "Your character = Chopper";
        else if(tall < 180)
        cout << "Your character = Usopp";
        else{
            cout << "Enter your bounty: ";
            cin >> head;
            if(head > 1.1e9)
            cout << "Your character = Zoro";
            else
            cout << "Your character = Sanji";
        }
    }
    else if(age <= 60){

    cout << "Enter your bounty: ";
    cin >> head;

        if(head > 5e8)
        cout << "Your character = Jinbe";
        else
        cout << "Your character = Franky";
    }
    else
    cout << "Your character = Brook";
return 0;
}