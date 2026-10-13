#pragma once
#include <string>

using namespace std;

class Visa {
protected:
    string countryName;
    string issueDate;
    string expiryDate;

public:
    Visa();
    Visa(string countryName, string issueDate, string expiryDate);
    void print() const;
};