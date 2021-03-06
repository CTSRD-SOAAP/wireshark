/******************************************************************************
** $Id$
**
** Copyright (C) 2006-2009 ascolab GmbH. All Rights Reserved.
** Web: http://www.ascolab.com
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Project: OpcUa Wireshark Plugin
**
** Description: Service table and service dispatcher.
**
** This file was autogenerated on 12.02.2013.
** DON'T MODIFY THIS FILE!
**
******************************************************************************/

#include "config.h"

#include <glib.h>
#include <epan/packet.h>
#include "opcua_identifiers.h"
#include "opcua_serviceparser.h"
#include "opcua_serviceids.h"

ParserEntry g_arParserTable[] = {
    { OpcUaId_FindServersRequest_Encoding_DefaultBinary, parseFindServersRequest },
    { OpcUaId_FindServersResponse_Encoding_DefaultBinary, parseFindServersResponse },
    { OpcUaId_GetEndpointsRequest_Encoding_DefaultBinary, parseGetEndpointsRequest },
    { OpcUaId_GetEndpointsResponse_Encoding_DefaultBinary, parseGetEndpointsResponse },
    { OpcUaId_RegisterServerRequest_Encoding_DefaultBinary, parseRegisterServerRequest },
    { OpcUaId_RegisterServerResponse_Encoding_DefaultBinary, parseRegisterServerResponse },
    { OpcUaId_OpenSecureChannelRequest_Encoding_DefaultBinary, parseOpenSecureChannelRequest },
    { OpcUaId_OpenSecureChannelResponse_Encoding_DefaultBinary, parseOpenSecureChannelResponse },
    { OpcUaId_CloseSecureChannelRequest_Encoding_DefaultBinary, parseCloseSecureChannelRequest },
    { OpcUaId_CloseSecureChannelResponse_Encoding_DefaultBinary, parseCloseSecureChannelResponse },
    { OpcUaId_CreateSessionRequest_Encoding_DefaultBinary, parseCreateSessionRequest },
    { OpcUaId_CreateSessionResponse_Encoding_DefaultBinary, parseCreateSessionResponse },
    { OpcUaId_ActivateSessionRequest_Encoding_DefaultBinary, parseActivateSessionRequest },
    { OpcUaId_ActivateSessionResponse_Encoding_DefaultBinary, parseActivateSessionResponse },
    { OpcUaId_CloseSessionRequest_Encoding_DefaultBinary, parseCloseSessionRequest },
    { OpcUaId_CloseSessionResponse_Encoding_DefaultBinary, parseCloseSessionResponse },
    { OpcUaId_CancelRequest_Encoding_DefaultBinary, parseCancelRequest },
    { OpcUaId_CancelResponse_Encoding_DefaultBinary, parseCancelResponse },
    { OpcUaId_AddNodesRequest_Encoding_DefaultBinary, parseAddNodesRequest },
    { OpcUaId_AddNodesResponse_Encoding_DefaultBinary, parseAddNodesResponse },
    { OpcUaId_AddReferencesRequest_Encoding_DefaultBinary, parseAddReferencesRequest },
    { OpcUaId_AddReferencesResponse_Encoding_DefaultBinary, parseAddReferencesResponse },
    { OpcUaId_DeleteNodesRequest_Encoding_DefaultBinary, parseDeleteNodesRequest },
    { OpcUaId_DeleteNodesResponse_Encoding_DefaultBinary, parseDeleteNodesResponse },
    { OpcUaId_DeleteReferencesRequest_Encoding_DefaultBinary, parseDeleteReferencesRequest },
    { OpcUaId_DeleteReferencesResponse_Encoding_DefaultBinary, parseDeleteReferencesResponse },
    { OpcUaId_BrowseRequest_Encoding_DefaultBinary, parseBrowseRequest },
    { OpcUaId_BrowseResponse_Encoding_DefaultBinary, parseBrowseResponse },
    { OpcUaId_BrowseNextRequest_Encoding_DefaultBinary, parseBrowseNextRequest },
    { OpcUaId_BrowseNextResponse_Encoding_DefaultBinary, parseBrowseNextResponse },
    { OpcUaId_TranslateBrowsePathsToNodeIdsRequest_Encoding_DefaultBinary, parseTranslateBrowsePathsToNodeIdsRequest },
    { OpcUaId_TranslateBrowsePathsToNodeIdsResponse_Encoding_DefaultBinary, parseTranslateBrowsePathsToNodeIdsResponse },
    { OpcUaId_RegisterNodesRequest_Encoding_DefaultBinary, parseRegisterNodesRequest },
    { OpcUaId_RegisterNodesResponse_Encoding_DefaultBinary, parseRegisterNodesResponse },
    { OpcUaId_UnregisterNodesRequest_Encoding_DefaultBinary, parseUnregisterNodesRequest },
    { OpcUaId_UnregisterNodesResponse_Encoding_DefaultBinary, parseUnregisterNodesResponse },
    { OpcUaId_QueryFirstRequest_Encoding_DefaultBinary, parseQueryFirstRequest },
    { OpcUaId_QueryFirstResponse_Encoding_DefaultBinary, parseQueryFirstResponse },
    { OpcUaId_QueryNextRequest_Encoding_DefaultBinary, parseQueryNextRequest },
    { OpcUaId_QueryNextResponse_Encoding_DefaultBinary, parseQueryNextResponse },
    { OpcUaId_ReadRequest_Encoding_DefaultBinary, parseReadRequest },
    { OpcUaId_ReadResponse_Encoding_DefaultBinary, parseReadResponse },
    { OpcUaId_HistoryReadRequest_Encoding_DefaultBinary, parseHistoryReadRequest },
    { OpcUaId_HistoryReadResponse_Encoding_DefaultBinary, parseHistoryReadResponse },
    { OpcUaId_WriteRequest_Encoding_DefaultBinary, parseWriteRequest },
    { OpcUaId_WriteResponse_Encoding_DefaultBinary, parseWriteResponse },
    { OpcUaId_HistoryUpdateRequest_Encoding_DefaultBinary, parseHistoryUpdateRequest },
    { OpcUaId_HistoryUpdateResponse_Encoding_DefaultBinary, parseHistoryUpdateResponse },
    { OpcUaId_CallRequest_Encoding_DefaultBinary, parseCallRequest },
    { OpcUaId_CallResponse_Encoding_DefaultBinary, parseCallResponse },
    { OpcUaId_CreateMonitoredItemsRequest_Encoding_DefaultBinary, parseCreateMonitoredItemsRequest },
    { OpcUaId_CreateMonitoredItemsResponse_Encoding_DefaultBinary, parseCreateMonitoredItemsResponse },
    { OpcUaId_ModifyMonitoredItemsRequest_Encoding_DefaultBinary, parseModifyMonitoredItemsRequest },
    { OpcUaId_ModifyMonitoredItemsResponse_Encoding_DefaultBinary, parseModifyMonitoredItemsResponse },
    { OpcUaId_SetMonitoringModeRequest_Encoding_DefaultBinary, parseSetMonitoringModeRequest },
    { OpcUaId_SetMonitoringModeResponse_Encoding_DefaultBinary, parseSetMonitoringModeResponse },
    { OpcUaId_SetTriggeringRequest_Encoding_DefaultBinary, parseSetTriggeringRequest },
    { OpcUaId_SetTriggeringResponse_Encoding_DefaultBinary, parseSetTriggeringResponse },
    { OpcUaId_DeleteMonitoredItemsRequest_Encoding_DefaultBinary, parseDeleteMonitoredItemsRequest },
    { OpcUaId_DeleteMonitoredItemsResponse_Encoding_DefaultBinary, parseDeleteMonitoredItemsResponse },
    { OpcUaId_CreateSubscriptionRequest_Encoding_DefaultBinary, parseCreateSubscriptionRequest },
    { OpcUaId_CreateSubscriptionResponse_Encoding_DefaultBinary, parseCreateSubscriptionResponse },
    { OpcUaId_ModifySubscriptionRequest_Encoding_DefaultBinary, parseModifySubscriptionRequest },
    { OpcUaId_ModifySubscriptionResponse_Encoding_DefaultBinary, parseModifySubscriptionResponse },
    { OpcUaId_SetPublishingModeRequest_Encoding_DefaultBinary, parseSetPublishingModeRequest },
    { OpcUaId_SetPublishingModeResponse_Encoding_DefaultBinary, parseSetPublishingModeResponse },
    { OpcUaId_PublishRequest_Encoding_DefaultBinary, parsePublishRequest },
    { OpcUaId_PublishResponse_Encoding_DefaultBinary, parsePublishResponse },
    { OpcUaId_RepublishRequest_Encoding_DefaultBinary, parseRepublishRequest },
    { OpcUaId_RepublishResponse_Encoding_DefaultBinary, parseRepublishResponse },
    { OpcUaId_TransferSubscriptionsRequest_Encoding_DefaultBinary, parseTransferSubscriptionsRequest },
    { OpcUaId_TransferSubscriptionsResponse_Encoding_DefaultBinary, parseTransferSubscriptionsResponse },
    { OpcUaId_DeleteSubscriptionsRequest_Encoding_DefaultBinary, parseDeleteSubscriptionsRequest },
    { OpcUaId_DeleteSubscriptionsResponse_Encoding_DefaultBinary, parseDeleteSubscriptionsResponse },
    { OpcUaId_TestStackRequest_Encoding_DefaultBinary, parseTestStackRequest },
    { OpcUaId_TestStackResponse_Encoding_DefaultBinary, parseTestStackResponse },
    { OpcUaId_TestStackExRequest_Encoding_DefaultBinary, parseTestStackExRequest },
    { OpcUaId_TestStackExResponse_Encoding_DefaultBinary, parseTestStackExResponse },
};
const int g_NumServices = sizeof(g_arParserTable) / sizeof(ParserEntry);

