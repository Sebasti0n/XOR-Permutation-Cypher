#include <bits/stdc++.h> 

void encryptDepcrypt(char inpString[]) 
{

	char xorKey = 'K'; 
	int len = strlen(inpString); 

	for (int i = 0; i < len; i++)
	{
		inpString[i] = inpString[i] ^ xorKey; 
		printf("%c", inpString[i]); 
	}
}

int main()
{
	char sampleString[] = "UHD Computer Science Department"; 

	//Encrypt the string
	printf("Encryted String: "); 
	encryptDecrpyt(sampleString); 
	printf("\n"); 

	//Decprypt the string 
	printf("Decrypted String: "); 
	encryptDecrypt(sampleString); 

	return 0; 

}
