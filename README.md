<h1 align="center">🚨 Internal LED</h1>
<h4 align="center">Um código simples que acende um led e apaga-o após um determinado tempo.</h4>
<br />

# :pushpin: Tabela de Conteúdos

- [Como usar](#gear-como-usar)
- [DIY - Do It Yourself](#construction_worker-do-it-yourself)
- [Licença](#page_facing_up-licença)

# :gear: Como usar
```shell
> Abra o Arduino IDE

> No menu do Arduino IDE, Clique em File > Open > File.

> Selecione o arquivo internal-led.ino

> E pronto, já está pronto para usar!
```

# :construction_worker: Do It Yourself
```shell
> Comece criando o arquivo internal_led.ino
```

```c++
> internal_led.ino

// O código do arduino é lido de cima para baixo, então iremos seguir esse padrão no tutorial!

/**
 * Iremos começar mapeando o pino conectado ao led interno armazenando o valor em uma variável:
 * Nesse exemplo, utilizamos a porta 13, pois ela é a porta conectada ao LED.
 */
const int const int InternalLed = 13;

//> Apõs isso, declaramos a função Arduino setup() que será responsável pela configuração do pino
void setup() {
}

/**
 * Na função setup(), configuramos então a porta utilizada para conexão com o LED e o modo como será utilizada.
 * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados.
 */
void setup() {
  pinMode(InternalLed, OUTPUT);
}

// Após configurar a porta, declaramos a função loop(), função do Arduino repsonsável pela repetição infinita do código
void loop() {
}

/**
 * Nela, iremos configurar um código simples que:
 * Acende o LED > Aguarda 1000 milissegundos > Apaga o LED > Aguarda 1000 milissegundos > retorna para o início da função.
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
} 
```
Para mais informações de como o código funciona, <a href="/internal_led.ino">Acesse o código aqui</a>

# :page_facing_up: Licença
Licença MIT. Para mais informações sobre a licença, <a href="/LICENSE">Clique aqui</a>

<img src="https://github.com/umroboporaluno/.github/blob/main/profile/ura-logo.png" alt="URA Logo" width="100" align="right" />