/** Service type table */
const value_string g_requesttypes[] = {
    { OpcUaId_FindServersRequest_Encoding_DefaultBinary, "FindServersRequest" },
    { OpcUaId_FindServersResponse_Encoding_DefaultBinary, "FindServersResponse" },
    { OpcUaId_GetEndpointsRequest_Encoding_DefaultBinary, "GetEndpointsRequest" },
    { OpcUaId_GetEndpointsResponse_Encoding_DefaultBinary, "GetEndpointsResponse" },
    { OpcUaId_RegisterServerRequest_Encoding_DefaultBinary, "RegisterServerRequest" },
    { OpcUaId_RegisterServerResponse_Encoding_DefaultBinary, "RegisterServerResponse" },
    { OpcUaId_OpenSecureChannelRequest_Encoding_DefaultBinary, "OpenSecureChannelRequest" },
    { OpcUaId_OpenSecureChannelResponse_Encoding_DefaultBinary, "OpenSecureChannelResponse" },
    { OpcUaId_CloseSecureChannelRequest_Encoding_DefaultBinary, "CloseSecureChannelRequest" },
    { OpcUaId_CloseSecureChannelResponse_Encoding_DefaultBinary, "CloseSecureChannelResponse" },
    { OpcUaId_CreateSessionRequest_Encoding_DefaultBinary, "CreateSessionRequest" },
    { OpcUaId_CreateSessionResponse_Encoding_DefaultBinary, "CreateSessionResponse" },
    { OpcUaId_ActivateSessionRequest_Encoding_DefaultBinary, "ActivateSessionRequest" },
    { OpcUaId_ActivateSessionResponse_Encoding_DefaultBinary, "ActivateSessionResponse" },
    { OpcUaId_CloseSessionRequest_Encoding_DefaultBinary, "CloseSessionRequest" },
    { OpcUaId_CloseSessionResponse_Encoding_DefaultBinary, "CloseSessionResponse" },
    { OpcUaId_CancelRequest_Encoding_DefaultBinary, "CancelRequest" },
    { OpcUaId_CancelResponse_Encoding_DefaultBinary, "CancelResponse" },
    { OpcUaId_AddNodesRequest_Encoding_DefaultBinary, "AddNodesRequest" },
    { OpcUaId_AddNodesResponse_Encoding_DefaultBinary, "AddNodesResponse" },
    { OpcUaId_AddReferencesRequest_Encoding_DefaultBinary, "AddReferencesRequest" },
    { OpcUaId_AddReferencesResponse_Encoding_DefaultBinary, "AddReferencesResponse" },
    { OpcUaId_DeleteNodesRequest_Encoding_DefaultBinary, "DeleteNodesRequest" },
    { OpcUaId_DeleteNodesResponse_Encoding_DefaultBinary, "DeleteNodesResponse" },
    { OpcUaId_DeleteReferencesRequest_Encoding_DefaultBinary, "DeleteReferencesRequest" },
    { OpcUaId_DeleteReferencesResponse_Encoding_DefaultBinary, "DeleteReferencesResponse" },
    { OpcUaId_BrowseRequest_Encoding_DefaultBinary, "BrowseRequest" },
    { OpcUaId_BrowseResponse_Encoding_DefaultBinary, "BrowseResponse" },
    { OpcUaId_BrowseNextRequest_Encoding_DefaultBinary, "BrowseNextRequest" },
    { OpcUaId_BrowseNextResponse_Encoding_DefaultBinary, "BrowseNextResponse" },
    { OpcUaId_TranslateBrowsePathsToNodeIdsRequest_Encoding_DefaultBinary, "TranslateBrowsePathsToNodeIdsRequest" },
    { OpcUaId_TranslateBrowsePathsToNodeIdsResponse_Encoding_DefaultBinary, "TranslateBrowsePathsToNodeIdsResponse" },
    { OpcUaId_RegisterNodesRequest_Encoding_DefaultBinary, "RegisterNodesRequest" },
    { OpcUaId_RegisterNodesResponse_Encoding_DefaultBinary, "RegisterNodesResponse" },
    { OpcUaId_UnregisterNodesRequest_Encoding_DefaultBinary, "UnregisterNodesRequest" },
    { OpcUaId_UnregisterNodesResponse_Encoding_DefaultBinary, "UnregisterNodesResponse" },
    { OpcUaId_QueryFirstRequest_Encoding_DefaultBinary, "QueryFirstRequest" },
    { OpcUaId_QueryFirstResponse_Encoding_DefaultBinary, "QueryFirstResponse" },
    { OpcUaId_QueryNextRequest_Encoding_DefaultBinary, "QueryNextRequest" },
    { OpcUaId_QueryNextResponse_Encoding_DefaultBinary, "QueryNextResponse" },
    { OpcUaId_ReadRequest_Encoding_DefaultBinary, "ReadRequest" },
    { OpcUaId_ReadResponse_Encoding_DefaultBinary, "ReadResponse" },
    { OpcUaId_HistoryReadRequest_Encoding_DefaultBinary, "HistoryReadRequest" },
    { OpcUaId_HistoryReadResponse_Encoding_DefaultBinary, "HistoryReadResponse" },
    { OpcUaId_WriteRequest_Encoding_DefaultBinary, "WriteRequest" },
    { OpcUaId_WriteResponse_Encoding_DefaultBinary, "WriteResponse" },
    { OpcUaId_HistoryUpdateRequest_Encoding_DefaultBinary, "HistoryUpdateRequest" },
    { OpcUaId_HistoryUpdateResponse_Encoding_DefaultBinary, "HistoryUpdateResponse" },
    { OpcUaId_CallRequest_Encoding_DefaultBinary, "CallRequest" },
    { OpcUaId_CallResponse_Encoding_DefaultBinary, "CallResponse" },
    { OpcUaId_CreateMonitoredItemsRequest_Encoding_DefaultBinary, "CreateMonitoredItemsRequest" },
    { OpcUaId_CreateMonitoredItemsResponse_Encoding_DefaultBinary, "CreateMonitoredItemsResponse" },
    { OpcUaId_ModifyMonitoredItemsRequest_Encoding_DefaultBinary, "ModifyMonitoredItemsRequest" },
    { OpcUaId_ModifyMonitoredItemsResponse_Encoding_DefaultBinary, "ModifyMonitoredItemsResponse" },
    { OpcUaId_SetMonitoringModeRequest_Encoding_DefaultBinary, "SetMonitoringModeRequest" },
    { OpcUaId_SetMonitoringModeResponse_Encoding_DefaultBinary, "SetMonitoringModeResponse" },
    { OpcUaId_SetTriggeringRequest_Encoding_DefaultBinary, "SetTriggeringRequest" },
    { OpcUaId_SetTriggeringResponse_Encoding_DefaultBinary, "SetTriggeringResponse" },
    { OpcUaId_DeleteMonitoredItemsRequest_Encoding_DefaultBinary, "DeleteMonitoredItemsRequest" },
    { OpcUaId_DeleteMonitoredItemsResponse_Encoding_DefaultBinary, "DeleteMonitoredItemsResponse" },
    { OpcUaId_CreateSubscriptionRequest_Encoding_DefaultBinary, "CreateSubscriptionRequest" },
    { OpcUaId_CreateSubscriptionResponse_Encoding_DefaultBinary, "CreateSubscriptionResponse" },
    { OpcUaId_ModifySubscriptionRequest_Encoding_DefaultBinary, "ModifySubscriptionRequest" },
    { OpcUaId_ModifySubscriptionResponse_Encoding_DefaultBinary, "ModifySubscriptionResponse" },
    { OpcUaId_SetPublishingModeRequest_Encoding_DefaultBinary, "SetPublishingModeRequest" },
    { OpcUaId_SetPublishingModeResponse_Encoding_DefaultBinary, "SetPublishingModeResponse" },
    { OpcUaId_PublishRequest_Encoding_DefaultBinary, "PublishRequest" },
    { OpcUaId_PublishResponse_Encoding_DefaultBinary, "PublishResponse" },
    { OpcUaId_RepublishRequest_Encoding_DefaultBinary, "RepublishRequest" },
    { OpcUaId_RepublishResponse_Encoding_DefaultBinary, "RepublishResponse" },
    { OpcUaId_TransferSubscriptionsRequest_Encoding_DefaultBinary, "TransferSubscriptionsRequest" },
    { OpcUaId_TransferSubscriptionsResponse_Encoding_DefaultBinary, "TransferSubscriptionsResponse" },
    { OpcUaId_DeleteSubscriptionsRequest_Encoding_DefaultBinary, "DeleteSubscriptionsRequest" },
    { OpcUaId_DeleteSubscriptionsResponse_Encoding_DefaultBinary, "DeleteSubscriptionsResponse" },
    { OpcUaId_TestStackRequest_Encoding_DefaultBinary, "TestStackRequest" },
    { OpcUaId_TestStackResponse_Encoding_DefaultBinary, "TestStackResponse" },
    { OpcUaId_TestStackExRequest_Encoding_DefaultBinary, "TestStackExRequest" },
    { OpcUaId_TestStackExResponse_Encoding_DefaultBinary, "TestStackExResponse" },
    { 0, NULL }
};

/** Dispatch all services to a special parser function. */
void dispatchService(proto_tree *tree, tvbuff_t *tvb, gint *pOffset, int ServiceId)
{
    int indx = 0;

    while (indx < g_NumServices)
    {
        if (g_arParserTable[indx].iRequestId == ServiceId)
        {
            (*g_arParserTable[indx].pParser)(tree, tvb, pOffset);
            break;
        }
        indx++;
    }
}

