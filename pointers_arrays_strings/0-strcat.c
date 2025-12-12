char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
        i++;

    /* Copy characters from src */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add the null terminator */
    dest[i] = '\0';

    return dest;
}
