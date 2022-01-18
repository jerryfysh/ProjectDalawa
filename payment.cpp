// Programming Assignment 2 by Jeremiah Leonor

// Sales Tax Payment Calculator

#include <iostream>

using namespace std;

int main()

{

        string statename, month;
        double amount, day, year;
        double statetax, avgtax, levy;
        double payment;

        cout << "State Name: ";
        getline(cin, statename); // user input for state

        cout << "Purchase amount: ";
        cin >> amount;

        cin.clear();
        cin.ignore(1000, '\n'); // clear the keyboard buffer

        cout << "Provide the month: ";
        getline(cin, month);

        cout << "Provide the day: ";
        cin >> day;
        
        cout << "Provide the year: ";
        cin >> year;

        if (statename != "Alabama" && statename != "Alaska" && statename != "Arizona" && statename != "California" && statename != "Colorado" && statename != "Connectitcut" && statename != "Delaware" && statename != "Florida" && statename != "Georgia" && statename != "Hawaii" && statename != "Idaho" && statename != "Illinois" && statename != "Indiana" && statename != "Iowa" && statename != "Kansas" && statename != "Kentucky" && statename != "Louisiana" && statename != "Maine" && statename != "Maryland" && statename != "Massachusetts" && statename != "Michigan" && statename != "Minnesota" && statename != "Mississippi" && statename != "Missouri" && statename != "Montana" && statename != "Nebraska" && statename != "Nevada" && statename != "New Hampshire" && statename != "New Jersey" && statename != "New Mexico" && statename != "New York" && statename != "North Carolina" && statename != "North Dakota" && statename != "Ohio" && statename != "Oklahoma" && statename != "Oregon" && statename != "Pennsylvania" && statename != "Rhode Island" && statename != "South Carolina" && statename != "South Dakota" && statename != "Tennessee" && statename != "Texas" && statename != "Utah" && statename != "Vermont" && statename != "Virginia" && statename != "Washington" && statename != "West Virginia" && statename != "Wisconsin" && statename != "Wyoming")
        {

                cout << "Invalid state!" << endl;
                return 0;
        }

        if (amount <= 0)
        {

                cout << "Invalid amount!" << endl;
                return 0;
        }

        if (month != "January" && month != "February" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December")
        {

                cout << "Invalid month!" << endl;
                return 0;
        }

        if (day < 0 || day > 31)
        {

                cout << "Invalid day!" << endl;
                return 0;
        }

        if (year < 1 || year > 2021)
        {

                cout << "Invalid year!" << endl;
                return 0;
        }

        if (statename == "Alabama" && month == "July" && day >= 15 && day <= 17)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Alabama")
        {
                payment = amount * (1 + 0.04 + 0.0514 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Alaska")
        {
                payment = amount * (1 + 0.00 + 0.0143 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Arizona")
        {
                payment = amount * (1 + 0.0560 + 0.0277 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Arkansas" && month == "August" && day >= 6 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Arkansas")
        {
                payment = amount * (1 + 0.0650 + 0.0293 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "California")
        {
                payment = amount * (1 + 0.0725 + 0.0131 + 0.0100);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Colorado")
        {
                payment = amount * (1 + 0.0290 + 0.0473 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Connecticut" && month == "August" && day >= 21 && day <= 27)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Connecticut")
        {
                payment = amount * (1 + 0.0635 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Delaware")
        {
                payment = amount * (1 + 0.00 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Florida")
        {
                payment = amount * (1 + 0.0600 + 0.0105 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Georgia")
        {
                payment = amount * (1 + 0.0400 + 0.0329 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Hawaii")
        {
                payment = amount * (1 + 0.0400 + 0.0041 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Idaho")
        {
                payment = amount * (1 + 0.0600 + 0.0003 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Illinois")
        {
                payment = amount * (1 + 0.0625 + 0.0249 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Indiana")
        {
                payment = amount * (1 + 0.0700 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Iowa" && month == "August" && day >= 5 && day <= 6)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Indiana")
        {
                payment = amount * (1 + 0.0600 + 0.0082 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Kansas")
        {
                payment = amount * (1 + 0.0650 + 0.0217 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Kansas")
        {
                payment = amount * (1 + 0.0650 + 0.0217 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Kentucky")
        {
                payment = amount * (1 + 0.0600 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Louisiana")
        {
                payment = amount * (1 + 0.0445 + 0.0500 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Maine")
        {
                payment = amount * (1 + 0.0550 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Maryland" && month == "August" && day >= 14 && day <= 20)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Maryland")
        {
                payment = amount * (1 + 0.0600 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Massachusetts" && month == "August" && day >= 14 && day <= 20)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Massachusetts")
        {
                payment = amount * (1 + 0.0625 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Michigan")
        {
                payment = amount * (1 + 0.0600 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Minnesota")
        {
                payment = amount * (1 + 0.0688 + 0.0055 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Mississippi" && month == "July" && day >= 29 && day <= 30)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Mississippi")
        {
                payment = amount * (1 + 0.0700 + 0.0007 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Missouri" && month == "April" && day >= 19 && day <= 25)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Missouri")
        {
                payment = amount * (1 + 0.0423 + 0.0390 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Montana")
        {
                payment = amount * (1 + 0.00 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Nebraska")
        {
                payment = amount * (1 + 0.0550 + 0.0135 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Nevada" && month == "August" && day >= 5 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Nevada")
        {
                payment = amount * (1 + 0.0685 + 0.0129 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        if (statename == "New Hampshire")
        {
                payment = amount * (1 + 0.00 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "New Jersey")
        {
                payment = amount * (1 + 0.0663 + (-0.0003) + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "New Mexico")
        {
                payment = amount * (1 + 0.0513 + 0.0269 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "New York")
        {
                payment = amount * (1 + 0.0400 + 0.0449 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "North Carolina")
        {
                payment = amount * (1 + 0.0475 + 0.0222 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "North Dakota")
        {
                payment = amount * (1 + 0.0500 + 0.0185 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Ohio" && month == "August" && day >= 5 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Ohio")
        {
                payment = amount * (1 + 0.0575 + 0.0142 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Oklahoma" && month == "August" && day >= 6 && day <= 8)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Oklahoma")
        {
                payment = amount * (1 + 0.0450 + 0.0442 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Oregon")
        {
                payment = amount * (1 + 0.00 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Pennsylvania")
        {
                payment = amount * (1 + 0.0600 + 0.0034 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Rhode Island")
        {
                payment = amount * (1 + 0.0700 + 0.00 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "South Carolina" && month == "August" && day >= 5 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "South Carolina")
        {
                payment = amount * (1 + 0.0600 + 0.0143 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "South Dakota")
        {
                payment = amount * (1 + 0.0450 + 0.0190 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Tennessee" && month == "July" && day >= 29 && day <= 31)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Tennessee")
        {
                payment = amount * (1 + 0.0700 + 0.0247 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Texas" && month == "August" && day >= 5 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Texas")
        {
                payment = amount * (1 + 0.0625 + 0.0194 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Utah")
        {
                payment = amount * (1 + 0.0595 + 0.0099 + 0.0125);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Vermont")
        {
                payment = amount * (1 + 0.0600 + 0.0018 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Virginia")
        {
                payment = amount * (1 + 0.0530 + 0.0035 + 0.0100);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Washington")
        {
                payment = amount * (1 + 0.0650 + 0.0267 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "West Virginia" && month == "August" && day >= 5 && day <= 7)
        {
                payment = amount;
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "West Virginia")
        {
                payment = amount * (1 + 0.0600 + 0.0039 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Wisconsin")
        {
                payment = amount * (1 + 0.0500 + 0.0044 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        else if (statename == "Wyoming")
        {
                payment = amount * (1 + 0.0400 + 0.0136 + 0.00);
                cout << fixed;
                cout.precision(2);
                cout << "Please pay a total of $" << payment << endl;
        }

        return 0;
}