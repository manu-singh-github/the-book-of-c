#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes year as input and prints the name of cricket world cup winning country for that year, 

a.	1975: West Indies
b.	1979: West Indies
c.	1983: India
d.	1987: Australia
e.	1992: Pakistan
f.	1996: Sri Lanka
g.	1999: Australia
h.	2003: Australia
i.	2007: Australia
j.	2011: India
k.	2015: Australia
If world cup was not played in the year entered by the user, program should print "Invalid input"
There should be no newlines after the printed output
Winners post 2015 are not required.
*/
  
 int year = 0;
    printf("Enter year of world cup: ");
    scanf("%d",&year);
 
    switch(year) {
        case 1975:
            printf("West Indies won the world cup in 1975\n");
            break;
        case 1979:
            printf("West Indies won the world cup in 1979\n");
            break;
        case 1983:
            printf("India won the world cup in 1983\n");
            break;
        case 1987:
            printf("Australia won the world cup in 1987\n");
            break;
        case 1992:
            printf("Pakistan won the world cup in 1992\n");
            break;
        case 1996:
            printf("Sri Lanka won the world cup in 1996\n");
            break;
        case 1999:
            printf("Australia won the world cup in 1999\n");
            break;
        case 2003:
            printf("Australia won the world cup in 2003\n");
            break;
        case 2007:
            printf("Australia won the world cup in 2007\n");
            break;
        case 2011:
            printf("India won the world cup in 2011\n");
            break;
        case 2015:
            printf("Australia won the world cup in 2015\n");
            break;
        default:
            printf("There was no world cup played in %d\n", year);
    }
 
    return 0;
}
 
