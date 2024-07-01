# Projeto-Arduino
Projeto que envolve tanto Hardware quanto Software.

## Grupo
- [Juan Henriques Passos](https://github.com/JuanHPassos)
- Kattryel
- Marcos Cota
- Keren

## Informações
- **Disciplina:** Eletrônica para Computação
- **Professor:** Eduardo do Valle Simões
- **Curso:** Bacharelado em Ciência da Computação
- **Turma:** BCC-B / 2024

## Projeto
![Imagem_do_proj_final](semimagemporhora.png)

## Lista de Componentes

| Quantidade | Componentes                  | Valor (R$) |
|------------|------------------------------|------------|
| 1x         | Protoboard 400 pontos     | [R$12,50](https://www.baudaeletronica.com.br/produto/protoboard-400-pontos.html)     |
| 1x         | Arduino Uno + Cabo USB 2.0   | [R$70,00](https://www.baudaeletronica.com.br/produto/arduino-uno-r3.html)    |
| 1x         | Jumpers        | [R$14,80](https://www.baudaeletronica.com.br/buscar?q=junmpers)    |
| 1x        | Chave Táctil 6x6x4,3mm 4 Terminais  | [R$00,25](https://www.baudaeletronica.com.br/produto/chave-tactil-6x6x43mm-4-terminais.html)   |
| 1x         | Display LCD 16x2 (Azul)   | [R$19,90](https://www.baudaeletronica.com.br/produto/display-lcd-16x2-azul.html)     |
| 1x         | Resistor 560 ohm             | [R$00,50](https://produto.mercadolivre.com.br/MLB-4414488984-kit-de-resistores-14w-560-unidades-56-valores-na-maleta-_JM#position=7&search_layout=grid&type=item&tracking_id=278db833-3cb6-49ba-b34c-e3577864dad3)
| **Total**  |                              | **R$103,65** |

## Funcionamento dos Componentes
- Placa Arduino: São placas de circuito impresso que contêm um microcontrolador, interfaces de entrada/saída (I/O) e pinos de conexão para facilitar a interação com componentes eletrônicos externos. Nesse contexto, o Arduino faz a interligação do circuito com o motor de passo.
- Cabo USB 2.0: faz a conexão entre o computador com código programado em Arduino e a placa Arduino Uno.
- Protoboard: placa de ensaio projetada para facilitar a montagem e teste de circuitos eletrônicos. Neste caso,em conjunto com os jumpers,ela auxilia a conectar eletricamente o circuito.
- Jumpers: referem-se a fios ou conectores utilizados para estabelecer conexões entre componentes eletrônicos, pinos ou pontos específicos em um circuito. Neste caso, foram utilizados jumpers do tipo macho/macho e macho/fêmea, de forma a interligar o Arduino, a protoboard, e ao motor de passo por meio do Drive ULN2003.
- Chave Táctil: Uma chave táctil é um tipo de interruptor que detecta toque ou pressão suave, usado para enviar sinais elétricos em dispositivos eletrônicos, como controles remotos e painéis de controle. Ela permite uma interface de usuário simples e compacta para ativar ou desativar funções. Nessa caso, ela liga desliga o motor.
- Display LCD 16x2(Azul): Um display LCD 16x2 é uma tela de cristal líquido que mostra até 32 caracteres em duas linhas de 16 caracteres. Ele possui um controlador embutido, como o HD44780, que gerencia os dados e atualiza a tela. A interface inclui pinos de controle e dados, além de alimentação e contraste. Muitos modelos têm uma luz de fundo (backlight) para melhor visibilidade. Nesse projeto, ele é usado para a exibição do jogo.

## Protótipo do Circuito - Tinkercad
Acesse a simulação pelo [link](https://www.tinkercad.com/things/gkktJQ80Vfb-jogo-arduino)
![Protótipo](Imagens_proj/Motor.jpg)

