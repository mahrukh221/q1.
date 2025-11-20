#include<stdio.h>
int main() {
	FILE *fp;
	char ch;
	int vowels=0;
	int consonants=0;
	fp=fopen("input.txt", "r");
	if (fp==NULL) {
		printf("error opening file. \n");
		return 1;
	}
	while ((ch=fgetc(fp))!=EOF) {
		if (ch>='A'&& ch<='Z') {
			ch=ch+32;
		}
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
			vowels++;
		}
		else if (ch>='a'&& ch<='z') {
			consonants++;
		}
	}
	fclose(fp);
	printf("vowels : %d\n",vowels);
	printf("consonants : %d\n",consonants);
	return 0;
}
