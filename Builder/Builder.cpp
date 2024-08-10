#include "Builder.h"


std::shared_ptr<Product> Builder::getResult()
{
    return std::shared_ptr<Product>(m_product);
}
