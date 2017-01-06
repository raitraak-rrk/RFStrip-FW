#ifndef LIGHTBINDINGS_H
#define LIGHTBINDINGS_H


// N_Connection
#define N_Connection_Subscribe N_ConnectionRouter_Subscribe_Impl
#define N_Connection_JoinNetwork N_ConnectionRouter_JoinNetwork_Impl
#define N_Connection_UpdateNetwork N_ConnectionRouter_UpdateNetwork_Impl
#define N_Connection_IsConnected N_ConnectionRouter_IsConnected_Impl
#define N_Connection_Reconnect N_ConnectionRouter_Reconnect_Impl
#define N_Connection_ReconnectUrgent N_ConnectionRouter_ReconnectUrgent_Impl
#define N_Connection_SetInitiatorInterPanModeOn N_ConnectionRouter_SetInitiatorInterPanModeOn_Impl
#define N_Connection_SetInitiatorInterPanModeOff N_ConnectionRouter_SetInitiatorInterPanModeOff_Impl
#define N_Connection_SetTargetInterPanModeOn N_ConnectionRouter_SetTargetInterPanModeOn_Impl
#define N_Connection_SetTargetInterPanModeOff N_ConnectionRouter_SetTargetInterPanModeOff_Impl
#define N_Connection_SetInterPanModeOn N_ConnectionRouter_SetInterPanModeOn_Impl
#define N_Connection_SetInterPanModeOff N_ConnectionRouter_SetInterPanModeOff_Impl
#define N_Connection_SetPollRate N_ConnectionRouter_SetPollRate_Impl
#define N_Connection_ForceNormalPolling N_ConnectionRouter_ForceNormalPolling_Impl
#define N_Connection_FindFreePan N_ConnectionRouter_FindFreePan_Impl
#define N_Connection_SendNetworkLeaveIndication N_ConnectionRouter_SendNetworkLeaveIndication_Impl
#define N_Connection_LeaveNetwork N_ConnectionRouter_LeaveNetwork_Impl

#define N_Connection_AssociateDiscovery N_Connection_AssociateDiscovery_Impl
#define N_Connection_AbortAssociateDiscovery N_Connection_AbortAssociateDiscovery_Impl
#define N_Connection_AssociateJoin N_Connection_AssociateJoin_Impl

#define N_Connection_TargetIsInterpanModeOn N_Connection_TargetIsInterpanModeOn_Impl

// N_LinkTarget
#define N_LinkTarget_Subscribe N_LinkTarget_Subscribe_Impl
#define N_LinkTarget_SetTargetType N_LinkTarget_SetTargetType_Impl
#define N_LinkTarget_SetTouchlinkPriority N_LinkTarget_SetTouchlinkPriority_Impl
#define N_LinkTarget_AllowStealing N_LinkTarget_AllowStealing_Impl

// S_Nv
#  define S_Nv_EraseAll S_Nv_EraseAll_Impl

// N_Cmi
#  define N_Cmi_Subscribe N_Cmi_Subscribe_Impl
#  define N_Cmi_StartNetworking N_Cmi_StartNetworking_Impl
#  define N_Cmi_StartRouter N_Cmi_StartRouter_Impl
#  define N_Cmi_SetMacChannel N_Cmi_SetMacChannel_Impl
#  define N_Cmi_UpdateNetworkChannel N_Cmi_UpdateNetworkChannel_Impl
#  define N_Cmi_NetworkDiscovery N_Cmi_NetworkDiscovery_Impl
#  define N_Cmi_SendLinkStatus N_Cmi_SendLinkStatus_Impl
#  define N_Cmi_Join N_Cmi_Join_Impl
#  define N_Cmi_ResetNetworkSettings N_Cmi_ResetNetworkSettings_Impl
#  define N_Cmi_GetNetworkParams N_Cmi_GetNetworkParams_Impl
#  define N_Cmi_GetParentInfo N_Cmi_GetParentInfo_Impl
#  define N_Cmi_SwitchNetworkKey N_Cmi_SwitchNetworkKey_Impl
#  define N_Cmi_GetTotalTransmissions N_Cmi_GetTotalTransmissions_Impl
#  define N_Cmi_EnergyDetectScan N_Cmi_EnergyDetectScan_Impl
#  define N_Cmi_SendLeaveIndication N_Cmi_SendLeaveIndication_Impl
#  define N_Cmi_ProcessLeaveIndication N_Cmi_ProcessLeaveIndication_Impl
#  define N_Cmi_SendUpdateDevice N_Cmi_SendUpdateDevice_Impl
#  define N_Cmi_DataRequest N_Cmi_DataRequest_Impl
#  define N_Cmi_SetZllLinkKeyAsPrimary N_Cmi_SetZllLinkKeyAsPrimary_Impl
#  define N_Cmi_UseNwkMulticast N_Cmi_UseNwkMulticast_Impl
#  define N_Cmi_InitMacLayer N_Cmi_InitMacLayer_Impl
#  define N_Cmi_SetPollRateForTimePeriod N_Cmi_SetPollRateForTimePeriod_Impl

