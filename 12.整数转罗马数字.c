#define MAX 16
char * intToRoman(int num){
    char *a = (char *)calloc(MAX, sizeof(char));
    while (num > 0) {
        if (num >= 1000) {
            strcat(a, "M");
            num -= 1000;
        } else if (num >= 900) {
            strcat(a, "CM");
            num -= 900;
        } else if (num >= 500) {
            strcat(a, "D");
            num -= 500;
        } else if (num >= 400) {
            strcat(a, "CD");
            num -= 400;
        } else if (num >= 100) {
            strcat(a, "C");
            num -= 100;
        } else if (num >= 90) {
            strcat(a, "XC");
            num -= 90;
        } else if (num >= 50) {
            strcat(a, "L");
            num -= 50;
        } else if (num >= 40) {
            strcat(a, "XL");
            num -= 40;
        } else if (num >= 10) {
            strcat(a, "X");
            num -= 10;
        } else if (num >= 9) {
            strcat(a, "IX");
            num -= 9;
        } else if (num >= 5) {
            strcat(a, "V");
            num -= 5;
        } else if (num >= 4) {
            strcat(a, "IV");
            num -= 4;
        } else if (num >= 1) {
            strcat(a, "I");
            num -= 1;
        }
    }
    return a;
}