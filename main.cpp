#include <iostream>
#include "st2.h"
#include <fstream>


int main()
{   
    std::ifstream input;
    input.open("file.txt");
    stack *otr = create(otr);
    stack *pol = create(pol);
    stack *otv = create(otv);
    int k = 0;
    int t = 1;
    while(!input.eof()){
        char d;
        input >> d;
        if (input.eof()){
            break;
        }
        if (d != ','){
            if (d == '-'){
                t = -1;
                otr = push('-', otr);
            }
            else{
                if (t==1){
                    pol = push(d, pol);
                }
                else{
                    otr = push(d, otr);
                }
            }
        }
        else{
            if (t==1){
                pol = push(' ', pol);
            }
            else{
                otr = push(' ', otr);
            }
            t = 1;
        }
    }
    while(isnull(pol)){
        otv = push(pop(pol), otv);
    }
    otv = push(' ', otv);

    while(isnull(otr)){
        otv = push(pop(otr), otv);
    }
    vuvod(otv);
    std::cout << "\n";
    //vuvod(otr);

    return 0;
}