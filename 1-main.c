#include <stdio.h>
void factorize(int n);
int main(int argc, char *argv[])
{
	FILE *file;
	int num;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return 1;
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		perror("Error opening file");
		return 1;
	}

	while (fscanf(file, "%d", &num) == 1)
	{
		factorize(num);
	}

	fclose(file);
	return 0;
}
}
