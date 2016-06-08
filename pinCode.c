#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
	int paramCount = 2;

	const char* z = "sha1sum";

	if(argc != paramCount)
	{
		printf("Usage:\npinCode <4-digit-code>\n\n");

		printf("Good luck!\n");
		return;
	}
	else
	{
		// 8614
		const char *a = "21A6";
    int num1 = (int)strtol(a, NULL, 16);
    int num2 = atoi(argv[1]);
		if (num1 == num2)
		{
			printf("Congratulations !!!\n");
			printf("Here is your flag: \n");

			char command[50];
			strcpy( command, "echo \" ItGoezThere\" | sha1sum " );
			system(command);
			printf("\n");
		}
		else
		{
			printf("Incorrect Code\n");
		}
	}

	return 0;
}
