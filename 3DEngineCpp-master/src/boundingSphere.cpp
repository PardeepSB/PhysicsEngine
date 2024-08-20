/*
#include "boundingSphere.h"

IntersectData BoundingSphere::IntersectBoundingSphere(const BoundingSphere &other)

{
    float radiusDistance = m_radius + other.m_radius;
    float centerDistance = (other.GetCenter() - m_center).Length();
    float distance = centerDistance - radiusDistance;

    if (centerDistance < radiusDistance) {
	    return IntersectData(true, distance);
    }
    else {
	    return IntersectData(false, distance);
    }
}

*/
