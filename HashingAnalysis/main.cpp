#include <iostream>
#include <list>
#include "CRSchemes.hpp"

///FIXMEEE: Make hashing functions here
int keyMod(int keyVal, int tableSize) {
    int address=0;
    ///INCLUDE Function
    return address;
}
int midSquare(int keyVal, int tableSize) {
    int address=0;
    ///INCLUDE Function
    return address;
}

int main(int argc, const char * argv[]) {
    int function=0;
    int CRScheme=0;
    int tableSize=0;
    double loadFactor=0.0;
    
    std::cout<<"Choose which hashing function you want: "<<
    "\n1. Key % Table Size"<<
    "\n2. Mid-square"<<std::endl;
    std::cin>>function;
    std::cout<<"Choose which collision resolution scheme you want: "<<
    "\n1. Separate Chaining"<<
    "\n2. Open Addressing"<<std::endl;
    std::cin>>CRScheme;
    std::cout<<"Input desired table size: "<<std::endl;
    std::cin>>tableSize;
    
    int collisions[tableSize];
    int index=0;
    int address=0;
    SepChain* sepmap= new SepChain(tableSize);
    OpenAdd* openmap= new OpenAdd(tableSize);
   
    while(loadFactor!=1) {
        int keyValue = std::rand() % (3 * tableSize);
        //Chooses hashing function
        if(function==1) {
            address=keyMod(keyValue, tableSize);
        }
        else if(function==2) {
            address=midSquare(keyValue, tableSize);
        }
        //Chooses Collision Resolution Scheme
        if(CRScheme==1) {
            collisions[index]=sepmap->insertKey(keyValue, address);
        }
        else if(CRScheme==2) {
            collisions[index]=openmap->insertKey(keyValue, address);
        }
        index++;
        loadFactor=index/tableSize;
    }
    
    return 0;
}


//std::list<std::string>::iterator iter = hashTable[i].begin();
//while (iter != hashTable[i].end())
//{
//    std::cout << '\t' << *iter << '\n';
//    iter++;
//    }
