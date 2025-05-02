#pragma once
#include<QWidget>
#include<QSlider>
#include<QLabel>
class Slider: public QWidget
{
public:
    Slider(QWidget *parent = nullptr);
private:
    QSlider *slider;
    QLabel *label;
};
