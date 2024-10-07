#include <wchar.h>
#include <locale.h>

wchar_t char_to_superscript(wchar_t c) {
    wchar_t digit_table[] = {
        0x2070, 0x00B9, 0x00B2, 0x00B3, 0x2074, 
        0x2075, 0x2076, 0x2077, 0x2078, 0x2079,
    };

    if(c >= '0' && c <= '9') return digit_table[c - '0'];
    switch(c) {
        case '.': return 0x22C5; 
        case '-': return 0x207B;
    }
}

void number_to_superscript(wchar_t *dest, wchar_t *src) {
    while(*src){
        *dest = char_to_superscript(*src);
        src++;
        dest++;
    }
    dest++;
    *dest = 0;
}

int main(void) {
    setlocale(LC_CTYPE, "");
    double x = -3.5;
    wchar_t wstr[100], a[100];
    swprintf(a, 100, L"%f", x);
    wprintf(L"Number as a string: %ls\n", a);
    number_to_superscript(wstr, a);
    wprintf(L"Number as exponent: x%ls\n", wstr);
}
