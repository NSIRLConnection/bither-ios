//
//  GroupUserDefaultUtil.h
//  bither-ios
//
//  Copyright 2015 http://Bither.net
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//  Created by songchenwen on 2015/3/5.
//

#import <Foundation/Foundation.h>
typedef enum {
    USDG, CNYG, EURG, GBPG, JPYG, KRWG, CADG, AUDG
} GroupCurrency;

typedef enum {
    UnitBTCG, UnitbitsG
} GroupBitcoinUnit;

typedef enum {
    BITSTAMPG = 1, BTCEG = 2, HUOBIG = 3, OKCOING = 4, BTCCHINAG = 5, CHBTCG = 6, BITFINEXG = 7, MARKET796G = 8
} GroupMarketType;

@interface GroupUserDefaultUtil : NSObject

+ (GroupUserDefaultUtil *)instance;

-(GroupMarketType)defaultMarket;

-(void)setDefaultMarket:(GroupMarketType)market;

-(GroupCurrency)defaultCurrency;

-(void)setDefaultCurrency:(GroupCurrency)currency;

-(GroupBitcoinUnit)defaultBitcoinUnit;

-(void)setDefaultBitcoinUnit:(GroupBitcoinUnit)unit;

@end
