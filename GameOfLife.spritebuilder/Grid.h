//
//  Grid.h
//  GameOfLife
//
//  Created by Nicholas Kee on 6/26/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end

@interface evelveStep: CCSprite

//update each Creature's neighbor count
[self countNeighbors];

//update each Creature's state
[self updateCreatures];

//update the generation so the label's text will display the correct generation
_generation++;

@end

@interface countNeighbors: CCSprite

@end

