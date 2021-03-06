/****************************/
/* Author:  MIECIELICA YANN */
/* Date:    08/09/2017 22:08*/
/* P-Name:  UIKit           */
/****************************/

#include "UIImageView.h"

  UIImageView::UIImageView(UIImage *image)
  : UIView(UIFrameMake(UIPointZero(), image->size)), m_image(image)
  {
    this->type = "UIImageView";
  }

  UIImageView::~UIImageView()
  {}

  void UIImageView::setImage(UIImage *image) {
    m_image = image;
    frame.size = m_image->size;
  }

  void UIImageView::draw(UIScreen* screen) {
    UIView::draw(screen);

    if (this->hiden) {
      return ;
    }

    UIPoint origin = this->getScreenOrigin();

    screen->display()->drawXbm(origin.x, origin.y, m_image->size.width, m_image->size.height, m_image->xbm);
  }
