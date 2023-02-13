// Plugin developed by XZCendence

#include "CoreMinimal.h"
#include "OnlineServicesPhoenix.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "Online/OnlineServicesRegistry.h"

namespace UE::Online
{
	class FOnlineServicesPhoenixModule : public IModuleInterface
	{
	public:
		virtual void StartupModule() override;
		virtual void ShutdownModule() override;
	protected:
	};

	class FOnlineServicesFactoryPhoenix : public IOnlineServicesFactory
	{
	public:
		virtual ~FOnlineServicesFactoryPhoenix() {}
		virtual TSharedPtr<IOnlineServices> Create(FName InInstanceName) override
		{
			return MakeShared<FOnlineServicesPhoenix>(InInstanceName);
		}
	protected:
	};

	void FOnlineServicesPhoenixModule::StartupModule()
	{
		const FName OnlineServicesInterfaceModuleName = TEXT("OnlineServicesInterface");
		if (!FModuleManager::Get().IsModuleLoaded(OnlineServicesInterfaceModuleName))
		{
			FModuleManager::Get().LoadModuleChecked(OnlineServicesInterfaceModuleName);
		}
	}

	void FOnlineServicesPhoenixModule::ShutdownModule()
	{
	}

}