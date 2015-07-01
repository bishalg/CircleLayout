/*
 File: Cell.h
 Abstract: 
 
  Version: 1.0
*/

#import <UIKit/UIKit.h>

@interface Cell : UICollectionViewCell

@property (strong, nonatomic) UILabel *label;
@property (assign, nonatomic) CGFloat itemSize;

- (id)initWithFrame:(CGRect)frame andItemSize:(CGFloat)itemSize;
- (void)configForItemSize:(CGFloat)itemSize;

@end
