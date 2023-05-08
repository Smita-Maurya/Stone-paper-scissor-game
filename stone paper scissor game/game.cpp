#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
    string player_name;
    cout<<"enter your name(player_name)"<<endl;
    cin>>player_name;
    int player_score=0;
    int computer_score=0;
    int rounds;
    cout<<"enter number of rounds you want to play"<<endl;
    cin>>rounds;
    for(int i=1; i<=rounds; i++){
        int player_choice , computer_choice;
        cout<<"round no."<<i<<"/"<<rounds<<endl;
        cout<<player_name<<" "<<"score="<<player_score<<endl;
        cout<<"computer score="<<computer_score<<endl;
        cout<<"1.Rock"<<endl;
        cout<<"2.Paper"<<endl;
        cout<<"3.scissor"<<endl;
        do{
        cout<<player_name<<" "<<"enter your choice"<<endl;
        cin>>player_choice;
        }while(player_choice!=1 && player_choice!=2 && player_choice!=3);
        srand(time(0));
        computer_choice=(rand()%3)+1;
        if(player_choice==1 && computer_choice==3){
            cout<<player_name<<" "<<"wins the match"<<endl;
            player_score++;
        }
        else if(player_choice==2 && computer_choice==1){
            cout<<player_name<<" "<<"wins the match"<<endl;
            player_score++;
        }
        else if(player_choice==3 && computer_choice==2){
           cout<<player_name<<" "<<"wins the match"<<endl;
            player_score++; 
        }
        else if(player_choice==computer_choice){
            cout<<"Draw"<<endl;
        }
        else{
            cout<<"computer wins the match"<<endl;
            computer_score++;
        }

    }
    cout<<"Final Score"<<endl;
    cout<<player_name<<" "<<"Final score="<<player_score<<endl;
    cout<<"computer final score="<<computer_score<<endl;
    if(computer_score==player_score){
        cout<<"Game is draw"<<endl;
    }
    else if(computer_score<player_score){
        cout<<"player won the game"<<endl;
    }
    else{
        cout<<"computer won the game"<<endl;
    }
   return 0;


}