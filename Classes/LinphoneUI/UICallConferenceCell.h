/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-iphone 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#import "UIRoundedImageView.h"
#import "LinphoneManager.h"
#import "UIInterfaceStyleButton.h"

#define CONFERENCE_CELL_HEIGHT 60

@interface UICallConferenceCell : UITableViewCell

@property(weak, nonatomic) IBOutlet UIRoundedImageView *avatarImage;
@property(weak, nonatomic) IBOutlet UILabel *nameLabel;
@property(weak, nonatomic) IBOutlet UILabel *durationLabel;
@property (weak, nonatomic) IBOutlet UIInterfaceStyleButton *kickButton;
@property(nonatomic, setter=setParticipant:) LinphoneParticipant *participant;

- (id)initWithIdentifier:(NSString *)identifier;
- (IBAction)onKickClick:(id)sender;

@end
