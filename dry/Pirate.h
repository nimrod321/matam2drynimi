
#pragma once

#include <iostream>

using std::string;

class Pirate {
private:
    string name;
    int bounty;
public:
    Pirate(const string& name, int bounty);
    Pirate() = default;
    ~Pirate() = default;

    int getBounty() const;
    void setBounty(int newBounty);
    void setName(const string& name);
    void printDetails() const;
    string getName();

    friend std::ostream &operator<<(std::ostream &os, const Pirate &pirate);
};
