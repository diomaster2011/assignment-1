#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float amt; //gives the integer for defining all off the variables in the program.
    float cont;
    float min;
    float max;
    float ave;
    
    
    cont = 0;
    
    cout << "Enter an integer between 1 and 100 (-1 to terminate):";
    cin >> cont; // The Prompt for the users to pick a number
    
    min = cont;
    max = cont;
    
    while(cont >= 0) //while and if then statements to help the prompts come up
    {
        min += cont;
        cont++;
        
        if(cont > max)
             max = cont;
        else if(cont < min)
             min=cont;
             
        cout << "Enter an integer between 1 and 100 (-1 to terminate):";
        cin >> cont; // Allows the program to run if keep putting in numbers also adds to the count
    }
    if(cont == -1)
       cout << "Enter a number you imbicile!" << endl;
    else //ends the program, gives a heartwarming message as you quit
       {
          ave = max/cont;
          cout<< setw(1) << "COUNT:" << setw(1)
          << cont << endl;
          cout<< setw(1) << "MIN:" << setw(1)
          << min << endl;
          cout<< setw(1) << "MAX:" << setw(1)
          << max << endl;
          cout<< setw(1) << "AVERAGE:" << setw(1)
          << ave << endl; //using setw puts the numbers in the correct way
          
       }
}

//used the book