import java.applet.*;
import java.awt.*;
public class q3 extends Applet {
public void paint(Graphics g) {
    g.drawOval(20,20,150,150); 
    int x[] = { 10, 30, 40, 50, 110, 140 };
  
        // y coordinates of vertices
        int y[] = { 140, 110, 50, 40, 30, 10 };
  
        // number of vertices
        int numberofpoints = 6;
  
        // set the color of line drawn to blue
        g.setColor(Color.blue);
  
        // draw the polygon using drawPolygon function
        g.drawPolygon(x, y, numberofpoints);
 }
}
/*
* <applet code="q3.class" height=400 width=400>
* </applet>
*/