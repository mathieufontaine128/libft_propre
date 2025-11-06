#include <stdio.h>
#include <ctype.h>

// Copie ici tes fonctions directement
int ft_isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int ft_isalnum(int c) {
    return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c) {
    return (c >= 0 && c <= 127);
}

int ft_isprint(int c) {
    return (c >= 32 && c <= 126);
}

void test_function(int (*ft_func)(int), int (*std_func)(int), const char *name) {
    printf("\n=== Test %s ===\n", name);
    int test_cases[] = {'a', 'Z', '0', '!', ' ', '\0', -1, 127, 128, 255, 256};
    for (int i = 0; i < 11; i++) {
        int c = test_cases[i];
        printf("Test '%c' (%d): %s\n",
               (isprint(c) || c == '\0') ? (c == '\0' ? '\\' : c) : ' ',
               c,
               (ft_func(c) == std_func(c)) ? "✅ OK" : "❌ Échec");
    }
}

int main(void) {
    test_function(ft_isalpha, isalpha, "ft_isalpha");
    test_function(ft_isdigit, isdigit, "ft_isdigit");
    test_function(ft_isalnum, isalnum, "ft_isalnum");
    test_function(ft_isascii, isascii, "ft_isascii");
    test_function(ft_isprint, isprint, "ft_isprint");
    return 0;
}

