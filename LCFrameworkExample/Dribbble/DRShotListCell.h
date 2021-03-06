//
//  DRShotListCell.h
//  LCFrameworkExample
//
//  Created by Licheng Guo . ( SUGGESTIONS & BUG titm@tom.com ) on 13-10-11.
//  Copyright (c) 2014年 Licheng Guo iOS developer ( http://nsobject.me ).All rights reserved.
//  Also see the copyright page ( http://nsobject.me/copyright.rtf ).
//
//


#import "LC_UITableViewCell.h"

@class SHOT;

#pragma mark -

@interface DRShotBottomView : LC_UIBlurView

-(void) setShot:(SHOT *)shot;

@end

#pragma mark -

@interface DRShotListCell : LC_UITableViewCell

@property(nonatomic,assign) SHOT * shot;
@property(nonatomic,assign) SHOT * shotOther;

LC_ST_SIGNAL(DRShotListCellDetailAction);

@end
