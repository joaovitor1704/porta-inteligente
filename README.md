# porta-inteligente
Projeto: Porta inteligente com Arduino 
Como prometido no post passado hoje vou mostrar um projeto em que o objetivo é: Construir um prototipo de uma porta ou portão inteligente usando
sensor ultrasonico, servo motor e um led. A principio o projeto é simples, e pode ser aplicado em rotinas diárias onde é necessário algum tipo 
de automação e/ou inteligência em ambientes como casas, lojas etc.
Bem, onde e como se encaixam os componentes do projeto: O sensor ultrasonico verifica a distancia de uma pessoa até a porta ou portão, se essa 
distancia for igual a um determinado valor o servo motor é acionado fazendo com que a porta se abra e logo após liga o led, então espera-se um 
determinado tempo para que a pessoa possa entrar ou sair do ambiente e novamente é verificado a distancia, caso a distancia seja maior que o
valor estipulado o servo motor é acionado novamente fechando a porta e o led (luz) apaga. Simples não?!
