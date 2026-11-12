#include <stdio.h>


int main() 
{

char *titles[] = {"A Tale of Two Cities",
                "Wuthering Heights","Don Quixote",
                "Odyssey","Moby-Dick","Hamlet",
                "Gulliver's Travels"};

//Each array element contains a pointer that points to a second pointer to char:
char *bestBooks[3];
char **englishBooks[4];

//Assign the addresses of the titles to the array of pointers to pointers
//&titles[0] is the address of the first element in the titles array, which is a pointer to char 
//the pointer to char points to the first character of the tiles[0] string, which is 'A'
bestBooks[0] = titles[0]; //address of A
bestBooks[1] = titles[3]; //address of a
bestBooks[2] = titles[5]; //address of e


englishBooks[0] = &titles[0];
englishBooks[1] = &titles[1]; //address of space between A and Tale
englishBooks[2] = &titles[5];
englishBooks[3] = &titles[6];

printf("%s\n",*englishBooks[1]);// will print Wuthering Heights
printf("%c\n", *bestBooks[0]);// will print A

}
