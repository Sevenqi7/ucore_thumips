#include <stdio.h>

char *ucore_banner = "__      __ ___     _       ___     ___   __  __    ___             _____    ___             _   _    ___     ___     ___     ___   \n"
"\\ \\    / /| __|   | |     / __|   / _ \\ |  \\/  |  | __|     o O O |_   _|  / _ \\     o O O | | | |  / __|   / _ \\   | _ \\   | __|  \n"
" \\ \\/\\/ / | _|    | |__  | (__   | (_) || |\\/| |  | _|     o        | |   | (_) |   o      | |_| | | (__   | (_) |  |   /   | _|   \n"
"  \\_/\\_/  |___|   |____|  \\___|   \\___/ |_|__|_|  |___|   TS__[O]  _|_|_   \\___/   TS__[O]  \\___/   \\___|   \\___/   |_|_\\   |___|  \n"
"_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"| {======|_|\"\"\"\"\"|_|\"\"\"\"\"| {======|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"| \n"
"\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'./o--000\'\"`-0-0-\'\"`-0-0-\'./o--000\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\n";

char *npu_nscscc = "  _  _     ___    _   _            _  _     ___     ___     ___     ___     ___   \n"
" | \\| |   | _ \\  | | | |    o O O | \\| |   / __|   / __|   / __|   / __|   / __|  \n"
" | .` |   |  _/  | |_| |   o      | .` |   \\__ \\  | (__    \\__ \\  | (__   | (__   \n"
" |_|\\_|   |_|_    \\___/   TS__[O] |_|\\_|   |___/   \\___|   |___/   \\___|   \\___|  \n"
"_|\"\"\"\"\"|_| \"\"\" |_|\"\"\"\"\"| {======|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"| \n"
"\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'./o--000\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\'\"`-0-0-\' \n"
;

extern void welcome(){
    kprintf("\n\n%s\n\n%s\n\n", npu_nscscc, ucore_banner);
}