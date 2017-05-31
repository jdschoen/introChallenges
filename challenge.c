#include <stdio.h>
#include <string.h>



int section1(const char* sect2pwd)
{
	printf("Welcome to Section 1\n\n");

	char command[50];
	sprintf( command, "echo %s | tr '[A-Za-z]' '[N-ZA-Mn-za-m]'", sect2pwd );
	printf("The password for the next section is:\n" );
	system(command);
	printf("\nhmmm ... Something is wrong here though ...\n");
	printf("\nIs this password shifted a certain (unlucky) number of times?\n\n");
}

int section2(const char* sect3pwdB64)
{
	printf("Welcome to Section 2\n\n");

	printf("The password for the next section is:\n%s\n", sect3pwdB64 );
	printf("\nIs that B2**6?\n\n");
}

int section3(const char* sect4pwdUrl)
{
	printf("Welcome to Section 3\n\n");

	printf("The password for the next section is:\n%s\n", sect4pwdUrl );
	printf("\nI bet yoU aRe Looking for the type of encoding used here?\n\n");
}

int section4(const char* sect5pwdBin)
{
	printf("Welcome to Section 4\n\n");

	printf("The password for the next section is:\n%s\n", sect5pwdBin );
	printf("\nThere 10 types of people; They either get it or they don't.\n\n");
}

int section5(const char* lastSectPwdHtml)
{
	printf("Welcome to the last section!\n\n");

	printf("The password for the final section is:\n%s\n", lastSectPwdHtml);
	printf("\nAfter all of this decoding, you don't need any hints...\n\n");
}


int main(int argc, char **argv)
{
	const char* sect1pwd = "section1";
	const char* sect2pwd = "S3CtIoN2";
	const char* sect3pwdB64 = "UzNjVDEwblRoUjMz";
	const char* sect3pwd = "S3cT10nThR33";
	const char* sect4pwdUrl = "\%35\%33\%63\%37\%31\%30\%6e\%34";
        const char* sect4pwd = "53c710n4";
        const char* sect5pwdBin  = "110101c1000111Qn101";
	const char* sect5pwd = "53c71Qn5";
	const char* lastSectPwdHtml  = "&#x37;&#x68;&#x31;&#x35;&#x31;&#x35;&#x37;&#x68;&#x33;&#x6c;&#x34;&#x35;&#x37;&#x35;&#x33;&#x63;&#x37;&#x31;&#x30;&#x6e;";
	const char* lastSectPwd = "7h15157h3l45753c710n";
	const char* finalFlag = "b418bb9235d615da761c0e2cd61beadf0fa9ae13";

	int paramCount = 2;
	if(argc != paramCount)
	{
		printf("Usage:\nchallenge <password>\n\n");

    printf("The password for the next level is \"%s\"\n\n", sect1pwd);
		printf("To access the next level ...\n");
		printf("$challenge %s\n\n", sect1pwd);

		printf("Burp Suite has a decoder/encoder that you may find helpful.\n");
	  printf("Many other online decoders may also be useful ...\n");
	  printf("Good luck!\n\n");
		return;
	}
	else
	{

		if (strcmp(argv[1], sect1pwd) == 0)
		{
			section1(sect2pwd);
		}
		else if (strcmp(argv[1], sect2pwd) == 0)
		{
			section2(sect3pwdB64);
		}
		else if (strcmp(argv[1], sect3pwd) == 0)
		{
			section3(sect4pwdUrl);
		}
		else if (strcmp(argv[1], sect4pwd) == 0)
		{
			section4(sect5pwdBin);
		}
		else if (strcmp(argv[1], sect5pwd) == 0)
		{
			section5(lastSectPwdHtml);
		}
		else if (strcmp(argv[1], lastSectPwd) == 0)
		{
			printf("Congratulations! You have passed the challenge.\n\n");
			printf("Here is your flag: \n%s\n", finalFlag);
		}
		else
		{
			printf("password incorrect\n");
			printf("%s %s\n", argv[0], argv[1]);
		}
	}
	return 0;
}
