#include<stdio.h>

int main()
{
    FILE *ptr;
    //ptr = fopen("sample.txt", "r"); //--> for reading the file
    //ptr = fopen("sample.bin", "rb"); --> for reading a binary file
    //in both "r" and "rb" if file doesn't exist then it will return NULL
    //ptr = fopen("sample.txt", "w"); --> for writing the file; if there is no such file (such as sample.txt here) then this command will create a file automatically. Showing same in next command.
    //ptr = fopen("sample2.txt", "w"); --> see the previous command's description
    //ptr = fopen("sample.bin", "wb"); --> for writing a binary file
    //in both "w" and "wb" if the file doesn.t exist then these will automatically create such files. 
    //ptr = fopen("sample.txt", "a"); --> for appending a file;(appending means adding stuffs at the end.)
    return 0;
}