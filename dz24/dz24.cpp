#include "Passport.h"
#include "ForeignPassport.h"
#include <iostream>

using namespace std;

int main() {
    Passport ukrPassport("KH", "123456", "Shevchenko", "Taras", "Hryhorovych", "09.03.1814", "Moryntsi", "10.10.2010", "MIA of Ukraine", "Kyiv");
    ukrPassport.print();

    cout << "\n-------------------\n\n";

    ForeignPassport foreignPassport("FT", "98765432", "Shevchenko", "Taras", "09.03.1814", "Moryntsi", "15.05.2015", "1234");

    foreignPassport.addVisa(Visa("Poland", "01.06.2023", "01.12.2023"));
    foreignPassport.addVisa(Visa("USA", "10.08.2023", "10.08.2033"));

    foreignPassport.print();

    return 0;
}