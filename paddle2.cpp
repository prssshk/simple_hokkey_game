#include "paddle2.h"

paddle2::paddle2() {

  dx = 0; dy=0;

  image.load("platform2.png");

  rect = image.rect();
  resetState();
}

paddle2::~paddle2() {

}

void paddle2::setDx(int x) {
  dx = x;
}
void paddle2::setDy(int y){
    dy=y;
}

void paddle2::move() {
    int x = rect.x() + dx;
    int y = rect.y()+dy;

    rect.moveTo(x, y);
}
void paddle2::moveX(){
    rect.moveTo(400,rect.y());
}
void paddle2::resetState() {
  rect.moveTo(535, 172);
}

QRect paddle2::getRect() {
  return rect;
}

QImage & paddle2::getImage() {
  return image;
}
