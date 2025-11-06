#include <stdio.h>
#include <ctype.h>

// Tes fonctions
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
    
    int test_cases[] = {
        'a', 'Z', 'M',           // Lettres
        '0', '5', '9',           // Chiffres
        '!', '@', ' ',           // Spéciaux
        '\t', '\n', '\0',        // Contrôle
        -1,                      // EOF
        0, 31, 32, 126, 127,     // Limites
        128, 200, 255            // Extended ASCII
    };
    
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int passed = 0;
    
    for (int i = 0; i < num_tests; i++) {
        int c = test_cases[i];
        int ft_result = ft_func(c) != 0;
        int std_result = std_func(c) != 0;
        
        // Affichage du caractère
        if (c == '\0')
            printf("'\\0'");
        else if (c == '\t')
            printf("'\\t'");
        else if (c == '\n')
            printf("'\\n'");
        else if (c == -1)
            printf("EOF ");
        else if (isprint(c))
            printf("'%c' ", c);
        else
            printf("    ");
        
        printf("(%3d): ft=%d std=%d ", c, ft_result, std_result);
        
        if (ft_result == std_result) {
            printf("✅\n");
            passed++;
        } else {
            printf("❌ FAIL\n");
        }
    }
    
    printf("Result: %d/%d tests passed\n", passed, num_tests);
}

int main(void) {
    test_function(ft_isalpha, isalpha, "ft_isalpha");
    test_function(ft_isdigit, isdigit, "ft_isdigit");
    test_function(ft_isalnum, isalnum, "ft_isalnum");
    test_function(ft_isascii, isascii, "ft_isascii");
    test_function(ft_isprint, isprint, "ft_isprint");
    
    return 0;
}
