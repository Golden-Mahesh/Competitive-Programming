// 10. Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of
// matches varies for each player. Write a parameterized constructor which initializes
// player no., name, number of subjects and creates an array for number of goals and
// number of matches dynamically.
#include<iostream>
#include<cstring>
using namespace std;
class player{
    private:
    int player_no;
    char player_name[20];
    int number_of_matches;
    int *number_of_goals;
    public:
    player(int player_no,char name[],int number_of_matches){
        this->player_no=player_no;
        strcpy(this->player_name,name);
        this->number_of_matches=number_of_matches;
        number_of_goals=new int[number_of_matches];
        int i;
        for(i=0;i<number_of_matches-1;i++){
            cout<<"Enter number of goals "<<i+1<<" : ";
            cin>>number_of_goals[i];
        }
         }
               void display()
        {
                int i;
                cout<<"\n --------------------------------";
                cout<<"\n Player No. : "<<player_no;
                cout<<"\n Player Name : "<<player_name;
                cout<<"\n No. of Matches Played : "<<number_of_matches;
                for(i=0; i<number_of_matches - 1; i++)
                {
                        cout<<"\n Match "<<i+1<<" Goals : "<<number_of_goals[i];
                }
        }
};
int main(){
    player p1(1,(char*)"Dhoni",2);
    p1.display();
}
