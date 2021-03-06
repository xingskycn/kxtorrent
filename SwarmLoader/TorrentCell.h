//
//  TorrentCell.h
//  cli
//
//  Created by Kolyvan on 09.10.12.
//  Copyright (c) 2012 Konstantin Boukreev . All rights reserved.
//
//  https://github.com/kolyvan/kxtorrent
//  this file is part of KxTorrent
//  KxTorrent is licenced under the LGPL v3, see lgpl-3.0.txt

#import <UIKit/UIKit.h>

@class TorrentClient;

@interface TorrentCell : UITableViewCell
@property (readwrite, nonatomic) IBOutlet UIButton *startButton;
@property (readwrite, nonatomic) IBOutlet UILabel  *nameLabel;
@property (readwrite, nonatomic) IBOutlet UILabel  *stateLabel;
@property (readwrite, nonatomic) IBOutlet UILabel  *progressLabel;
@property (readwrite, nonatomic) IBOutlet UILabel  *infoLabel;

+ (NSString *) identifier;
+ (CGFloat) defaultHeight;

- (void) updateFromClient: (TorrentClient *) client;

@end
