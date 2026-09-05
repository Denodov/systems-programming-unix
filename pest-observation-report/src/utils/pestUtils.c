/* Denys Odoviychuk
 * Section 3
 * Spring 2026 */

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include "utils.h"

int level1Count = 0;
int level2Count = 0;
int level3Count = 0;

int getPestLevel(pest_t pest) {
    switch (pest) {
        case aphid:
        case whitefly:
        case cutworm:
            return 1;

        case scale:
        case caterpillar:
        case beetle:
        case slug:
            return 2;

        case gopher:
        case raccoon:
        case possum:
            return 3;

        default:
            return -1;
    }
}

void processFile(const char *filename) {
    int fd;
    int pestCode;
    ssize_t bytesRead;
    pest_t pest;
    int level;

    fd = open(filename, O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    bytesRead = read(fd, &pestCode, sizeof(int));

    while (bytesRead > 0) {
        pest = (pest_t)pestCode;
        level = getPestLevel(pest);

        switch (level) {
            case 1:
                level1Count++;
                break;

            case 2:
                level2Count++;
                break;

            case 3:
                level3Count++;
                break;

            default:
                break;
        }

        bytesRead = read(fd, &pestCode, sizeof(int));
    }

    if (bytesRead < 0) {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }

    close(fd);
}
