#include "main.h"

/**
* main - entry point
* @argc: arguments
* @argv: arguments number
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int source, destination, readFile, writeFile;
	char buffer[1024];

	/* Si le nombre d'argument n'est pas de 3 */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Ouvrir le fichier source */
	source = open(argv[1], O_RDWR);
	if (source < 0) /* S'il n'y a pas de src */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}

	/* Création du fichier de destination */
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination < 0) /* S'il n'existe pas*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to", argv[1]);
		exit(99);
	}

	while ((readFile = read(source, buffer, sizeof(buffer))) > 0)
	{
		writeFile = write(destination, buffer, readFile);
		if (writeFile != readFile)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (readFile < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}

	if (close(source) == -1 || close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}
