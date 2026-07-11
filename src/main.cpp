#include <iostream>
#include "adb.h"
#include "config.h"

int main(){
    std::cout<<"BabySafe MinGW v1"<<std::endl;
    adb_check();
    return 0;
}
