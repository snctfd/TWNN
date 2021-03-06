/*collection of formulas and functions that form the game*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define popFactor 1.172103
#define productionFactor 1.163118
#define storageFactor 1.2294934

/*https://forum.tribalwars.us/index.php?threads/guide-building-formulas.389/ link for info*/

/* {0 starting level,1 max level,2 min level,3 wood,4 clay,5 iron,6 population,
7 wood factor,8 clay factor,9 iron factor,10 population factor,11 time factor,12 points}*/
float building_info[13][13] = {
{1,30,1,90,80,70,5,1.26,1.275,1.26,1.17,10,10}, //0 Headquarter
{0,25,0,200,170,90,7,1.26,1.28,1.26,1.17,20,16}, //1 Barracks
{0,20,0,270,240,260,8,1.26,1.28,1.26,1.17,66.6,20}, //2 Stables
{0,15,0,300,240,260,8,1.26,1.28,1.26,1.17,66.6,24}, //3 Workshop
{0,1,0,15000,25000,10000,80,2,2,2,1.17,6520,512}, //4 Academy
{0,20,0,220,180,240,20,1.26,1.275,1.26,1.17,66.6,19}, //5 Smithy
{0,25,0,100,100,100,20,1.26,1.275,1.26,1.17,30,10}, //6 Market
{0,30,0,50,60,40,5,1.25,1.275,1.245,1.155,10,6}, //7 Woodcutters
{0,30,0,65,50,40,10,1.27,1.265,1.24,1.14,10,6}, //8 Claypit
{0,30,0,75,65,70,10,1.252,1.275,1.24,1.17,13,6}, //9 Ironmine
{1,30,1,45,40,30,0,1.3,1.32,1.29,1,13.3,5}, //10 Farm
{1,30,1,60,50,40,0,1.265,1.27,1.245,1.15,11.3,6}, //11 Storage
{0,20,0,50,100,20,5,1.26,1.275,1.26,1.17,40,8} }; //12 Wall

