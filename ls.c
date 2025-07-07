/*
    Public domain ls wrapper around "dir" command
*/
#include <stdlib.h>
#include <string.h>

static char cmd[500];

int main(int argc,char* argv[])
{
sprintf(cmd,"dir %s",(argc<2)?(char*)".\\":argv[1]);
system(cmd);
return 0;
}