#include <string.h>

int upper(char *input, char *output)
{
    const int length = strlen(input);
    while(*input) 
    {
        *output = (*input >= 'a' && *input <= 'z') ? *input-32 : *input;
        input++;
        output++;
    }
    return length;
}

void get_url(char *output)
{
    char *char_ptr = "filled by the great c language";
    while(*char_ptr) 
    {
        *output = *char_ptr;
        char_ptr++;
        output++;
    }
}