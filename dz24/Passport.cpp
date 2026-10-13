#include "Passport.h"
#include <iostream>

Passport::Passport() {}

Passport::Passport(string series, string number, string lastName, string firstName,
    string patronymic, string birthDate, string birthPlace,
    string issueDate, string issuedBy, string registration)
    : series(series), number(number), lastName(lastName), firstName(firstName),
    patronymic(patronymic), birthDate(birthDate), birthPlace(birthPlace),
    issueDate(issueDate), issuedBy(issuedBy), registration(registration) {
}

void Passport::print() const {
    cout << "Passport of a citizen of Ukraine\n"
        << "Series and number: " << series << " " << number << "\n"
        << "Full Name: " << lastName << " " << firstName << " " << patronymic << "\n"
        << "Date of birth: " << birthDate << "\n"
        << "Place of birth: " << birthPlace << "\n"
        << "Issued: " << issueDate << ", " << issuedBy << "\n"
        << "Registration address: " << registration << "\n";
}