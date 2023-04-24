// Nicholas Natale
// OS
// 4/23/23

#include "console.h"
#include "keyboard.h"

void main() {

    clear_terminal();
    uint8_t byte;

    while(1) {
        while ( byte = scan()) {
            print_character(charmap[byte]);

         }
    }

    return;


}
