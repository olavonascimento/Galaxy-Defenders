#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "game_state.h"
#include "player_ship.h"
#include "enemies.h"
#include "barrier.h"

bool player_alligned_with_barrier(PlayerShip *player, main_barrier *pbarr, char axis);
bool detect_player_collision_barrier(PlayerShip *player, main_barrier *pbarr, char player_movement);

void process_player_movement(GameState *game, PlayerShip *player, main_barrier *pbarr);
void process_player_firing(GameState *game, PlayerShip *player);

void update_game_screen(PlayerShip *player, enemies *p_enemies, main_barrier *Pbarr);
void process_game_events(GameState *game, PlayerShip *player, enemies *p_enemies, main_barrier *Pbarr);

#endif
