#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand(time(nullptr));
    int randomNumber = rand() % 100 + 1;
    cout << "Enter guess limit: ";
    int lim;
    cin >> lim;
    while (1)
     {
        cout << "Enter your guess: ";
        int no;
        cin >> no;
        if (no < randomNumber) 
        {
            cout << "Your no is smaller than randomNumberber,retry\n";
            continue;
        } 
        else if (no > randomNumber) 
        {
            cout << "Your no is larger than randomNumberber, retry\n";
            continue;
        } 
        else 
        {
            cout << "You have guessed correctly!\n";
            break;
        }
    }
    return 0;
 
}