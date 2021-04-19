#import <UIKit/UIKit.h>
#import "React/RCTBridgeModule.h"
#import <UMCore/UMModuleRegistry.h>
#import <UMReactNativeAdapter/UMNativeModulesProxy.h>
#import <UMReactNativeAdapter/UMModuleRegistryAdapter.h>

@interface ReactNativeShareExtension : UIViewController<RCTBridgeModule>
  @property (nonatomic, strong) UMModuleRegistryAdapter *moduleRegistryAdapter;
- (UIView*) shareView;
@end
