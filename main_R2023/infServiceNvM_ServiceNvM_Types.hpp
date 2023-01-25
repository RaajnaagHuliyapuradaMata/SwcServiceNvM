#pragma once
/******************************************************************************/
/* File   : infServiceNvM_ServiceNvM_Types.hpp                                */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabMemIf_ServiceNvM.hpp"

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceNvM_Type:
      public ConstModule_TypeAbstract
{
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
   public:
      infEcuabMemIf_ServiceNvM* ptrinfEcuabMemIf_ServiceNvM;
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

