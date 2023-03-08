#include <iostream>
#include <fstream>

struct text{
    char el;
    text *next;
};

struct number{
    int el;
    number *next;
};

/*bool demand(text *t){
    
}*/

text* push(text *c, char s){
    text *a = new text;
    a->el = s;
    a->next = c;
    return a;
}

number* push_n(number *c, int s){
    number *a = new number;
    a->el = s;
    a->next = c;
    return a;
}
void zam_M(number *c){
    if (c->el < c->next->el){
        c->el = c->next->el;
    }
    c->next = c->next->next;
    
}
void zam_m(number *c){
    if (c->el > c->next->el){
        c->el = c->next->el;
    }
    c->next = c->next->next;
}


void vuvod(text *a){
    while (a->next!=NULL){
        std::cout << a->el << std::endl;
        a = a->next;
    }
}

using namespace std;

int main(){
    ifstream input;
    input.open("file.txt");
    text *n = NULL;
    number *f = NULL;
    char d;
    while (!input.eof()){
        input >> d;
        n = push(n, d);
    }
    cout << endl;
    int p = 0;
    while (n!=NULL){
        if (n->el == 'm' || n->el == 'M' || (n->el >= '0' && n->el <= '9')){
            if (n->el >= '0' && n->el <= '9'){
                f = push_n(f, int(n->el - '0'));
            }
            else{
                if (n->el == 'm'){
                    zam_m(f);
                }
                else{
                    zam_M(f);
                }
            }
        }
        n = n->next;
    }
    while(f != NULL){
        cout << f->el;
        f = f->next;
    }
}