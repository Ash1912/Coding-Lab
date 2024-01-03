import java.applet.*;
import java.awt.*;
public class Q6 extends Applet {
    public void paint(Graphics g) {
    //    g.setColor(new Color(255,0,0));
       g.drawRect(100,100,80,80);
       g.fillRect(100,100,80,80);
       g.drawRoundRect(200,200,100,50,10,10);
       g.fillRoundRect(200,200,100,50,10,10);
       g.draw3DRect(300,300,80,80,true);
       g.fill3DRect(300,300,80,80,true);
    }
}
/*
 * <applet code="Q6.class" height=400 width=400>
 * </applet>
 */

