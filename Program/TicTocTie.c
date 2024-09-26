#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

int board[10] = {0,0,0,0,0,0,0,0,0,0};
int turn = 1;
int playerScore = 0, compScore = 0;
int player, comp;
int roundNumber = 1;

void menu();
void go(int n, int currentPlayer);
void start_game();
int check_win();
void draw_board();
void player_first();
void computer_move();
int minimax(int depth, int isMaximizing, int maxDepth);
void put_X_O(char ch, int pos);
void gotoxy(int x, int y);
void reset_board();

COORD coord = {0, 0}; // Center of axis is set to the top left corner of the screen

void gotoxy(int x, int y) {
    coord.X = (SHORT)x;
    coord.Y = (SHORT)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    system("cls");
    menu();
    getch(); // Use getch() to wait for a keypress before exiting
    return 0;
}

void menu() {
    int choice;
    system("cls");
    printf("\n--------MENU--------");
    printf("\n1 : Play against Friend");
    printf("\n2 : Play against Computer");
    printf("\n3 : Exit");
    printf("\nEnter your choice:>");
    scanf("%d", &choice);
    turn = 1;
    switch (choice) {
        case 1:
            player = 1;
            comp = 2;
            start_game();
            break;
        case 2:
            player = 1;
            comp = 1;
            start_game();
            break;
        case 3:
            exit(1);
        default:
            menu();
    }
}

int check_win() {
    for (int i = 1; i <= 7; i += 3) {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2] && board[i] != 0)
            return board[i];
    }
    for (int i = 1; i <= 3; i++) {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6] && board[i] != 0)
            return board[i];
    }
    if (board[1] == board[5] && board[5] == board[9] && board[1] != 0)
        return board[1];
    if (board[3] == board[5] && board[5] == board[7] && board[3] != 0)
        return board[3];
    return 0;
}

void go(int n, int currentPlayer) {
    board[n] = currentPlayer;
    turn++;
}

void start_game() {
    while (1) {
        player_first();
        draw_board();
        printf("\nScore: Player1: %d  %s: %d", playerScore, comp == 1 ? "Computer" : "Player2", compScore);
    }
}

void player_first() {
    int pos;
    draw_board();
    printf("\nRound Number: %d", roundNumber);
    printf("\nPlayer 1 Score: %d", playerScore);
    if (comp == 1) {
        printf("\nComputer Score: %d", compScore);
    } else {
        printf("\nPlayer 2 Score: %d", compScore);
    }

    gotoxy(30, 18);
    printf("Player %d's Turn:> ", turn % 2 == 1 ? 1 : 2);
    scanf("%d", &pos);

    if (board[pos] != 0 || pos < 1 || pos > 9) {
        player_first();
        return;
    }

    go(pos, turn % 2 == 1 ? 1 : 2);
    draw_board();

    int winner = check_win();
    if (winner) {
        if (winner == 1) {
            playerScore++;
            printf("\nPlayer 1 Wins! Score: %d", playerScore);
        } else if (winner == 2) {
            compScore++;
            printf("\n%s Wins! Score: %d", comp == 1 ? "Computer" : "Player 2", compScore);
        }
        gotoxy(30, 20);
        getch();
        reset_board();
        roundNumber++;
        return;
    }
    if (turn > 9) {
        gotoxy(30, 20);
        printf("Game Draw");
        getch();
        reset_board();
        roundNumber++;
        return;
    }

    if (comp == 1 && turn % 2 == 0) {
        computer_move();
    }
}

void computer_move() {
    int bestScore = -1000;
    int bestMove = -1;
    int maxDepth = roundNumber; // Increase depth as rounds progress

    for (int i = 1; i <= 9; i++) {
        if (board[i] == 0) {
            board[i] = 2;
            int score = minimax(0, 0, maxDepth);
            board[i] = 0;
            if (score > bestScore) {
                bestScore = score;
                bestMove = i;
            }
        }
    }

    go(bestMove, 2);
    draw_board();
    int winner = check_win();
    if (winner) {
        compScore++;
        gotoxy(30, 20);
        printf("Computer Wins");
        getch();
        reset_board();
        roundNumber++;
        return;
    }
    if (turn > 9) {
        gotoxy(30, 20);
        printf("Game Draw");
        getch();
        reset_board();
        roundNumber++;
        return;
    }
}

int minimax(int depth, int isMaximizing, int maxDepth) {
    int score = check_win();
    if (score == 2) {
        return 10 - depth;
    } else if (score == 1) {
        return depth - 10;
    } else if (turn == 10 || depth >= maxDepth) {
        return 0;
    }

    if (isMaximizing) {
        int bestScore = -1000;
        for (int i = 1; i <= 9; i++) {
            if (board[i] == 0) {
                board[i] = 2;
                bestScore = (int)fmax(bestScore, minimax(depth + 1, 0, maxDepth));
                board[i] = 0;
            }
        }
        return bestScore;
    } else {
        int bestScore = 1000;
        for (int i = 1; i <= 9; i++) {
            if (board[i] == 0) {
                board[i] = 1;
                bestScore = (int)fmin(bestScore, minimax(depth + 1, 1, maxDepth));
                board[i] = 0;
            }
        }
        return bestScore;
    }
}

void draw_board() {
    int j;

    system("cls");

    for (j = 9; j < 17; j++) {
        gotoxy(35, j);
        printf("|       |");
    }
    gotoxy(28, 11);
    printf("-----------------------");
    gotoxy(28, 14);
    printf("-----------------------");

    for (j = 1; j < 10; j++) {
        if (board[j] == 1)
            put_X_O('X', j);
        else if (board[j] == 2)
            put_X_O('O', j);
    }
}

void put_X_O(char ch, int pos) {
    int m;
    int x = 31, y = 10;

    m = pos;

    if (m > 3) {
        while (m > 3) {
            y += 3;
            m -= 3;
        }
    }
    if (pos % 3 == 0)
        x += 16;
    else {
        pos %= 3;
        pos--;
        while (pos) {
            x += 8;
            pos--;
        }
    }
    gotoxy(x, y);
    printf("%c", ch);
}

void reset_board() {
    for (int i = 1; i < 10; i++)
        board[i] = 0;
    turn = 1;
}
