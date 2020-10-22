#include <stdio.h>
#include <stdlib.h>
#include "core.h"

int main() {
    printf("\nTESTING: input / output (expected)\n\n");
    printf("\t50\t/ %.0f (48)\n", requiredRooms(50));
    printf("\t75\t/ %.0f (16)\n", requiredRooms(75));
    printf("\t60\t/ %.0f (30)\n", requiredRooms(60));
    printf("\t70\t/ %.0f (20)\n", requiredRooms(70));
    printf("\t35\t/ %.0f (120)\n", requiredRooms(35));
    printf("\t34\t/ %.0f (1200)\n", requiredRooms(34));
    printf("\t1\t/ %.0f (159200)\n", requiredRooms(1));
    printf("\t3\t/ %.0f (19600)\n\n", requiredRooms(3));
}