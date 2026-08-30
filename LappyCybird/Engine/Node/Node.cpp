#include "Node.h"

namespace Engine
{
	Node::Node()
		: rendering(transform)
	{
		transform.pos = { 0, 0 };
		transform.src = { 0, 0 };
		transform.scale = { 1, 1 };
		rendering.flip_h = rendering.flip_v = rendering.hide = false;
	}

	int Node::GetZ()
	{
		return rendering.z_index;
	}

	Node::~Node()
	{

	}
}