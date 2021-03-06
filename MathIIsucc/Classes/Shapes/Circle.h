#pragma once

#include "cocos2d.h"
using namespace cocos2d;

class S_Dot
{
public:
	S_Dot(Scene* parentScene, Vec2 position, Vec2 offset, float radius,float mass, Color4F color);
	~S_Dot();

	void setPosition(Vec2 position);

	void update(float dt);

	Vec2 getPosition() const {
		return position;
	}
	float getRadius() const {
		return radius;
	}

	cocos2d::DrawNode* getDrawnode() const {
		return drawNode;
	}

	float getMass() const;

	void setForce(Vec2);

	bool checkCollision(const S_Dot& other);

private:
	Scene* parentScene = nullptr;
	DrawNode* drawNode = nullptr;

	float mass;
	Vec2 velocity;
	Vec2 acceleration;
	Vec2 force;

	Vec2 position;
	Vec2 offset;
	float radius;
	Color4F color;
};

