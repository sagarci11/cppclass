#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc,char** argv){
    if(*argv[3]=='+'){
        int x = atoi(argv[1])+atoi(argv[2]);
        cout<<"Sum is "<<x<<endl;
    }
    return 0;
}
