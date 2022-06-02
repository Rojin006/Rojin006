#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    const float BASIC_RESIDENTIAL   =   18.50;
    const float BASIC_BUSINESS      =   75.00;
    const float CONNECT_RESIDENTIAL =   6.50;
    const float CONNECT_BUSINESS    =   5.00;
    const float PREMIUM_RESIDENTIAL =   7.50;
    const float PREMIUM_BUSINESS    =   50.00;


    char    customerType;
    int     numOfConnections;
    int     numOfPremiumChannels;
    float   amountCableBill;

    cout << fixed << setprecision(2);
    cout << "Residential or Business [R or B]?   ";
    cin  >> customerType;
    cout << endl << endl;
    cout << "How many Additional Connections?    ";
    cin  >> numOfConnections;
    cout << endl << endl;
    cout << "Total number of Premium Channels:   ";
    cin  >> numOfPremiumChannels;
    cout << endl << endl;


    if (customerType == 'R' || customerType == 'r')
    {
        amountCableBill = BASIC_RESIDENTIAL + CONNECT_RESIDENTIAL * numOfConnections +       PREMIUM_RESIDENTIAL * numOfPremiumChannels;
    }
    //else customerType == 'B' || customerType == 'b';   // unnecessary
    {
        if (numOfConnections <= 9)

            amountCableBill = BASIC_BUSINESS + PREMIUM_BUSINESS * numOfPremiumChannels;

        else
            amountCableBill =  BASIC_BUSINESS + (numOfConnections - 9) * CONNECT_BUSINESS + PREMIUM_BUSINESS *numOfPremiumChannels;
    }

    cout << "Total amount of Cable Bill:  "  << amountCableBill << endl << endl;
    cout << "Press <ENTER> to end..." << endl;



    _getch();

    return 0;
}
#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    const float BASIC_RESIDENTIAL   =   18.50;
    const float BASIC_BUSINESS      =   75.00;
    const float CONNECT_RESIDENTIAL =   6.50;
    const float CONNECT_BUSINESS    =   5.00;
    const float PREMIUM_RESIDENTIAL =   7.50;
    const float PREMIUM_BUSINESS    =   50.00;


    char    customerType;
    int     numOfConnections;
    int     numOfPremiumChannels;
    float   amountCableBill;

    cout << fixed << setprecision(2);
    cout << "Residential or Business [R or B]?   ";
    cin  >> customerType;
    cout << endl << endl;
    cout << "How many Additional Connections?    ";
    cin  >> numOfConnections;
    cout << endl << endl;
    cout << "Total number of Premium Channels:   ";
    cin  >> numOfPremiumChannels;
    cout << endl << endl;


    if (customerType == 'R' || customerType == 'r')
    {
        amountCableBill = BASIC_RESIDENTIAL + CONNECT_RESIDENTIAL * numOfConnections +       PREMIUM_RESIDENTIAL * numOfPremiumChannels;
    }
    //else customerType == 'B' || customerType == 'b';   // unnecessary
    {
        if (numOfConnections <= 9)

            amountCableBill = BASIC_BUSINESS + PREMIUM_BUSINESS * numOfPremiumChannels;

        else
            amountCableBill =  BASIC_BUSINESS + (numOfConnections - 9) * CONNECT_BUSINESS + PREMIUM_BUSINESS *numOfPremiumChannels;
    }

    cout << "Total amount of Cable Bill:  "  << amountCableBill << endl << endl;
    cout << "Press <ENTER> to end..." << endl;



    _getch();

    return 0;
}
c++
visual-c++
if-statement
visual-studio-2010
Share
Follow
edited Mar 11, 2014 at 4:40
user avatar
WhozCraig
63.4k1010 gold badges7171 silver badges132132 bronze badges
asked Mar 11, 2014 at 4:36
user avatar
user3404486
1
1
That else is necessary. – 
screwnut
 Mar 11, 2014 at 4:40
