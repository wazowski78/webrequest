
// Just a UIImageView that loads its image from a URL.

@protocol SMURLImageViewDelegate;

@interface SMURLImageView : UIImageView

@property (nonatomic, unsafe_unretained) id<SMURLImageViewDelegate> delegate;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, assign) BOOL disableAutoSizeAdjustment; // default NO. set to YES if you do not want the bounds adjusted automatically to fit the loaded image.

- (id)initWithImageURL:(NSURL *)URL;

@end

@protocol SMURLImageViewDelegate <NSObject>

@optional
- (void)URLImageViewDidLoadImage:(SMURLImageView *)imageView;

@end