#import <UIKit/UIKit.h>

#if 0
#import <Braintree/BTPaymentMethodNonce.h>
#else
#import <BraintreeCore/BTPaymentMethodNonce.h>
#endif

@class BTUIKPaymentOptionCardView;

@interface BTUIPaymentMethodCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) BTUIKPaymentOptionCardView* paymentOptionCardView;
@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) UILabel* descriptionLabel;
@property (nonatomic, strong) BTPaymentMethodNonce* paymentMethodNonce;

+ (CGSize)dynamicSize;

@end
