#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    pid_t pid, pid_pere;
    pid = fork();

    if (pid == 0) { // Processus fils
        printf("PID du processus zombie : %d\n", getpid());
        while (1) {
            afficher_processus_actifs();
            lister_processus();
            sleep(5);
        }
    } else if (pid > 0) { // Processus père
        wait(NULL);
    } else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}

afficher_processus_actifs(){
    int num_processes;
    FILE *log_file = fopen("log.txt", "a");
    if (log_file == NULL) {
        perror("Erreur lors de l'ouverture du fichier...");
        exit(EXIT_FAILURE);
    }
    fprintf(log_file, "processus actifs: %d\n", num_processes);
    fclose(log_file);
}

lister_processus(){
    system("ps aux >> log.txt");
}