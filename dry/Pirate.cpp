
#include "Pirate.h"


Pirate::Pirate(const string& name, int bounty): name(name),bounty(bounty) {}

int Pirate::getBounty() const{
    return bounty;
}
void Pirate::setBounty(int newBounty){
    bounty = newBounty;
}
void Pirate::setName(const string& name){
    this->name = name;
}
void Pirate::printDetails() const{
    std::cout << "Pirate: "<< name << ", Bounty: "<< bounty << std::endl;
}



std::string Pirate::getName(){
    return name;
}


std::ostream &operator<<(std::ostream &os, const Pirate &pirate){
    os << pirate.name;
    return os;
}
