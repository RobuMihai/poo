#include "Canvas.h"
#include<iostream>
using namespace std;

Canvas::Canvas(int width, int height)
{
    this->width = width;
    this->height = height;
    matrix = new char* [height];
    for (int i = 0; i < height; i++) 
    {
        matrix[i] = new char[width];
        for (int j = 0; j < width; j++)
            matrix[i][j] = ' ';
    }
}
Canvas::~Canvas()
{
    for (int i = 0; i < height; ++i)
        delete[] matrix[i];
    delete[] matrix;
}
void Canvas::SetPoint(int x, int y, char ch)
{
    if (x >= 0 && x < width && y >= 0 && y < height)
        matrix[y][x] = ch;
}

void Canvas::FillCircle(int x, int y, int r, char ch)
{
    for (int j = 0; j < height; j++)
        for (int i = 0; i < width; i++)
            if (((i - x) * (i - x) + (j - y) * (j - y)) <= r * r)
                SetPoint(i, j, ch);
}

void Canvas::DrawCircle(int x, int y, int r, char ch)
{
    for (int j = 0; j < height; j++)
        for (int i = 0; i < width; i++)
            if (((i - x) * (i - x) + (j - y) * (j - y)) == r * r)
                SetPoint(i, j, ch);
}

void Canvas::Print()
{
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) 
            cout << matrix[i][j];
        cout << endl;
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j)
            matrix[i][j] = ' ';
    }
}
