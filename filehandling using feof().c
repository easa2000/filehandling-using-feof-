// using of feof()
#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    char str[80];
    fp = fopen("student_record_feof.TXT","r");
    if(fp == NULL)
    {
        printf("\n The file could not be opened. ");
        exit(1);
    }

    while(!feof(fp))
    {
        fgets(str,79,fp);
        printf("%s",str);
    }
    printf("\n\nFile Read. Now closing the file");
    fclose(fp);
}
