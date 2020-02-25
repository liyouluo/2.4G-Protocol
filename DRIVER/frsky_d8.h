#ifndef __FRSKY_D8_
#define __FRSKY_D8_

#include <stdbool.h>
#include "stm32f0xx.h"
#include "main.h"
#define THR_Output_Max 1995 
#define THR_Output_Mid 1500
#define THR_Output_Min 1005

#define Output_Max 2012 
#define Output_Mid 1500
#define Output_Min 988

extern uint8_t Version_select_flag;

extern bool CommunicationError_flg ;

//#define RF_TypeVersion		      0x44				//遥控器类型 'F'->FRSKYD16
#define MasterInitProtocolVersion 0x01					//无线协议版本
#define PTOTOCOL_MAX_CHANNEL      8						//协议最大支持通道数量
#define TRANSMITTER_CHANNEL       8

extern bool CommunicationError_flg ; 
extern bool HighThrottle_flg ; 
extern bool Bind_flg ; 
extern uint16_t TransmitterID ; 

extern const uint8_t FRSKYD8_CH_Code[8];
void initFRSKYD8(void);
uint16_t ReadFRSKYD8(void);
void D8_SetBind(void) ; 
void FRSKYD8_build_Data_packet(void);

#endif
