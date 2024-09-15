#include <bits/stdc++.h>
using namespace std;

class Snake_Game {
public:
    string name_of_player1 = "..";
    string name_of_player2 = "**";
    int position_of_player1 = 0;
    int position_of_player2 = 0;

    // Function for generating random Number
    void initialise_random() {
        srand(time(NULL));
    }

    int random_number() {
        return (rand() % 6 + 1);
    }

    // Stair Function
    int stair(int num) {
        if (num == 18) {
            return 45;
        }
        else if (num == 64) {
            return 98;
        }
        return num;
    }

    // Snake Function
    int snake(int num) {
        if (num == 99) {
            return 12;
        }
        else if (num == 54) {
            return 37;
        }
        return num;
    }

    // Printing the Board Function
    void print_board(int pos1, int pos2, string name_of_player1, string name_of_player2) {
        int arr[10][10];
        for (int i = 9; i >= 0; i--) {
            int val1;
            if (i % 2 == 0) {
                val1 = 9;
            }
            else {
                val1 = 0;
            }
            for (int j = 9; j >= 0; j--) {
                if (i % 2 == 0) {
                    arr[i][j] = (i + 1) * 10 - val1--;
                }
                else {
                    arr[i][j] = (i + 1) * 10 - val1++;
                }
            }
        }

        cout << "The Current Board is :: \n\n";
        for (int i = 9; i >= 0; i--) {
            for (int j = 9; j >= 0; j--) {
                if (arr[i][j] == 18) {
                    cout << "M45" << "  ";
                    continue;
                }
                else if (arr[i][j] == 64) {
                    cout << "M98" << "  ";
                    continue;
                }
                if (arr[i][j] == 99) {
                    cout << "S12" << "  ";
                    continue;
                }
                else if (arr[i][j] == 54) {
                    cout << "S37" << "  ";
                    continue;
                }
                if (arr[i][j] == pos1 && arr[i][j] == pos2) {
                    cout << name_of_player1 << ' ' << name_of_player2;
                }
                else if (arr[i][j] == pos1) {
                    cout << name_of_player1 << "   ";
                }
                else if (arr[i][j] == pos2) {
                    cout << name_of_player2 << "   ";
                }
                else {
                    if (arr[i][j] < 10) {
                        cout << " ";
                    }
                    if (arr[i][j] == 100) {
                        cout << "WIN ";
                        continue;
                    }
                    cout << arr[i][j] << "   ";
                }
            }
            cout << "\n\n";
        }
    }
};

int main() {
    cout << "Mxy means there is a Stair at some number which will lead the player up to xy\n";
    cout << "Sxy means there is a Snake at some number which will lead the player down to xy\n";

    // Object of Snake_Game
    Snake_Game Snake;
    string name_of_player1, name_of_player2;
    cout << "Enter 2 Character Name for Player 1: ";
    cin >> name_of_player1;
    cout << "Enter 2 Character Name for Player 2: ";
    cin >> name_of_player2;

    // Assigning the Value of Name of both players
    Snake.name_of_player1 = name_of_player1;
    Snake.name_of_player2 = name_of_player2;
    cout << '\n';

    Snake.initialise_random();
    Snake.print_board(Snake.position_of_player1, Snake.position_of_player2, Snake.name_of_player1, Snake.name_of_player2);

    bool player1Turn = true; // Boolean to alternate turns

    while (Snake.position_of_player1 != 100 && Snake.position_of_player2 != 100) {
        if (player1Turn) {
            cout << "Turn for Player 1 : " << name_of_player1 << ":: ";
        } else {
            cout << "Turn for Player 2 : " << name_of_player2 << ":: ";
        }

        cin.get(); // Capture Enter key

        int dice_rotated_value = Snake.random_number();
        cout << dice_rotated_value << " occurs!" << '\n';

        if (player1Turn) {
            if (Snake.position_of_player1 + dice_rotated_value <= 100) {
                Snake.position_of_player1 += dice_rotated_value;
                Snake.position_of_player1 = Snake.stair(Snake.position_of_player1);
                Snake.position_of_player1 = Snake.snake(Snake.position_of_player1);

                Snake.print_board(Snake.position_of_player1, Snake.position_of_player2, Snake.name_of_player1, Snake.name_of_player2);

                if (Snake.position_of_player1 == 100) {
                    cout << "Player 1 Wins !" << endl;
                    return 0;
                }

                while (dice_rotated_value == 6) {
                    cout << "Chance of Player1 :: " << name_of_player1 << " Once Again ! ";
                    cin.get(); // Capture Enter key

                    dice_rotated_value = Snake.random_number();
                    cout << dice_rotated_value << " occurs!" << '\n';
                    Snake.position_of_player1 += dice_rotated_value;
                    Snake.position_of_player1 = Snake.stair(Snake.position_of_player1);
                    Snake.position_of_player1 = Snake.snake(Snake.position_of_player1);

                    Snake.print_board(Snake.position_of_player1, Snake.position_of_player2, Snake.name_of_player1, Snake.name_of_player2);

                    if (Snake.position_of_player1 == 100) {
                        cout << "Player 1 Wins !" << endl;
                        return 0;
                    }
                }
            }
        } else {
            if (Snake.position_of_player2 + dice_rotated_value <= 100) {
                Snake.position_of_player2 += dice_rotated_value;
                Snake.position_of_player2 = Snake.stair(Snake.position_of_player2);
                Snake.position_of_player2 = Snake.snake(Snake.position_of_player2);

                Snake.print_board(Snake.position_of_player1, Snake.position_of_player2, Snake.name_of_player1, Snake.name_of_player2);

                if (Snake.position_of_player2 == 100) {
                    cout << "Player 2 Wins !" << endl;
                    return 0;
                }

                while (dice_rotated_value == 6) {
                    cout << "Chance of Player2 :: " << name_of_player2 << " Once Again ! ";
                    cin.get(); // Capture Enter key

                    dice_rotated_value = Snake.random_number();
                    cout << dice_rotated_value << " occurs!" << '\n';
                    Snake.position_of_player2 += dice_rotated_value;
                    Snake.position_of_player2 = Snake.stair(Snake.position_of_player2);
                    Snake.position_of_player2 = Snake.snake(Snake.position_of_player2);

                    Snake.print_board(Snake.position_of_player1, Snake.position_of_player2, Snake.name_of_player1, Snake.name_of_player2);

                    if (Snake.position_of_player2 == 100) {
                        cout << "Player 2 Wins !" << endl;
                        return 0;
                    }
                }
            }
        }

        // Alternate turns
        player1Turn = !player1Turn;
    }

    return 0;
}
