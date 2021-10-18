#include "header.h"

int main(){

    t_vector2 scale;

    t_screen screen;
    screen.scale = &scale;

    WINDOW *wind = initscr();
    getmaxyx(wind, scale.y, scale.x);
    endwin();

    screen.array = mem_alloc(*(screen.scale));

    mx_cleanarr(&screen);


    // Debug cycle
    for(int i = 0; i < 10; i++){
    generate_frame(&screen);
    output(screen);
    }

    str_del(screen.array,*(screen.scale));
    printf("end");
    return 0;
}
