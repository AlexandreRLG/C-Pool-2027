/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#pragma once

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(int n);
int my_put_nbr(int nb);

void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_evil_str(char *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);

int my_compute_factorial_rec(int nb);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
int my_showstr(char const *str);

char *my_strcar(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);