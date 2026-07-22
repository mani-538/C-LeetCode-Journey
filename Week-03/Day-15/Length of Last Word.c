int lengthOfLastWord(char* s)
{
    int i = 0;

    // Find end of string
    while(s[i] != '\0')
    {
        i++;
    }

    // Move to last character
    i--;

    // Skip trailing spaces
    while(i >= 0 && s[i] == ' ')
    {
        i--;
    }

    int count = 0;

    // Count letters of last word
    while(i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }

    return count;
}