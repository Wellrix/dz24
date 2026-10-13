#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>

using namespace std;

class ForeignPassport : public Passport {
private:
    vector<Visa> visas;

public:
    ForeignPassport();
    ForeignPassport(string series, string number, string lastName, string firstName,
        string birthDate, string birthPlace, string issueDate, string issuedBy);

    void addVisa(const Visa& visa);
    void print() const override;
};