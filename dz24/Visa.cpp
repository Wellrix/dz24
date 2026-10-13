#include "Visa.h"
#include <iostream>

Visa::Visa() : countryName(""), issueDate(""), expiryDate("") {}

Visa::Visa(string countryName, string issueDate, string expiryDate)
    : countryName(countryName), issueDate(issueDate), expiryDate(expiryDate) {
}

void Visa::print() const {
    cout << "Visa: " << countryName << " | Issue date: " << issueDate << " | Expiry date: " << expiryDate << endl;
}