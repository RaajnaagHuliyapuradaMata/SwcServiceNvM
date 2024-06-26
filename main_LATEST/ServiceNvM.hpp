#pragma once
/******************************************************************************/
/* File   : ServiceNvM.hpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceNvM.hpp"
#include "CfgServiceNvM.hpp"
#include "ServiceNvM_core.hpp"
#include "infServiceNvM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceNvM:
      INTERFACES_EXPORTED_SERVICENVM
      public abstract_module
   ,  public class_ServiceNvM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceNvM_Type* lptrConst = (ConstServiceNvM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICENVM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICENVM_CONST,       SERVICENVM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICENVM_CONFIG_DATA, SERVICENVM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICENVM_CODE) DeInitFunction (void);
      FUNC(void, SERVICENVM_CODE) MainFunction   (void);
      SERVICENVM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceNvM, SERVICENVM_VAR) ServiceNvM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

