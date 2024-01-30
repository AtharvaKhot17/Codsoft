#include <iostream>
using namespace std;
int main() 
{
    while (true) 
    {
        float op1, op2, result;
        int choice;
        cout << "Enter 1st operand: ";
        cin >> op1;
        cout << "Enter 2nd operand: ";
        cin >> op2;
        cout << "Choices:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter your choice (1-5): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                result = op1 + op2;
                break;
            case 2:
                result = op1 - op2;
                break;
            case 3:
                result = op1 * op2;
                break;
            case 4:
                if (op2 != 0) {
                    result = op1 / op2;
                } else {
                    cout << "Error: Division by zero\n";
                    continue; 
                }
                break;
            case 5:
                cout << "Exiting calculator. Goodbye!\n";
                return 0; 
            default:
                cout << "Invalid input. Please choose a number from 1 to 5.\n";
                continue; 
        }

        cout << "Result: " << result << endl;
    }
    return 0;
}
