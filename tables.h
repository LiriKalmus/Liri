#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct mcro
{
char *mcro_name;
char *mcro_definition;

}mcro;

typedef struct mcro_t
{
mcro* values;
int num_mcros;

}mcro_t;


/* 

create an empty mcro table 
@ return the table's pointer

*/
mcro_t* createTable_mcro();



/* 

add a mcro to the table 

*/
void addToTable_mcro (mcro_t* tp, const char* mcro_name, const char* mcro_definition);



/* 

get a mcro definition from the table
return a poiner to the mcro definition 

*/
const char* getFromTable_mcro (const mcro_t* tp, const char* mcro_name);


/* 

free the memory of the mcro table

*/

void freeMcro_t (mcro_t* tp);
