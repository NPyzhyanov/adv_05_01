#ifndef TEMPLATED_SQR_H
#define TEMPLATED_SQR_H

template <class T>
T templated_sqr(T value_to_sqr)
{
    return value_to_sqr * value_to_sqr;
}

template <class U>
std::vector<U> templated_sqr(std::vector<U> data_to_sqr)
{
    std::vector<U> result_vector = data_to_sqr;
    for_each(result_vector.begin(), result_vector.end(), [] (U& element) {element *= element;});
    
    return result_vector;
}

#endif // TEMPLATED_SQR_H
