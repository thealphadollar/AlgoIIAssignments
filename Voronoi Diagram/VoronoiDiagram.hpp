#include<iostream>
#include<memory>
#ifndef VoronoiDiagram_hpp
#define VoronoiDiagram_hpp

#include "Point2D.h"
#include "Beachline.hpp"


namespace bl = beachline;


void build_voronoi(const std::vector<Point2D> &points,
                   std::vector<bl::HalfEdgePtr> &halfedges,
                   std::vector<bl::VertexPtr> &vertices,
                   std::vector<bl::HalfEdgePtr> &faces);

//std::vector<bl::HalfEdgePtr> init
//

#endif /* VoronoiDiagram_hpp */
