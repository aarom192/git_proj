#include <stdio.h>
#include <string.h>

int main() {
    char *sendBuf[20];
	char msg[] = "1000101CA";

	strcpy(sendBuf, msg);
	sendBuf += strlen(sendBuf);
	*sendBuf++=',';
	*sendBuf++=0;
    printf("\n");
    printf("\n");
    printf("Test\n");
  

    printf("src: %s\n", sendBuf);
    //printf("dest: %s\n", dest);
	
	printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Test\n");
    printf("Test\n");

    return 0;
}