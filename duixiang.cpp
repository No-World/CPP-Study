#include "duixiang.h"
#include <iostream>
using namespace std;

void girl::setage(int a) {
    age = a;
}
void girl::setname(char *n) {
    
}
void girl::setheight(float h);
void girl::setweight(float w);
void girl::sethobby(char *h);
void girl::setboyfriends(char *b);
void girl::setbust(int b);
void girl::setwaistline(int w);
void girl::sethipline(int h);
int girl::getage();
char girl::*getname();
float girl::getheight();
float girl::getweight();
char girl::*gethobby();
char girl::*getboyfriends();
int girl::getbust();
int girl::getwaistline();
int girl::gethipline();
void girl::show();