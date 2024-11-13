#include<iostream>
using namespace std;
void chessboard(char play[3][3])
{
 cout<<"-------------\n";
  for (int i=0;i<3;i++)
  {
    cout<<"| ";
    for(int j=0;j<3;j++)
    {
       cout<< play[i][j]<<" | ";
    }
    cout<<"\n-------------\n";
  }
}

bool chess(char play[3][3],char player)
{
    for(int i=0;i<3;i++)
    {
        if(play[i][0]==player && play[i][1]==player && play[i][2]==player)
         return true;
        if(play[0][i]==player && play[1][i]==player && play[2][i]==player)
         return true;
    }
    if(play[0][0]==player && play[1][1]==player && play[2][2]==player)
         return true;
    if(play[0][2]==player && play[1][1]==player && play[2][0]==player)
         return true;
    return false;
}
int main()
{
    char play[3][3] = {{ ' ',' ',' '},
                       { ' ',' ',' '},
                       { ' ',' ',' '}};
char player = 'X';
int row,column;
int turn;
cout<<"Welcome to the world of Tic-Tac-Toe!!!\n";
for (turn=0;turn<9;turn++)
{
    chessboard(play);
    while(true){
        cout<<"Player "<<player<<" Enter the row and column to place "<<player;
        cin>> row>> column;
        if(play[row][column]!=' ' ||row<0 || row>2 || column<0 || column>2)
        {
            cout<<"Invalid move!!!!";
        }   
        else{
            break;
        }
    }
    play[row][column]=player;
    if(chess(play,player)){
        chessboard(play);
        cout<<"Player "<<player<<" wins\n";
        break;
    }
    player=(player =='X') ? '0' : 'X';
}
    chessboard(play);
    if(turn==9 && !chess(play,'X') &&  !chess(play,'0'))
    {
        cout<<"It's a draw!!";
    }
    return 0;             
}