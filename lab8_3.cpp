/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,height;
    long long bounty;
    string cha;
    cout << "Enter your age: ";
    cin >> age;
    
   
    

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height<100){
            cha = "Chopper";
        }else if (height<180){
            cha = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty>=1111000000){
                cha = "Zoro";
            }else{
                cha = "Sanji";
            }
        }
    }else if(age <=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty>500000000){
            cha = "Jinbe";
        }else{
            cha = "Franky";
        }
    }else{
        cha = "Brook";
    }

    cout << "Your character = "<< cha;

 }