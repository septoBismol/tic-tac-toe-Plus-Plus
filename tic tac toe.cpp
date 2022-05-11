#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;



int main() {
    cout << "Tic tac toe! Your row and column are set to numbers 1 to 3.\n";
    cout << "Enter your row first and then your column. Rows = 1, 2, 3 Columns = 1, 2, 3" << endl;
    system("pause");
    system("CLS");

    // oh fucking boy here we go
    
    bool gameEnd = false;
    string winner = "nil";
    int turn = 0;
    bool p1Cheat = false;
    //0 = player
    //1 = second player

    char TransP[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'},
    };

    while (gameEnd == false) {
        int x;
        int y;
        cout << "\n\n";
        cout << TransP[0][0] << "|" << TransP[0][1] << "|" << TransP[0][2] << "  \n";
        cout << TransP[1][0] << "|" << TransP[1][1] << "|" << TransP[1][2] << "  \n";
        cout << TransP[2][0] << "|" << TransP[2][1] << "|" << TransP[2][2] << "  \n \n";

        
        if (turn == 0) {
            cout << "Player 1's turn. Give row number.\n";
        }
        else {
            cout << "Player 2's turn. Give row number.\n";
        }
        cin >> x;
        cout << "Give column number.\n";
        cin >> y;

        
        if (x > 3 || y > 3 || x < 1 || y < 1) {
            cout << "Error: Placement illegal. Try again.\n";
            if (turn == 0) {
                p1Cheat = true;
            }
            turn = -1;
        } else if (turn == 0 && TransP[x-1][y - 1] == '_') {
            TransP[x-1][y - 1] = 'X';
            turn = 1;
        } else if (turn == 1 && TransP[x - 1][y - 1] == '_'){
            TransP[x - 1][y - 1] = 'O';
            turn = 0;
        }  else {
            cout << "Error: Column and row is already filled. Try again.\n";
            if (turn == 0) {
                p1Cheat = true;
            }
            turn = -1;
            
            
        }
        if (turn == -1) {
            if (p1Cheat == true) {
                turn = 0;
                p1Cheat = false;
            }
            else {
                turn = 1;
            }
        }
        
        // THE RECKOGNING IS HERE ITS HAPPENING
        //always remember the value of an array is itself minus 1


        ///////// HORIZONTAL OUTCOME;X
        if (TransP[0][0] == 'X' && TransP[0][1] == 'X' && TransP[0][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }

        if (TransP[1][0] == 'X' && TransP[1][1] == 'X' && TransP[1][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        
        if (TransP[2][0] == 'X' && TransP[2][1] == 'X' && TransP[2][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        ///////// VERTICAL OUTCOME;X
        if (TransP[0][0] == 'X' && TransP[1][0] == 'X' && TransP[2][0] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][1] == 'X' && TransP[1][1] == 'X' && TransP[2][1] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][2] == 'X' && TransP[1][2] == 'X' && TransP[2][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        ////////  DIAGONAL OUTCOMES;X
        if (TransP[0][0] == 'X' && TransP[1][1] == 'X' && TransP[2][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[2][0] == 'X' && TransP[1][1] == 'X' && TransP[2][2] == 'X') {
            winner = "Player 1";
            gameEnd = true;
            system("CLS");
        }


        /////// HORIZONTAL OUTCOMES;Y
        if (TransP[0][0] == 'O' && TransP[0][1] == 'O' && TransP[0][2] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[1][0] == 'O' && TransP[1][1] == 'O' && TransP[1][2] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[2][0] == 'O' && TransP[2][1] == 'O' && TransP[2][2] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        /////// VERTICAL OUTCOMES;Y
        if (TransP[0][0] == 'O' && TransP[1][0] == 'O' && TransP[2][0] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][0] == 'O' && TransP[1][0] == 'O' && TransP[2][0] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][1] == 'O' && TransP[1][1] == 'O' && TransP[2][1] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][2] == 'O' && TransP[1][2] == 'O' && TransP[2][2] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        //////// DIAGONAL OUTCOMES;Y
        if (TransP[0][0] == 'O' && TransP[1][1] == 'O' && TransP[2][2] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }
        if (TransP[0][2] == 'O' && TransP[1][1] == 'O' && TransP[2][0] == 'O') {
            winner = "Player 2";
            gameEnd = true;
            system("CLS");
        }



        if (gameEnd == true) {
            cout << TransP[0][0] << "|" << TransP[0][1] << "|" << TransP[0][2] << "  \n";
            cout << TransP[1][0] << "|" << TransP[1][1] << "|" << TransP[1][2] << "  \n";
            cout << TransP[2][0] << "|" << TransP[2][1] << "|" << TransP[2][2] << "  \n \n";
            cout << "Game over! The winner is " << winner << "!\n";
            system("pause");
            
        }


    }
}