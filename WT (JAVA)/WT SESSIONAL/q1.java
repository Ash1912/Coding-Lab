// Write an applet code to draw a circle and a filled rectangle. 
import java.applet.*;
import java.awt.*;
public class q1 extends Applet {
public void paint(Graphics g) {
    g.drawOval(20,20,150,150); 
    g.setColor(Color.CYAN);
    g.drawRect(200,200,100,50);
    g.fillRect(200,200,100,50);
 }
}
/*
* <applet code="q1.class" height=400 width=400>
* </applet>
*/