// N_DeviceInfo
#define N_DeviceInfo_Subscribe N_DeviceInfo_Subscribe_Impl
#define N_DeviceInfo_GetPlatformVersion N_DeviceInfo_GetPlatformVersion_Impl
#define N_DeviceInfo_GetBuildDateStr N_DeviceInfo_GetBuildDateStr_Impl
#define N_DeviceInfo_GetTouchlinkRssiCorrection N_DeviceInfo_GetTouchlinkRssiCorrection_Impl
#define N_DeviceInfo_GetTouchlinkRssiThreshold N_DeviceInfo_GetTouchlinkRssiThreshold_Impl
#define N_DeviceInfo_GetNetworkPanId N_DeviceInfo_GetNetworkPanId_Impl
#define N_DeviceInfo_GetNetworkExtendedPanId N_DeviceInfo_GetNetworkExtendedPanId_Impl
#define N_DeviceInfo_GetNetworkAddress N_DeviceInfo_GetNetworkAddress_Impl
#define N_DeviceInfo_GetParentNetworkAddress N_DeviceInfo_GetParentNetworkAddress_Impl
#define N_DeviceInfo_GetIEEEAddress N_DeviceInfo_GetIEEEAddress_Impl
#define N_DeviceInfo_GetParentIEEEAddress N_DeviceInfo_GetParentIEEEAddress_Impl
#define N_DeviceInfo_GetNetworkChannel N_DeviceInfo_GetNetworkChannel_Impl
#define N_DeviceInfo_GetNetworkUpdateId N_DeviceInfo_GetNetworkUpdateId_Impl
#define N_DeviceInfo_IsFactoryNew N_DeviceInfo_IsFactoryNew_Impl
#define N_DeviceInfo_IsEndDevice N_DeviceInfo_IsEndDevice_Impl
#define N_DeviceInfo_GetPrimaryChannelMask N_DeviceInfo_GetPrimaryChannelMask_Impl
#define N_DeviceInfo_GetSecondaryChannelMask N_DeviceInfo_GetSecondaryChannelMask_Impl
#define N_DeviceInfo_GetNrChannelsInChannelMask N_DeviceInfo_GetNrChannelsInChannelMask_Impl
#define N_DeviceInfo_GetChannelForIndex N_DeviceInfo_GetChannelForIndex_Impl
#define N_DeviceInfo_IsChannelInMask N_DeviceInfo_IsChannelInMask_Impl
#define N_DeviceInfo_IsAddressAssignmentCapable N_DeviceInfo_IsAddressAssignmentCapable_Impl
#define N_DeviceInfo_CanBeLinkInitiator N_DeviceInfo_CanBeLinkInitiator_Impl
#define N_DeviceInfo_GetTouchlinkZerodBmTransmitPower N_DeviceInfo_GetTouchlinkZerodBmTransmitPower_Impl
#define N_DeviceInfo_GetTrustCenterMode N_DeviceInfo_GetTrustCenterMode_Impl
#define N_DeviceInfo_SetPrimaryChannelMask N_DeviceInfo_SetPrimaryChannelMask_Impl
#define N_DeviceInfo_SetSecondaryChannelMask N_DeviceInfo_SetSecondaryChannelMask_Impl

#define N_InterPan_Subscribe  N_InterPan_Subscribe_Impl

#define N_PacketDistributor_RegisterEndpoint  N_PacketDistributor_RegisterEndpoint_Impl

// IN_AfDataRequest
#if defined(ZIGBEE_END_DEVICE)
  #  define IN_AfDataRequest_DataRequest N_EndDeviceRobustness_DataRequest_Impl
#else
  #  define IN_AfDataRequest_DataRequest N_Cmi_DataRequest_Impl
#endif /* ZIGBEE_END_DEVICE */

// N_EndDeviceRobustness
#define N_EndDeviceRobustness_DataRequest N_EndDeviceRobustness_DataRequest_Impl

#endif /*LIGHTBINDINGS_H*/
