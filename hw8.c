#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	char str[100];
	char ch[100];
	int len, i = 0;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i<len; i++)
		ch[i] = convCase(str[i]);
	ch[len - 1] = 0;
	printf("Output> %s", ch);
	return 0;

}