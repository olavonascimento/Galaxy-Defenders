#ifndef EVENTS_H
#define EVENTS_H 

#include <allegro5/allegro5.h>

#include "game_state.h"
#include "player_ship.h"

void process_key_down_event(ALLEGRO_EVENT *event, GameState *game, PlayerShip *player);
void process_key_up_event(ALLEGRO_EVENT *event, GameState *game, PlayerShip *player);
void process_timer_event(GameState *game, PlayerShip *player);
void process_events(GameState *game, ALLEGRO_EVENT *event);

#endif