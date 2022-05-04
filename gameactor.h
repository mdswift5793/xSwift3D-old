#ifndef GAMEACTOR_H
#define GAMEACTOR_H 0x0003
#define MAX_NUM 500
#include "vector.h"
#include <stdlib.h>

struct game_actor *player;

typedef void (*move)(vector v);
typedef struct game_actor {
    char** tag;
    vector world_position;
    move move;
} game_actor;


/* game_actor find(char** id){
    for(int i = 0; i < MAX_NUM; i++){
        if(actor[i].tag == id) return actor[i];
    }
} */

void init(){
    player 
}

game_actor set_actor(char** id){
    player->tag == id;
}

game_actor get_actor(){
    return *player;
}

#endif