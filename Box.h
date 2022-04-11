class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(double l);// write prototypes of setters for length, width and height
       void setWidth(double w);// write prototypes of getters for length, width and height
       void setHeight(double h);

       int getLength();
       int getWidth();
       int getHeight();

       int calcVolume();
};
