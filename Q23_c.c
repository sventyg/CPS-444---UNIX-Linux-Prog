#include <stdio.h>
#include <starfol.h>

void func(const struct bem * func){
    printf("%s %s is a %d-limbed %s.\n", func->title.first, 
    func->title.last, func->limbs, func->type);
}

struct name {
        char first[20];
        char last[20];
};
struct bem {
        int limbs;
        struct name title;
        char type[30];
};
struct bem * pb;
struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"

};

pb = &deb;