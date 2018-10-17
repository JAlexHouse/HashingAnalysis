#ifndef CRSchemes_hpp
#define CRSchemes_hpp

#include <stdio.h>
#include <iostream>
#include <list>

class SepChain {
private:
    int size;
    
public:
    SepChain(int size);
    int insertKey(int keyValue, int address);
    ~SepChain();
};
class OpenAdd {
private:
    int size;
public:
    OpenAdd(int size);
    int insertKey(int keyValue, int address);
    
};
#endif /* CRSchemes_hpp */
