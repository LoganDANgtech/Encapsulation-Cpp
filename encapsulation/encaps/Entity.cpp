#include "Entity.h"

Entity::Entity() : pos(0, 0)
{}

Entity::Entity(Vector2 pos) : pos(pos)
{}

Vector2 Entity::GetPos() const {
    return this->pos;
}

void Entity::SetPos(Vector2 pos) {
    this->pos = pos;
}
