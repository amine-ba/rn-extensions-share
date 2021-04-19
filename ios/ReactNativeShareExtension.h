#import <UIKit/UIKit.h>
#import "React/RCTBridgeModule.h"
#import <UMCore/UMAppDelegateWrapper.h>

@interface ReactNativeShareExtension : UIViewController<RCTBridgeModule>
- (UIView*) shareView;
@end
