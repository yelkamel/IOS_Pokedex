//
//  Pokemon.h
//  Pokedex
//
//  Created by Benoit Verdier on 19/05/2014.
//  Copyright (c) 2014 3IE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Pokemon : NSObject
{
}

@property (nonatomic, strong) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int gen;
@property (nonatomic, strong) NSString *type;
@property (nonatomic) int healthPoint;
@property (nonatomic) int attack;
@property (nonatomic) int defense;
@property (nonatomic) int speAttack;
@property (nonatomic) int speDefense;
@property (nonatomic) int speed;

- (id)initWithName:(NSString *)pName andNumber:(int)pNum;
- (int)selectGeneration:(int)numPokemon;

+ (NSArray *)pokemonNames;

@end
