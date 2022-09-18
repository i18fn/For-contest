#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

#define Int unsigned long long

#define ARRAY_SIZE(a) ( sizeof(a) / sizeof(a[0]) )

#define IS_NUMBER(ch) ( '0' <= (ch) && (ch) <= '9' )
#define IS_NULL(ptr)  ( (ptr) == NULL )
#define IS_NOT_NULL(ptr) ( (ptr) != NULL )

#define ASSERT_EQUAL(a, b) ( assert(a == b) )
#define ASSERT_NOT_EQUAL(a, b) ( assert(a != b) )

#define REP(n) for (Int i = 0; i < (Int)(n); i++)
#define BIT(n) ( 1LL << (n) )

#define STOI(str) ( (Int)strtol(str, NULL, 10) )
#define STOD(str) ( strtod(str, NULL) )

#define STR_EQUAL(str1, str2) ( !strcmp(str1, str2) )

#define MAX2(a, b) (a > b ? a : b)
#define MIN2(a, b) (a < b ? a : b)

Int scan_Int() {
    char str[100];
    scanf("%s", str);
    return STOI(str);
}

double scan_double() {
    char str[100];
    scanf("%s", str);
    return STOD(str);
}

char *scan_str(int N) {
    char *str = (char *)malloc(N * sizeof(char));    
    scanf("%s", str);
    return str;
}

Int max(Int len, ...) {
    va_list va_ptr;
    va_start(va_ptr, len);

    Int max_value = va_arg(va_ptr, Int);

    for (Int i = 1; i < len; i++) {
        Int num = va_arg(va_ptr, Int);
        max_value = MAX2(num, max_value);
    }

    va_end(va_ptr);
    return max_value;
}

Int min(Int len, ...) {
    va_list va_ptr;
    va_start(va_ptr, len);

    Int min_value = va_arg(va_ptr, Int);

    for (Int i = 1; i < len; i++) {
        Int num = va_arg(va_ptr, Int);
        min_value = MIN2(num, min_value);
    }

    va_end(va_ptr);
    return min_value;
}

/* 26以上の値だとオーバーフローする */
Int factorial(Int n) {
    Int ans = 1;

    for (Int i = 2; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

Int combination(Int n, Int r) {
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}

void prInt_ans(Int ans) {
    prIntf("%lld", ans);
}

int main(void) {
    Int N = scan_Int();
    double val = scan_double();
    char *str = scan_str(N);

    prInt_ans(N);

    return 0;
}