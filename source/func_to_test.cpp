#include <cstring>

char title[] = "bookname";
char author[] = "autname";

int searchs(char tbuy[20], char abuy[20]) {
    if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
        return 1;
    else return 0;

}