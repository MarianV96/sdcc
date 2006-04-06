/* Register definitions for pic16f87.
 * This file was automatically generated by:
 *   inc2h.pl V1.6
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16f87.h>

data __at (INDF_ADDR) volatile char      INDF;
sfr  __at (TMR0_ADDR)                    TMR0;
data __at (PCL_ADDR) volatile char       PCL;
sfr  __at (STATUS_ADDR)                  STATUS;
sfr  __at (FSR_ADDR)                     FSR;
sfr  __at (PORTA_ADDR)                   PORTA;
sfr  __at (PORTB_ADDR)                   PORTB;
sfr  __at (PCLATH_ADDR)                  PCLATH;
sfr  __at (INTCON_ADDR)                  INTCON;
sfr  __at (PIR1_ADDR)                    PIR1;
sfr  __at (PIR2_ADDR)                    PIR2;
sfr  __at (TMR1L_ADDR)                   TMR1L;
sfr  __at (TMR1H_ADDR)                   TMR1H;
sfr  __at (T1CON_ADDR)                   T1CON;
sfr  __at (TMR2_ADDR)                    TMR2;
sfr  __at (T2CON_ADDR)                   T2CON;
sfr  __at (SSPBUF_ADDR)                  SSPBUF;
sfr  __at (SSPCON_ADDR)                  SSPCON;
sfr  __at (CCPR1L_ADDR)                  CCPR1L;
sfr  __at (CCPR1H_ADDR)                  CCPR1H;
sfr  __at (CCP1CON_ADDR)                 CCP1CON;
sfr  __at (RCSTA_ADDR)                   RCSTA;
sfr  __at (TXREG_ADDR)                   TXREG;
sfr  __at (RCREG_ADDR)                   RCREG;
sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
sfr  __at (TRISA_ADDR)                   TRISA;
sfr  __at (TRISB_ADDR)                   TRISB;
sfr  __at (PIE1_ADDR)                    PIE1;
sfr  __at (PIE2_ADDR)                    PIE2;
sfr  __at (PCON_ADDR)                    PCON;
sfr  __at (OSCCON_ADDR)                  OSCCON;
sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
sfr  __at (PR2_ADDR)                     PR2;
sfr  __at (SSPADD_ADDR)                  SSPADD;
sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
sfr  __at (TXSTA_ADDR)                   TXSTA;
sfr  __at (SPBRG_ADDR)                   SPBRG;
sfr  __at (CMCON_ADDR)                   CMCON;
sfr  __at (CVRCON_ADDR)                  CVRCON;
sfr  __at (WDTCON_ADDR)                  WDTCON;
sfr  __at (EEDATA_ADDR)                  EEDATA;
sfr  __at (EEADR_ADDR)                   EEADR;
sfr  __at (EEDATH_ADDR)                  EEDATH;
sfr  __at (EEADRH_ADDR)                  EEADRH;
sfr  __at (EECON1_ADDR)                  EECON1;
sfr  __at (EECON2_ADDR)                  EECON2;

// 
// bitfield definitions
// 
volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;
volatile __CMCON_bits_t __at(CMCON_ADDR) CMCON_bits;
volatile __CVRCON_bits_t __at(CVRCON_ADDR) CVRCON_bits;
volatile __EECON1_bits_t __at(EECON1_ADDR) EECON1_bits;
volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;
volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;
volatile __OSCCON_bits_t __at(OSCCON_ADDR) OSCCON_bits;
volatile __OSCTUNE_bits_t __at(OSCTUNE_ADDR) OSCTUNE_bits;
volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;
volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;
volatile __PIE2_bits_t __at(PIE2_ADDR) PIE2_bits;
volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;
volatile __PIR2_bits_t __at(PIR2_ADDR) PIR2_bits;
volatile __RCSTA_bits_t __at(RCSTA_ADDR) RCSTA_bits;
volatile __SSPCON_bits_t __at(SSPCON_ADDR) SSPCON_bits;
volatile __SSPSTAT_bits_t __at(SSPSTAT_ADDR) SSPSTAT_bits;
volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;
volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;
volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;
volatile __TXSTA_bits_t __at(TXSTA_ADDR) TXSTA_bits;
volatile __WDTCON_bits_t __at(WDTCON_ADDR) WDTCON_bits;

