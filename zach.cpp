#include "st2.h"
#include <fstream>
#include <iostream>


int max(char a, char b){
    if (int(a-'0') > int(b-'0')){
        return int(a-'0');
    }
    return int(b-'0');
}
// sss
int min(char a, char b){
    if (int(a-'0') > int(b-'0')){
        return int(b-'0');
    }
    return int(a-'0');
}

int main(){
    std::ifstream input;
    input.open("file.txt");
    stack *t = create(t);
    stack *tmp = create(tmp);
    while(!input.eof()){
        char d;
        input >> d;
        if (input.eof()) break;
        if (d == 'm' || d == 'M' || (d >= '0' && d <= '9')){
            t = push(d, t);
        }
    }
    while (isnull(t)){
        char k = pop(t);
        if (k >= '0' && k <= '9'){
            tmp = push(k, tmp);
        }
        else{
            if (k == 'm'){
                char a1 = pop(tmp);
                char a2 = pop(tmp);
                tmp = push(char(min(a1, a2)) + '0', tmp);
            }
            else{
                char a1 = pop(tmp);
                char a2 = pop(tmp);
                tmp = push(char(max(a1, a2)) + '0', tmp);
            }
        }
    }
    vuvod(tmp);
    std::cout << "\n";
    vuvod(t);
}