#include <bits/stdc++.h>
using namespace std;

int Snake_Water_Gun(char you, char computer)
{

    // This function returns 1 if you win ,-1 if you lose and 0 if it ends in draw

    // If you and the computer have chosen the same character which eventually ends in a draw
    if (you == computer)
    {
        return 0;
    }

    // If you have chosen snake and the computer have chosen the gun and vice versa
    if (you == 's' and computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' and computer == 's')
    {
        return 1;
    }

    // If you have chosen water and the computer have chosen the snake and vice versa
    if (you == 'w' and computer == 's')
    {
        return -1;
    }
    else if (you == 's' and computer == 'w')
    {
        return 1;
    }

    // If you have chosen gun and the computer have chosen the water and vice versa
    if (you == 'g' and computer == 'w')
    {
        return -1;
    }
    else if (you == 'w' and computer == 'g')
    {
        return 1;
    }
}

int main()
{
    char you;
    char computer;
    srand(time(0));

    int number = rand() % 100 + 1;

    if (number < 33)
    {
        computer = 's';
    }
    else if (number >= 33 and number < 66)
    {
        computer = 'g';
    }
    else
    {
        computer = 'w';
    }

    cout << "Enter 's' for snake ,'w' for water and 'g' for gun " << endl;
    cin >> you;

    int result = Snake_Water_Gun(you, computer);


     if (result == 0)
    {
        cout<<"Game Draw !!"<<endl;
    }

    if (result == 1)
    {
        cout<<"Congratulations , You Won 😀😀!!"<<endl;
    }
   
    if (result == -1)
    {
        cout<<"OOPS You lose 🥹🥹!!"<<endl;
    }

    cout << "You chose " << you << " and computer chose " << computer<<endl;
    return 0;
}