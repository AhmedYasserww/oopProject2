
#include <iostream>
#include <string.h>
#include "ContactBook.h"

using namespace std;
int main()
{
    int ch = -1;
    ContactBook cB(100); //100 users

    while (ch != 0)
    {
        cout << "\t\t\t\t------------------------------------------------" << endl;
        cout << "\t\t\t\t\t      Contact book  manager" << endl;
        cout << "\t\t\t\t\t------------------------------------" << endl;
        cout << "########### MAIN  MENU ################ " << endl;
        cout << "1. Add A NEW CONTACT " << endl;
        cout << "2. DELETE THE CONTACT " << endl;
        cout << "3. SEARCH  " << endl;
        cout << "4. EDIT THE CONTACT " << endl;
        cout << "5. DISPLAY All CONTACTS " << endl;
        cout << "0. EXIT\n";
        cout << "Enter  Choice  " ;
        cin >> ch;
        cout << "***************************************\n"; 
      

   
        switch (ch)
        {
        case 1:
            cB.addUser();
            break;
        case 2:
            cB.deleteUser();
            break;
        case 3:
            cB.searchUser();
            break;
        case 4:
            cB.editUser();
            break;
        case 5:
            cB.printAll();
            break;
        case 0:
            break;

        }
    } 
    cout << "THANKS!" << endl;


    return 0;
}
