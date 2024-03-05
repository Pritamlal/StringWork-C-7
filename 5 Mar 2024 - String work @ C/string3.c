
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Remove last occurrence of a word

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found, index;
    int stringLen, wordLen;



    printf("Enter any string: ");
    gets(str);
    printf("Enter word to remove: ");
    gets(word);

    stringLen = strlen(str);
    wordLen   = strlen(word);



    index = -1;
    for(i=0; i<stringLen - wordLen; i++)
    {

        found = 1;
        for(j=0; j<wordLen; j++)
        {

            if(str[i+j] != word[j])
            {
                found = 0;
                break;
            }
        }


        if(found == 1)
        {
            index = i;
        }
    }


    if(index == -1)
    {
        printf("'%s' not found.");
    }
    else
    {

        for(i=index; i <= stringLen - wordLen; i++)
        {
            str[i] = str[i + wordLen];
        }

        printf("String after removing last '%s': \n%s", word, str);
    }

    return 0;
}
