#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#define ARRAY_SIZE(a) ( sizeof(a) / sizeof(a[0]) )

#define IS_NUMBER(ch) ( '0' <= (ch) && (ch) <= '9' )
#define IS_NULL(ptr)  ( (ptr) == NULL )
#define IS_NOT_NULL(ptr) ( (ptr) != NULL )

#define ASSERT_EQUAL(a, b) ( assert(a == b) )
#define ASSERT_NOT_EQUAL(a, b) ( assert(a != b) )

#define REP(n) for (int i = 0; i < (int)(n); i++)
#define BIT(n) ( 1LL << (n) )

#define STOI(str) ((int)strtol(str, NULL, 10))

int main(void) {
    char str[100];

    scanf("%s", str);

    printf("%d\n", );

    return 0;
}