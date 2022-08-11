#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdarg.h>
#include <string.h>

#define ARRAY_SIZE(a) ( sizeof(a) / sizeof(a[0]) )

#define IS_NUMBER(ch) ( '0' <= (ch) && (ch) <= '9' )
#define IS_NULL(ptr)  ( (ptr) == NULL )
#define IS_NOT_NULL(ptr) ( (ptr) != NULL )

#define ASSERT_EQUAL(a, b) ( assert(a == b) )
#define ASSERT_NOT_EQUAL(a, b) ( assert(a != b) )

#define REP(n) for (int i = 0; i < (int)(n); i++)
#define BIT(n) ( 1LL << (n) )

#define STOI(str) ( (int)strtol(str, NULL, 10) )
#define STOD(str) ( strtod(str, NULL) )

#define STR_EQUAL(str1, str2) ( !strcmp(str1, str2) )

#define MAX2(a, b) (a > b ? a : b)
#define MIN2(a, b) (a < b ? a : b)

int scan_int() {
    char str[100];
    scanf("%s", str);
    return STOI(str);
}

double scan_double() {
    char str[100];
    scanf("%s", str);
    return STOD(str);
}

int max(int len, ...) {
    va_list va_ptr;
    va_start(va_ptr, len);

    int max_value = va_arg(va_ptr, int);

    for (int i = 1; i < len; i++) {
        int num = va_arg(va_ptr, int);
        max_value = MAX2(num, max_value);
    }

    va_end(va_ptr);
    return max_value;
}

int min(int len, ...) {
    va_list va_ptr;
    va_start(va_ptr, len);

    int min_value = va_arg(va_ptr, int);

    for (int i = 1; i < len; i++) {
        int num = va_arg(va_ptr, int);
        min_value = MIN2(num, min_value);
    }

    va_end(va_ptr);
    return min_value;
}


int main(void) {
    int a = scan_int();
    
    double b = scan_double();

    printf("%d\n", );

    return 0;
}