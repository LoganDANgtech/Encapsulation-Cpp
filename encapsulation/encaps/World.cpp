#include "World.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <iostream>
#include <string>

World::World()
{}

void World::Init() {
    BreakableObject* BO = new BreakableObject(10, 10, 1);
    Mob* M = new Mob(-7, 21, 20, Vector2(0, 1), 1); //x, y, MHp, dir, speed
    Player* P = new Player(Vector2(11, -22), 10, Vector2(0, 1), 1);     

    W.push_back(BO);
    W.push_back(M);
    W.push_back(P);
}

int World::Step(){
    Player* player = nullptr;
    BreakableObject* breakableObject = nullptr;
    Mob* mob = nullptr;

    for (auto E : W) {
        if (Player* p = dynamic_cast<Player*>(E)) {
            player = p;
        }
        if (BreakableObject* bo = dynamic_cast<BreakableObject*>(E)) {
            breakableObject = bo;
        }
        if (Mob* m = dynamic_cast<Mob*>(E)) {
            mob = m;
        }
    }
    if (mob and mob->GetHp() > 0) {
        Vector2 BOpos = breakableObject->GetPos();
        Vector2 Mpos = mob->GetPos();

        Vector2 dir = Mpos.DistVector(BOpos);

        if (not(dir == Vector2(0, 0))) {
            dir.Normalize();

            mob->SetDirection(dir);
            mob->Move();
        }
    }
    if (player) {
        if (mob->GetHp() > 0) {
            Vector2 Mpos = mob->GetPos();
            Vector2 Ppos = player->GetPos();

            float range = Ppos.Distfloat(Mpos);

            Vector2 dir = Ppos.DistVector(Mpos);

            if (not(dir == Vector2(0, 0))) {
                dir.Normalize();

                player->SetDirection(dir);
                player->Move();
            }
            std::cout << "range : " + std::to_string(range) << std::endl;
            if (range <= 1) {
                player->Attack(mob);
            }
        }else{
            if (breakableObject->GetHp() > 0) {
                Vector2 BOpos = breakableObject->GetPos();
                Vector2 Ppos = player->GetPos();

                float range = Ppos.Distfloat(BOpos);

                Vector2 dir = Ppos.DistVector(BOpos);

                if (not(dir == Vector2(0, 0))) {
                    dir.Normalize();

                    player->SetDirection(dir);
                    player->Move();
                }
                std::cout << "range : " + std::to_string(range) << std::endl;
                if (range <= 1) {
                    player->Attack(breakableObject);
                    return 0;
                }
            }
            else {
                return 0;
            }
        }
    }
    return 1;
}