/*
 *
 * Copyright (C) 2012 by Cambridge Silicon Radio Ltd.
 *
 * Refer to LICENSE.txt included with this source code for details on
 * the license terms.
 *
 */

/* Note: this is an auto-generated file. */

#include "csr_pmem.h"
#include "csr_wifi_router_ctrl_prim.h"
#include "csr_wifi_router_ctrl_lib.h"

/*----------------------------------------------------------------------------*
 *  NAME
 *      CsrWifiRouterCtrlFreeDownstreamMessageContents
 *
 *  DESCRIPTION
 *
 *
 *  PARAMETERS
 *      eventClass: only the value CSR_WIFI_ROUTER_CTRL_PRIM will be handled
 *      message:    the message to free
 *----------------------------------------------------------------------------*/
void CsrWifiRouterCtrlFreeDownstreamMessageContents(CsrUint16 eventClass, void *message)
{
    if (eventClass != CSR_WIFI_ROUTER_CTRL_PRIM)
    {
        return;
    }
    if (NULL == message)
    {
        return;
    }

    switch (*((CsrWifiRouterCtrlPrim *) message))
    {
        case CSR_WIFI_ROUTER_CTRL_HIP_REQ:
        {
            CsrWifiRouterCtrlHipReq *p = (CsrWifiRouterCtrlHipReq *)message;
            CsrPmemFree(p->mlmeCommand);
            p->mlmeCommand = NULL;
            CsrPmemFree(p->dataRef1);
            p->dataRef1 = NULL;
            CsrPmemFree(p->dataRef2);
            p->dataRef2 = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_MULTICAST_ADDRESS_RES:
        {
            CsrWifiRouterCtrlMulticastAddressRes *p = (CsrWifiRouterCtrlMulticastAddressRes *)message;
            CsrPmemFree(p->getAddresses);
            p->getAddresses = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_TCLAS_ADD_REQ:
        {
            CsrWifiRouterCtrlTclasAddReq *p = (CsrWifiRouterCtrlTclasAddReq *)message;
            CsrPmemFree(p->tclas);
            p->tclas = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_TCLAS_DEL_REQ:
        {
            CsrWifiRouterCtrlTclasDelReq *p = (CsrWifiRouterCtrlTclasDelReq *)message;
            CsrPmemFree(p->tclas);
            p->tclas = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_WIFI_ON_REQ:
        {
            CsrWifiRouterCtrlWifiOnReq *p = (CsrWifiRouterCtrlWifiOnReq *)message;
            CsrPmemFree(p->data);
            p->data = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_WIFI_ON_RES:
        {
            CsrWifiRouterCtrlWifiOnRes *p = (CsrWifiRouterCtrlWifiOnRes *)message;
            CsrPmemFree(p->smeVersions.smeBuild);
            p->smeVersions.smeBuild = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_WAPI_RX_PKT_REQ:
        {
            CsrWifiRouterCtrlWapiRxPktReq *p = (CsrWifiRouterCtrlWapiRxPktReq *)message;
            CsrPmemFree(p->signal);
            p->signal = NULL;
            CsrPmemFree(p->data);
            p->data = NULL;
            break;
        }
        case CSR_WIFI_ROUTER_CTRL_WAPI_UNICAST_TX_PKT_REQ:
        {
            CsrWifiRouterCtrlWapiUnicastTxPktReq *p = (CsrWifiRouterCtrlWapiUnicastTxPktReq *)message;
            CsrPmemFree(p->data);
            p->data = NULL;
            break;
        }

        default:
            break;
    }
}


