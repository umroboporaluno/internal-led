/*
    Internal LED (LED Interno)

    Um exemplo de como criar um LED vermelho que irá acender e após um determinado tempo irá apagar.

    O circuito:
    * InternalLed conectado ao pino D2

    Criado em 09/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

// Mapeamento de pinos
const int InternalLed = 13; ///< O pino conectado ao led interno

/**
 * A função setup do Arduino usada para configuração e configurar tarefas.
 */
void setup()
{
    /**
     * Determina a porta conectada ao InternalLed e o modo de operação para os LEDs
     * pinMode(porta, modo);
     * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados
     */
    pinMode(InternalLed, OUTPUT);
} // Fecha a função setup()

/**
 * A função de loop do Arduino usada para repetição de tarefas em loop.
 * loop() --> A função irá executar em repetição infinita logo após a função setup()
 */
void loop()
{
    /**
     * Acende o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
    digitalWrite(InternalLed, HIGH);

    /**
     * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
     * delay(milissegundos);
     */
    delay(1000);

    /**
     * Apaga o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
    digitalWrite(InternalLed, LOW);

    /**
     * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
     * delay(milissegundos);
     */
    delay(1000);
} // Fecha a função void loop()