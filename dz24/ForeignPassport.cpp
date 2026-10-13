#include "ForeignPassport.h"
#include <iostream>

ForeignPassport::ForeignPassport() {}

ForeignPassport::ForeignPassport(string series, string number, string lastName, string firstName,
    string birthDate, string birthPlace, string issueDate, string issuedBy)
    : Passport(series, number, lastName, firstName, "", birthDate, birthPlace, issueDate, issuedBy, "") {
}

void ForeignPassport::addVisa(const Visa& visa) {
    visas.push_back(visa);
}

void ForeignPassport::print() const {
    cout << "Foreign Passport\n"
        << "Series and number: " << series << " " << number << "\n"
        << "First and Last Name: " << firstName << " " << lastName << "\n"
        << "Date of birth: " << birthDate << "\n"
        << "Place of birth: " << birthPlace << "\n"
        << "Issued: " << issueDate << ", " << issuedBy << "\n";

    if (visas.empty()) {
        cout << "No visas available.\n";
    }
    else {
        cout << "List of visas:\n";
        for (const auto& visa : visas) {
            visa.print();
        }
    }
}