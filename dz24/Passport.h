#pragma once
#include <string>

using namespace std;

class Passport {
protected:
    string series;
    string number;
    string lastName;
    string firstName;
    string birthDate;
    string birthPlace;
    string issueDate;
    string issuedBy;

private:
    string patronymic;
    string registration;

public:
    Passport();
    Passport(string series, string number, string lastName, string firstName,
        string patronymic, string birthDate, string birthPlace,
        string issueDate, string issuedBy, string registration);
    virtual void print() const;
};