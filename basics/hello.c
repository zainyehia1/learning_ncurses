#include <ncurses.h>

int main (int argc, char** argv){
    
    
    // Initializes screen
    // Sets up memory and clears the screen
    initscr();
    
    int x = 10;
    int y = 10;
    
    // Moves cursor to specifiec location
    move(y, x);
    
    // Prints a string (const char *) to a window
    printw("Hello world!");
    
    // Refreshes screen to match what's in memory
    refresh();
    
    // Waits for user input, returns int value of that key
    int ch = getch();
    refresh();
    
    // move(0, 0);
    
    // Move and print on the same line
    mvprintw(0, 0, "%d", ch);
    refresh();
    
    getch();
    
    // Clears the screen
    clear();
    
    getch();
    
    endwin();
    // deallocates memory and ends ncurses
    
    return 0;
}