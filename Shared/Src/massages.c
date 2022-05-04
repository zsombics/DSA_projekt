//
// Created by zsomb on 4/20/2022.
//

#include "../Header/massages.h"
void printDescriptionMessage(enum LabType messageType) {
    switch (messageType) {
        case LAB1:
            printf(" _                     _ _        _ \n"
                   "| |                   (_) |      | |\n"
                   "| |__   ___  ___ _ __  _| |_ __ _| |\n"
                   "| '_ \\ / _ \\/ __| '_ \\| | __/ _` | |\n"
                   "| | | | (_) \\__ \\ |_) | | || (_| | |\n"
                   "|_| |_|\\___/|___/ .__/|_|\\__\\__,_|_|\n"
                   "                | |                 \n"
                   "                |_|               ");
            printf("\n");
            printf("\n");

            printf(    "                 _ _.-'`'-._ _  \n"
                       "                ;.'________'.;\n"
                       "     _________n.[____________].n_________\n"
                       "    |\"\"_\"\"_\"\"_\"\"||==||==||==||\"\"_\"\"_\"\"_\"\"]\n"
                       "    |\"\"\"\"\"\"\"\"\"\"\"||..||..||..||\"\"\"\"\"\"\"\"\"\"\"|\n"
                       "    |LI LI LI LI||LI||LI||LI||LI LI LI LI|\n"
                       "    |.. .. .. ..||..||..||..||.. .. .. ..|\n"
                       "    |LI LI LI LI||LI||LI||LI||LI LI LI LI|\n"
                       " ,,;;,;;;,;;;,;;;,;;;,;;;,;;;,;;,;;;,;;;,;;,,\n"
                       ";;jgs;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; ");

            printf("\n\n****************************************************\n\n");
            printf("Testing basic Staff and Patient and Medicine functionalities");
            printf("\n\n****************************************************\n\n");

            break;
        case LAB2:
            printf("\n\n****************************************************\n\n");
            printf("Testing Array functionalities ");
            printf("\n\n****************************************************\n\n");
            break;
        case LAB3:
            printf("\n\n****************************************************\n\n");
            printf("Testing User with modified BirthDate and UserArray functionalities");
            printf("\n\n****************************************************\n\n");
            break;
        default:
            printf("Undefined description\n");
            break;
    }
}