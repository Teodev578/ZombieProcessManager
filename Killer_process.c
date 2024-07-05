#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sched.h>

int main() {
    pid_t zombie = 5513;
    if (kill(zombie, SIGTERM) == 0) {
        printf("Le processus as été arrêté avec succès.\n");
    } else {
        perror("Erreur lors de l'envoi du signal SIGTERM au processus zombie");
        exit(EXIT_FAILURE);
    }
    return EXIT_SUCCESS;
}
