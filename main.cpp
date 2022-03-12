#include <iostream>
#include <string>
#include <cstring>
#include "myDate.h"
using namespace std;


struct Movie {
        char name[15]; // max char limit
        int runTime;
        double rating;
        //myDate release;
        const char *actor;
};
void populate (Movie *m[]);
void sortByName(Movie *m[]);
void sortByAct (Movie *m[]);

void Menu(int a){
    cout << "1. Sort by Movie";
}

int main() {

    struct Movie *DVD[10];
    populate (DVD);
    sortByName(DVD);
    sortByAct(DVD);


    return 0;
}

void sortByName (Movie *m[])
{ // this is bubble sort
    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i-1; j++) {
            if (strcmp(m[j]->name, m[j + 1]->name) > 0)  // check the code below
                swap(m[j], m[j + 1]);
        }
    }
}
void sortByAct (Movie *m[])
{ // this is bubble sort
    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i-1; j++) {
            if (strcmp(m[j]->actor, m[j + 1]->actor) > 0)  // check the code below
                swap(m[j], m[j + 1]);
        }
    }
}

// Populates Struct with given values
void populate (Movie *m[]){
    m[0] = new Movie;
    strncpy(m[0]->name,"Jaws",4); // can Memory Leak
    m[0]->runTime = 5;
    m[0]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[0]->actor   = "James Pants";

    m[1] = new Movie;
    strncpy(m[1]->name,"Shrek",5); // can Memory Leak
    m[1]->runTime = 5;
    m[1]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[1]->actor   = "James Pants";

    m[2] = new Movie;
    strncpy(m[2]->name,"Rushhour",8); // can Memory Leak
    m[2]->runTime = 5;
    m[2]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[2]->actor   = "James Pants";

    m[3] = new Movie;
    strncpy(m[3]->name,"Bee Movie",9); // can Memory Leak
    m[3]->runTime = 5;
    m[3]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[3]->actor   = "James Pants";

    m[4] = new Movie;
    strncpy(m[4]->name,"Shark Tale",10); // can Memory Leak
    m[4]->runTime = 5;
    m[4]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[4]->actor   = "James Pants";

    m[5] = new Movie;
    strncpy(m[5]->name,"Toy Story",9); // can Memory Leak
    m[5]->runTime = 5;
    m[5]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[5]->actor   = "James Pants";

    m[6] = new Movie;
    strncpy(m[6]->name,"The Iron Giant", 14); // can Memory Leak
    m[6]->runTime = 151;
    m[6]->rating  = 8;
    //m[0]->release = (8,6,1999);
    m[6]->actor   = "Vin Diesel";

    m[7] = new Movie;
    strncpy(m[7]->name,"Up",2); // can Memory Leak
    m[7]->runTime = 5;
    m[7]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[7]->actor   = "Carl Fredericksen";

    m[8] = new Movie;
    strncpy(m[8]->name,"WALL-E",6); // can Memory Leak
    m[8]->runTime = 97;
    m[8]->rating  = 60;
    //m[0]->release = (6,27,2008);
    m[8]->actor   = "Ben Burtt";

    m[9] = new Movie;
    strncpy(m[9]->name,"Coco",4); // can Memory Leak
    m[9]->runTime = 109;
    m[9]->rating  = 60;
    //m[0]->release = (1,1,2000);
    m[9]->actor   = "Anthony Gonzalez";
}