#include "PieceGhost.hpp"
#include "Globals.hpp"

PieceGhost::PieceGhost():
	Piece(Piece::MAX, 0, 0)
{
	this->block = Globals::Theme::ghost;
}
PieceGhost::~PieceGhost()
{ }
void PieceGhost::update(Piece* master, Board* board)
{
	this->x = master->getX();
	this->y = master->getY();
	this->type = master->getType();
	this->rotation = master->getRotation();

	board->hardDrop(this);
}

