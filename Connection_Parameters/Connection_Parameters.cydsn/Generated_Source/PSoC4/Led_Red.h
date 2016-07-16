/*******************************************************************************
* File Name: Led_Red.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Led_Red_H) /* Pins Led_Red_H */
#define CY_PINS_Led_Red_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Led_Red_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Led_Red_Write(uint8 value) ;
void    Led_Red_SetDriveMode(uint8 mode) ;
uint8   Led_Red_ReadDataReg(void) ;
uint8   Led_Red_Read(void) ;
uint8   Led_Red_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Led_Red_DRIVE_MODE_BITS        (3)
#define Led_Red_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Led_Red_DRIVE_MODE_BITS))

#define Led_Red_DM_ALG_HIZ         (0x00u)
#define Led_Red_DM_DIG_HIZ         (0x01u)
#define Led_Red_DM_RES_UP          (0x02u)
#define Led_Red_DM_RES_DWN         (0x03u)
#define Led_Red_DM_OD_LO           (0x04u)
#define Led_Red_DM_OD_HI           (0x05u)
#define Led_Red_DM_STRONG          (0x06u)
#define Led_Red_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Led_Red_MASK               Led_Red__MASK
#define Led_Red_SHIFT              Led_Red__SHIFT
#define Led_Red_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Led_Red_PS                     (* (reg32 *) Led_Red__PS)
/* Port Configuration */
#define Led_Red_PC                     (* (reg32 *) Led_Red__PC)
/* Data Register */
#define Led_Red_DR                     (* (reg32 *) Led_Red__DR)
/* Input Buffer Disable Override */
#define Led_Red_INP_DIS                (* (reg32 *) Led_Red__PC2)


#if defined(Led_Red__INTSTAT)  /* Interrupt Registers */

    #define Led_Red_INTSTAT                (* (reg32 *) Led_Red__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Led_Red_DRIVE_MODE_SHIFT       (0x00u)
#define Led_Red_DRIVE_MODE_MASK        (0x07u << Led_Red_DRIVE_MODE_SHIFT)


#endif /* End Pins Led_Red_H */


/* [] END OF FILE */
