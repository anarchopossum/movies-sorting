#include <iostream>
#include <string>
#include <cstring>
#include "myDate.h"
#include<iomanip>
using namespace std;


struct Movie {
        char name[15]; // max char limit
        int runTime;
        double rating;
        myDate release;
        const char *actor;
};
void MovDisplay(Movie *m[]);
void populate (Movie *m[]);
void sortByName(Movie *m[]);
void sortByAct (Movie *m[]);
void sortByRating (Movie *m[]);
void sortByRunTime (Movie *m[]);
void sortByDate (Movie *m[]);


void action(){

    cout << "\n1. Sort by Movie title\n";
    cout << "2. Sort by Running Time\n";
    cout << "3. Sort by IMDB rating\n";
    cout << "4. Sort by release date\n";
    cout << "5. Sort by Main Actor Name\n";
    cout << "6. Exit\n";
}


int main() {
    int choice =0;
    struct Movie *DVD[10];
    populate (DVD);
    while (choice != 6){
        action();
        cin >> choice;
        switch (choice) {
            case 1:
                sortByName(DVD);
                break;
            case 2:
                sortByRunTime(DVD);
                break;
            case 3:
                sortByRating(DVD);
                break;
            case 4:
                sortByDate(DVD);
                break;
            case 5:
                sortByAct(DVD);
                break;
            case 6:
                cout << "\n\n -- Hope you have a great day! -- \n\n";
                return 0;
        }
        MovDisplay(DVD);
    }

    //sortByAct(DVD);

    MovDisplay(DVD);



    return 0;
}

void MovDisplay(Movie *m[])
{
    cout <<setw(15)<<left<< "Name\t\t\tRunning Time\tIMDB\tRelease Date\t\tMain Actor\n";
    for (int i = 0; i < 9; ++i) {

        int totalMin = m[i]->runTime;
        double hour = totalMin/60;
        double min  = totalMin%60;

        cout <<setw(15)<<left<< m[i]->name <<" ";
        cout <<left<< hour << "Hour "<< min <<"Min\t\t";
        cout <<left<< m[i]->rating <<"\t\t";
        m[i]->release.display();
        cout <<setw(5)<<"\t"<< m[i]->actor << "\n";
    }
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
void sortByRating (Movie *m[])
{ // this is bubble sort
    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i-1; j++) {
            if (m[j]->rating > m[j + 1]->rating)  // check the code below
                swap(m[j], m[j + 1]);
        }
    }
}
void sortByRunTime (Movie *m[])
{ // this is bubble sort
    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i-1; j++) {
            if (m[j]->runTime > m[j + 1]->runTime)  // check the code below
                swap(m[j], m[j + 1]);
        }
    }
}
void sortByDate (Movie *m[])
{ // this is bubble sort
    for(int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i-1; j++) {
            if (m[j]->release.daysBetween(m[j+1]->release) > 0)  // check the code below
                swap(m[j], m[j + 1]);
        }
    }
}

// Populates Struct with given values
void populate (Movie *m[]){
    m[0] = new Movie;
    strncpy(m[0]->name,"Jaws",4); // can Memory Leak
    m[0]->runTime = 124;
    m[0]->rating  = 8.10;
    m[0]->release = {6,20,1975};
    m[0]->actor   = "Roy Scheider";

    m[1] = new Movie;
    strncpy(m[1]->name,"Shrek",5); // can Memory Leak
    m[1]->runTime = 90;
    m[1]->rating  = 7.90;
    m[1]->release = {5,18,2001};
    m[1]->actor   = "Mike Myers";

    m[2] = new Movie;
    strncpy(m[2]->name,"Rushhour",8); // can Memory Leak
    m[2]->runTime = 98;
    m[2]->rating  = 7.0;
    m[2]->release = {9,18,1998};
    m[2]->actor   = "Jackie Chan";

    m[3] = new Movie;
    strncpy(m[3]->name,"Bee Movie",9); // can Memory Leak
    m[3]->runTime = 91;
    m[3]->rating  = 6.10;
    m[3]->release = {11,2,2007};
    m[3]->actor   = "Jerry Seinfeld";

    m[4] = new Movie;
    strncpy(m[4]->name,"Shark Tale",10); // can Memory Leak
    m[4]->runTime = 90;
    m[4]->rating  = 6.0;
    m[4]->release = {10,1,2004};
    m[4]->actor   = "Will Smith";

    m[5] = new Movie;
    strncpy(m[5]->name,"Toy Story",9); // can Memory Leak
    m[5]->runTime = 81;
    m[5]->rating  = 8.30;
    m[5]->release = {11,22,1995};
    m[5]->actor   = "Tom Hanks";

    m[6] = new Movie;
    strncpy(m[6]->name,"The Iron Giant", 14); // can Memory Leak
    m[6]->runTime = 151;
    m[6]->rating  = 8.10;
    m[6]->release = {8,6,1999};
    m[6]->actor   = "Eli Marienthal";

    m[7] = new Movie;
    strncpy(m[7]->name,"Up",2); // can Memory Leak
    m[7]->runTime = 96;
    m[7]->rating  = 8.70;
    m[7]->release = {5,29,2009};
    m[7]->actor   = "Carl Fredericksen";

    m[8] = new Movie;
    strncpy(m[8]->name,"WALL-E",6); // can Memory Leak
    m[8]->runTime = 97;
    m[8]->rating  = 8.40;
    m[8]->release = {6,27,2008};
    m[8]->actor   = "Ben Burtt";

    m[9] = new Movie;
    strncpy(m[9]->name,"Coco",4); // can Memory Leak
    m[9]->runTime = 105;
    m[9]->rating  = 8.40;
    m[9]->release = {10,20,2017};
    m[9]->actor   = "Anthony Gonzalez";
}