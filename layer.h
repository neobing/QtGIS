#ifndef LAYER_H
#define LAYER_H
#include <QString>
#include <vector>
#include <feature.h>
#include <QTextStream>
#include "style.h"

class Layer
{
public:
    Layer();
    int layer_name_size;
    QString layer_name;
    int target_count;
    void LoadLayer(QTextStream* textStream);
    Style layer_style;

    std::vector<Feature> features;
};

#endif // LAYER_H
