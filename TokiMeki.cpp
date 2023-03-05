//
//  Lab5-4-WilliamAdolph.cpp
//  CS1
//
//  Created by William Adolph on 2/22/23.
//
// Description: add numbers after being given ammount of numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
struct date{
    int dayOfWeek;
    string month;
    int year;
};
int main(){
    //variables
    date Players_Date = {18,"April",2021};
    Players_Date.month="July" ;
    cout<< Players_Date.month;
    double playerLV{1};
    double playerEnergy{100};
    double playerIntellegence{};
    double playerFitness{};
    double playerCharisma{};
    double playerGuts{};
    double playerMoney{0};
    double playerReputation{0};
    
    string playerName{};
    
    //Welcome screen
    cout<<endl<< "Welcome to MY College Expiriance!"<<endl;
    cout<<endl<< "What is your name? "<<endl;
    getline(cin,playerName);
    cout <<endl<<playerName<<", what was your favorite thing in highschool?"<<endl;
    cout<<"1) Soccer\n";
    cout<<"2) Drama Club\n";
    cout<<"3) The Libary\n ";
    cout<<"4) Videogames";
    int dec1;
    cin >> dec1;
    switch (dec1){
        case 1:
            playerFitness=50;
            break;
        case 2:
            playerCharisma=50;
            break;
        case 3:
            playerIntellegence=60;
            break;
        case 4:
            playerCharisma=-10;
            
        default :cout<<"error";
    }
    cout<<endl<<"What is somthing you did in highschool you were proud of\n";
    cout<<endl<<endl;
    cout<<"1) I won graduated with a 4.0"<<endl;
    cout<<"2) I was won prom king"<<endl;
    cout<<"3) I stood up to my bully"<<endl;
    if (dec1==4){
        cout << "3) I learned some programing";
    }
    else
        cout << "3) I learned guitar";
    //test 
    
    
    
    
    
}


