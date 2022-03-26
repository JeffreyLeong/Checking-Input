// Program to demostrate the functions new_line and get_input.
#include <iostream>

void new_line();
// Discards all the input remaining ont he current input line. Also discards the '\n at the end of the line. This version works only for input from the keyboard.

void get_int(int& number);
// Postcondition: The variable has been give a vlaue that the user approves of.

int main()
{
    using namespace std;
    int n;

    get_int(n);
    cout << "Final value read in = "<< n << endl
         << "End of demostration.\n";
    return 0;
}

void new_line()
{
    using namespace std;
    char symbol;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
    
}

void get_int(int& number)
{
    using namespace std;
    char ans;
    do
    {
        cout << "Enter input number: ";
        cin >> number;
        cout << "You entered " << number << ". Is that correct? (yes/no): ";
        cin >> ans;
        new_line();
    } while ((ans != 'Y') && (ans != 'y'));
    
}