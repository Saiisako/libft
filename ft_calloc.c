/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:44:51 by skock             #+#    #+#             */
/*   Updated: 2022/10/05 04:32:47 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb >= 65535 && size >= 65535) || nmemb * size >= 65535)
			return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*
int main() {
    // Test 1 : Allocation d'un tableau de 5 entiers
    int *tableau = (int *)ft_calloc(5, sizeof(int));

    printf("Test 1 : Vérification de l'initialisation à zéro pour un tableau d'entiers\n");
    for (int i = 0; i < 5; i++) {
        printf("tableau[%d] = %d\n", i, tableau[i]); // Devrait afficher 0 pour chaque élément
    }

    // Test 2 : Allocation d'une chaîne de 20 caractères
    char *chaine = (char *)ft_calloc(20, sizeof(char));

    if (chaine == NULL) {
        printf("Échec de l'allocation de mémoire pour la chaîne de caractères\n");
        return 1;
    }

    printf("\nTest 2 : Vérification de l'initialisation à zéro pour une chaîne de caractères\n");
    printf("Chaîne initialisée : '%s'\n", chaine); // Devrait afficher une chaîne vide

    // Remplit la chaîne avec un mot pour tester
    strcpy(chaine, "Bonjour");
    printf("Chaîne après ajout : '%s'\n", chaine);

    return 0;
}
/*