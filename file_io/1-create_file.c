#include "main.h"

/**
* create_file - function that creates a file
* @filename: pointer
* @text_content: pointer
*
* Return: Check if file name is null
* If the write fails close the file and return -1
*/

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, numberCharacters;

	/* Vérification des arguments */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Ouverture du fichier */
	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}

	/* Écriture du contenu textuel dans le fichier */
	if (text_content != NULL)
	{
		numberCharacters = write(fileDescriptor, text_content, strlen(text_content));
		if (numberCharacters == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	/* Fermeture du fichier et retour de la valeur de retour appropriée */
	close(fileDescriptor);
	return (1);
}
