#ifndef ESTADOS_H_INCLUDED
#define ESTADOS_H_INCLUDED

typedef enum {INICIO, MENSAGEM, SENHA1, SENHA2, SENHA3, SENHA4, SENHA_ERRADA, LEITURAS1, LEITURAS2, ALARME,
ALARME_ALTO, ALARME_BAIXO, Freq_ATualizacao_100, Freq_ATualizacao_150, Freq_ATualizacao_200, LDR, POT, CONFIGURAR_DATA, CONF_DIA,
CONF_MES, CONF_ANO, CONF_LDR_INF, CONF_LDR_SUP, ESTADO_ALARME_LDR, LDR_Desliga, LDR_Liga,
CONF_POT_INF, CONF_POT_SUP, ESTADO_ALARME_POT, POT_Desliga, POT_Liga, Freq_Alarme, OPERACOES_PLACA, CONFIGURACOES_PLACA, CONFIGURAR_LED,
FREQ_ATUALIZACAO, DATA_FINALIZADO, LED_FINALIZADO, FREQ_FINALIZADO, LDR_FINALIZADO, POT_FINALIZADO}Estados_enum;

#endif /* ESTADOS_H_INCLUDED */
