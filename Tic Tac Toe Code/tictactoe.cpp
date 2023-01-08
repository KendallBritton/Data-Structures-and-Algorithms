#include <iostream>
#include <unistd.h>
using namespace std;
const string vt_clear = "\033[2J";
const string vt_home = "\033[H";

void xo_row(char row[]) {
    cout << " " << row[0] << " | " << row[1] << " | " << row[2] << endl;
}

void horz(){
    cout << "---+---+---" << endl;
}

void display(char board[3][3]){
    cout << vt_clear << vt_home;
    xo_row(board[0]);
    horz();
    xo_row(board[1]);
    horz();
    xo_row(board[2]);
}

void init( char board[3][3]){
    int r,c;

    for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        board[r][c] = ' ';
    }
}
}

int main(){
char board[3][3];
init(board);

display(board);
sleep(4);
board[1][1] = 'X';
display(board);
sleep(4);
board[0][0] = 'O';
display(board);
sleep(4);
board[0][1] = 'X';
display(board);
sleep(4);
board[1][0] = 'O';
display(board); 
sleep(4);
board[2][1] = 'X';
display(board);
cout << "Game Over!" << endl;

    return 0;
}