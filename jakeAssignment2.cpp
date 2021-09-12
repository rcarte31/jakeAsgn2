// Jake Carter
// NE697, Geant4
// Assignment 2, 210911

#include <iostream>                                         // Include basic i/o.
#include <math.h>                                           // Include pow() function.
#include <cstdlib>                                          // Include atof() function.

using namespace std;                                        // Use shortcut for std::.

int main(int argc, char* argv[])                            // Variable argc contains # of arguments.
{                                                           // Variable argv contains argument vectors.

    //Print out your command line args.

        cout << "Your command " << argc << " line args are: ";
        for(int i = 0; i < argc; i++)                       // Assign i, then increment.
        {
            cout << argv[i] << " ";                         // Echo the arguments.
        }
        cout << endl;                                       // Flush output buffer.

    
    char* arg1 = argv[1];                                   // Save the first argument. Note, argv[0]
    double myNum;                                           // is the invoked program command.

    cout << "ARG 1 is " << arg1 << endl;

    myNum = atof(arg1);                                     // Convert chacter arg1 to double. Note, 
    cout << "ARG 1 as a double is " << myNum << endl;       // non numerics return 0.0.

    myNum = pow(2, myNum);

    cout << "Taking 2 to the Nth power = " << myNum << endl;

}
