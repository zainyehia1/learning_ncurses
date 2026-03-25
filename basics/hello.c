#include <ncurses.h>

int main (int argc, char** argv){
    
    /* NCURSES START */
    initscr();
    cbreak();
    noecho(); // Whatever input the user types is not printed to the screen
    // raw(); // Takes all input as raw input
    
    
    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_x = start_y = 10;
    
    WINDOW* win = newwin(height, width, start_y, start_x);
    refresh();
    
    char c = '|';
    
    // box(win, c, 0);
    
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = '|';
    top = bottom = '-';
    tlc = trc = blc = brc = '+';
    
    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win,1,1,"box");
    wrefresh(win);
    
    getch();
    getch();
    
    endwin();
    /* NCURSES END */
    
    return 0;
}