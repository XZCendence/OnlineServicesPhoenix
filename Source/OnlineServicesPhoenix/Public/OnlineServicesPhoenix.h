// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Online/OnlineServicesCommon.h"

namespace UE::Online {
	
class ONLINESERVICESPHOENIX_API FOnlineServicesPhoenix : public FOnlineServicesCommon
{
public:
	using Super = FOnlineServicesCommon;

	FOnlineServicesPhoenix(FName InInstanceName);
	virtual void RegisterComponents() override;
	virtual void Initialize() override;
	virtual TOnlineResult<FGetResolvedConnectString> GetResolvedConnectString(FGetResolvedConnectString::Params&& Params) override;
	//virtual EOnlineServices GetServicesProvider() const override { return EOnlineServices::Null; }

};

/* UE::Online */ }
