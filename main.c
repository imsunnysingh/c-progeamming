//
//  main.c
//  switchcase
//
//  Created by Sunny Singh on 18/08/21.
//

#include <stdio.h>

void play( );
void load( );
void multiplayer( );


int main(int argc, const char * argv[]) {
    int input;
    printf("1: play \n");
    printf("2: load \n");
    printf("3: multiplayer \n");
    printf("4: exit \n");
    printf("enter your choice: \n");
    scanf("%d",&input);
    
    switch(input){
        case 1:
            play();
            break;
        case 2:
            load();
            break;
        case 3:
            multiplayer();
            break;
        case 4:
            printf("exit\n\n");
            break;
        default:
            printf("invalid choice\n\n");
    }
    
    
    
    return 0;
}
 void play( ){
    printf("ready to play \n");
    //return ;
}
void load( ){
    printf("loading game: \n");
    //return;
}
void multiplayer( ){
    printf("starting multiplayer \n");
    
}
