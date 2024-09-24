//putc function write *character* in a selected file
#include<stdio.h>

int main()
{
    FILE *put;
    //till here there is no putcdemo.txt file but because of property of "w" such file will be genreated automatically
    
    put = fopen("putcdemo.txt", "w");
    putc('s', put);
    putc('a', put);
    putc('m', put);
    putc('a', put);
    putc('r', put);
    putc('t', put);
    putc('h', put);
    //after execution of above given commands, "samarth" will be added in the generated file i.e.. putcdemo.txt
    return 0;
}