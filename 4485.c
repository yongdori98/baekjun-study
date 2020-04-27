#include<stdio.h>
#include<stdlib.h>

int main() {
	int cnt = 0, i = 0;
	char** word;

	scanf("%d", &cnt);

	word = (char**)calloc(cnt, sizeof(char*));
	for(i = 0; i < cnt; i++)
		word[i] = (char*)calloc(30, sizeof(char));

	i = 0;
	while (i < cnt) {
		getchar();
		scanf("%[^\n]s", word[i]);
		if (97 <= word[i][0] && word[i][0] <= 122)
			word[i][0] -= 32;
		i++;
	}

	for (i = 0; i < cnt; i++)
		printf("%s\n", word[i]);

	system("pause");
}