import java.lang.Math;
import static java.lang.Math.pow;
class Point 
{
    private double x = 0;
    private double y = 0;
    
    public Point(int a, int b)
    {
        x = a;
        y = b;
    }
    
    public double getX() 
     {
         return x;
     }
    
    public double getY() 
    {   
        return y;
    }
    
    public static void main(String args[])
    {
   Point pt1=new Point(0,0);
    Point pt2=new Point(3,4);
    double x1=pt1.getX();
    double y1=pt1.getY();
    double x2=pt2.getX();
    double y2=pt2.getY();
    
    Line a=new Line(pt1,pt2);
    a.length(x1,x2,y1,y2);
    
    }
}

public class Line 
{
    private Point p1;
    private Point p2;
    
    public Line (Point firstPoint, Point secondPoint) {
        p1 = firstPoint;
        p2 = secondPoint;
    }
   
    void length(double x1,double x2,double y1,double y2)
    {
       double length=Math.sqrt(pow((x2-x1),2)+pow((y2-y1),2));
       System.out.println(length); 
    }
}
