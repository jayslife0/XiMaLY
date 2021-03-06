//
//  AnchorView.h
//  喜马拉雅FM(高仿品)
//
//  Created by apple-jd33 on 15/11/17.
//  Copyright © 2015年 HansRove. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  一个按钮 一label 一小按钮
 */
@protocol AnchorViewDelegate <NSObject>

- (void)anchorViewDidClickButtom:(NSIndexPath *)indexPath index:(NSUInteger)index;
- (void)anchorViewDidClickAttractButtom:(NSIndexPath *)indexPath index:(NSUInteger)index isAttracted:(BOOL)isAttacted;

@end

@interface AnchorView : UIView

@property (nonatomic,readwrite,weak) id<AnchorViewDelegate> delegate;
@property (nonatomic,readwrite,strong) NSIndexPath *indexPath;
@property (nonatomic,strong) UIButton *anchorBtn;
@property (nonatomic,strong) UILabel *nameLb;

@end
