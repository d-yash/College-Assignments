import java.applet.*;
import java.awt.*;
public class p29 extends Applet
{

	// <applet CODE="FirstApplet.class" width="300" height="300"> </applet>

    public void paint(Graphics g)
    {
        setBackground(Color.pink);
       
        g.drawString("Welcome to Java",150, 150);
       
        g.drawRect(10, 10, 100, 300);
       
        //g.fillRect(10, 10, 100, 300);
       
        g.drawLine(10,10,110,310) ;
        g.setColor(Color.blue);
        g.drawRoundRect(150,150,100,150,100,120);
       
        g.drawOval(200,200,200,350);
    }
}