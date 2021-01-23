char *convert(char *s, int numRows)
{
    int l = strlen(s);
    if (numRows <= 1)
        return s;
    char *t = (char *)malloc(sizeof(char) * (l + 1));
    int numSize = 0;
    int n = 2 * numRows - 2;
    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < l; j++){
            int k = j % n;
            if (k == i || k == n - i){
                t[numSize++] = s[j];
            }
        }
    }
    t[numSize] = '\0';
    return t;
}