Add a comment
2 A#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    const float BASIC_RESIDENTIAL   =   18.50;
    const float BASIC_BUSINESS      =   75.00;
    const float CONNECT_RESIDENTIAL =   6.50;
    const float CONNECT_BUSINESS    =   5.00;
    const float PREMIUM_RESIDENTIAL =   7.50;
    const float PREMIUM_BUSINESS    =   50.00;


    char    customerType;
    int     numOfConnections;
    int     numOfPremiumChannels;
    float   amountCableBill;

    cout << fixed << setprecision(2);
    cout << "Residential or Business [R or B]?   ";
    cin  >> customerType;
    cout << endl << endl;
    cout << "How many Additional Connections?    ";
    cin  >> numOfConnections;
    cout << endl << endl;
    cout << "Total number of Premium Channels:   ";
    cin  >> numOfPremiumChannels;
    cout << endl << endl;


    if (customerType == 'R' || customerType == 'r')
    {
        amountCableBill = BASIC_RESIDENTIAL + CONNECT_RESIDENTIAL * numOfConnections +       PREMIUM_RESIDENTIAL * numOfPremiumChannels;
    }
    //else customerType == 'B' || customerType == 'b';   // unnecessary
    {
        if (numOfConnections <= 9)

            amountCableBill = BASIC_BUSINESS + PREMIUM_BUSINESS * numOfPremiumChannels;

        else
            amountCableBill =  BASIC_BUSINESS + (numOfConnections - 9) * CONNECT_BUSINESS + PREMIUM_BUSINESS *numOfPremiumChannels;
    }

    cout << "Total amount of Cable Bill:  "  << amountCableBill << endl << endl;
    cout << "Press <ENTER> to end..." << endl;



    _getch();

    return 0;
}
c++
visual-c++
if-statement
visual-studio-2010
Share
Follow
edited Mar 11, 2014 at 4:40
user avatar
WhozCraig
63.4k1010 gold badges7171 silver badges132132 bronze badges
asked Mar 11, 2014 at 4:36
user avatar
user3404486
1
1
That else is necessary. – 
screwnut
 Mar 11, 2014 at 4:40
Add a comment
#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    const float BASIC_RESIDENTIAL   =   18.50;
    const float BASIC_BUSINESS      =   75.00;
    const float CONNECT_RESIDENTIAL =   6.50;
    const float CONNECT_BUSINESS    =   5.00;
    const float PREMIUM_RESIDENTIAL =   7.50;
    const float PREMIUM_BUSINESS    =   50.00;


    char    customerType;
    int     numOfConnections;
    int     numOfPremiumChannels;
    float   amountCableBill;

    cout << fixed << setprecision(2);
    cout << "Residential or Business [R or B]?   ";
    cin  >> customerType;
    cout << endl << endl;
    cout << "How many Additional Connections?    ";
    cin  >> numOfConnections;
    cout << endl << endl;
    cout << "Total number of Premium Channels:   ";
    cin  >> numOfPremiumChannels;
    cout << endl << endl;


    if (customerType == 'R' || customerType == 'r')
    {
        amountCableBill = BASIC_RESIDENTIAL + CONNECT_RESIDENTIAL * numOfConnections +       PREMIUM_RESIDENTIAL * numOfPremiumChannels;
    }
    //else customerType == 'B' || customerType == 'b';   // unnecessary
    {
        if (numOfConnections <= 9)

            amountCableBill = BASIC_BUSINESS + PREMIUM_BUSINESS * numOfPremiumChannels;

        else
            amountCableBill =  BASIC_BUSINESS + (numOfConnections - 9) * CONNECT_BUSINESS + PREMIUM_BUSINESS *numOfPremiumChannels;
    }

    cout << "Total amount of Cable Bill:  "  << amountCableBill << endl << endl;
    cout << "Press <ENTER> to end..." << endl;



    _getch();

    return 0;
}