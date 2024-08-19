#ifndef BOUNDING_SPHERE_INCLUDED_H
#define BOUNDING_SPHERE_INCLUDED_H

class IntersectData
{
public:
    IntersectData(const bool doesIntersect, const float distance) : m_doesIntersect{doesIntersect},
                                                                    m_distance(distance) {}

    inline bool GetDoesIntersect() const { return m_doesIntersect; }
    inline float getdistance() const { return m_distance; }

private:
    const bool m_doesIntersect;
    const float m_distance;
};

#endif