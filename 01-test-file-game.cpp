#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "io-utilities.hpp"
#include "mineSweeper.hpp"

// Helper function for determining what kind of arguments we got.
bool file_args(int argc, char** argv) {
    
    return argc == 2;
}

/**
 * This program uses the Mine-C-Weeper library to create and display a mine-c-weeper game field
 * from a given file.
 *
 * (what this program _really_ is is a test of the alloc_game, free_game, and display_game_field functions)
 */
int main(int argc, char** argv) {
    mcw_game* game;
    // Check arguments to figure out if we can initialize the game.
    if (file_args(argc, argv)) {
        game = initialize_file_game(argv[1]);
        if (game == NULL) {
            puts("Sorry, but something appears to be amiss with the game file.");
            return 1;
        }
    } else {
        emit_utf_8(MARKER);
        printf(" This is a Mine-C-Weeper field file reader! ");
        emit_utf_8(WEEPER);
        puts("");
        puts("Usage: test-file-game <filename>");
        puts("");
        puts("Caution: File error-checking is minimal, so if the map file is in the wrong format,");
        puts("         this program may just terminate without warning.");
        return 1;
    }

    display_game_field(game);
    free_game(game);
    return 0;
}
