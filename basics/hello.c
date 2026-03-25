#include <ncurses.h>

int main (int argc, char** argv){
    // Initializes screen
    // Sets up memory and clears the screen
    initscr();
    
    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_x = start_y = 10;
    
    WINDOW* win = newwin(height, width, start_y, start_x);
    refresh();
    
    box(win, 0, 0);
    mvwprintw(win,1,1,"box");
    wrefresh(win);
    
    // Waits for user input, returns int value of that key
    int ch = getch();    
    
    endwin();
    // deallocates memory and ends ncurses
    
    return 0;
}