#include <stdio.h>
#include <unistd.h> // Importa a função sleep()

enum EstadoSemaforo
{
    VERMELHO,
    AMARELO,
    VERDE
};

int main(void) {
    enum EstadoSemaforo semaforo = VERDE;

    for(int i = 0; i < 6; i++) {
        switch(semaforo) {
            case VERMELHO:
                printf("VERMELHO - Pare!\n");
                sleep(5);
                semaforo = VERDE;
                break;
            case VERDE:
                printf("VERDE - Siga!\n");
                sleep(5);
                semaforo = AMARELO;
                break;
            case AMARELO:
                printf("AMARELO - Atenção!\n");
                sleep(5);
                semaforo = VERMELHO;
                break;
            default:
                break;
        }
      
    }

    return 0;
}