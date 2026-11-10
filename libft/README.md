*This activity has been created as part of the 42 curriculum by samhammo.*

## Description

Libft est une bibliothèque réutilisable pour nos prochains projets, qui nous permettra d'utiliser nos propres fonctions dans nos programmes.

Le but de ce projet est de recoder des fonctions de la bibliothèque standard C (libc) afin de comprendre leur fonctionnement, puis d'y ajouter des fonctions supplémentaires et des fonctions de manipulation de listes chaînées. Le tout est compilé en une bibliothèque statique, `libft.a`.

## Instructions

On compile la bibliothèque grâce au Makefile, qui crée un fichier .o pour chaque fichier .c, puis les rassemble dans la bibliothèque libft.a avec la commande ar.
make
Les autres règles du Makefile :
make clean
Supprime les fichiers objets (.o).
make fclean
Supprime les fichiers objets et la bibliothèque libft.a.
make re
Supprime tout, puis recompile la bibliothèque.
Utilisation
Pour utiliser la libft dans un programme, il faut inclure son header :
#include "libft.h"
Puis compiler le programme avec la bibliothèque :
cc -Wall -Wextra -Werror main.c libft.a

## Contenu de la bibliothèque

Partie 1 - Fonctions de la libc : ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower, ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_atoi, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc.
Partie 2 - Fonctions supplémentaires : ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.
Partie 3 - Listes chaînées (structure t_list) : ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.


## Resources

- Les pages man des fonctions originales (`man 3 strlen`, `man ascii`, ...)
- La norme 42

### Utilisation de l'IA

Aucune IA n'a été utilisée pour écrire le code de ce projet.