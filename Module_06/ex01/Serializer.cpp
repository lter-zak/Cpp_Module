#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{
    
}
         
Serializer::Serializer(const Serializer& t)
{
    (void)t;
}

Serializer& Serializer::operator=(const Serializer& t)
{
    (void)t;
    return (*this);
}



uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t tmp = reinterpret_cast<uintptr_t>(ptr);
    return tmp;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
