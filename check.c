#include <stdio.h>
#include <string.h>
int checkwordinstring(char* str, char* wrd) {
    int i, j, n, m;
	n = strlen(str);	
	m = strlen(wrd);	
    if (m > n)
		return 0;
    while (i < n) {
        j = 0;
		while (i < n && j < m && str[i] == wrd[j]) {
			++i;
			++j;
		}
        if (( i == n || str[i] == ' ') && j == m)
			return 1;
        while (i < n && str[i] != ' ') 
        {
			++i;
		}
		++i;
    }
    return 0;
}
int main() {
    char str[100];	
	char wrd[100];	
    printf("Enter String: ");
	gets(str);
    printf("Enter Word to Search in the String: ");
	gets(wrd);
    if (checkwordinstring(str, wrd)) {
		printf("%s is present in the string", wrd);
	}
	else {
		printf("%s is not present in the string", wrd);
	}
}