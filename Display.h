/**
 * @author Md. Chanchal Biswas
 * @date 2022-08-31
 * @brief
 * This class designed for 2D graphics.
 *
 */

class Display
{
public:
    // For display color
    double bgR = 0.67058847;
    double bgG = 0.80784342;
    double bgB = 0.89411796;
    double bgA = 0.0;

    // Display size
    int width = 800;
    int height = 390;

    // Display position
    int positionX = 400;
    int positionY = 200;

    // Display name
    char* displayName = "Boat";

    // Coordinate Geometry
    double coordinateX      =-5.0;
    double coordinateXprime = 25.0;

    double coordinateY      = -1.0;
    double coordinateYprime = 14.0;



    static void getDisplay(void) {

        glClear(GL_COLOR_BUFFER_BIT);



        // Water
        glColor3d(0.16078437,0.63921591,0.72156888);
        glBegin(GL_QUADS);
        glVertex2d(-5.0, -1.0);
        glVertex2d(25.0, -1.0);
        glVertex2d(25.0, 1.5);
        glVertex2d(-5.0, 1.5);
        glEnd();

        // Water sin wave
        glColor3d(0.63137277,0.79215714,0.83529441);
        glPointSize(1);
        glBegin (GL_POINTS);

        double x;
        for (int i = -120; i < 650; i++) {
             x = i * 0.04;
            glVertex2f(x, 0.1 * sin(x/.3) + 1.6);
            glVertex2f(x, 0.1 * sin(x/.3) + 1.2);
            glVertex2f(x, 0.1 * sin(x/.3) + 0.8);
            glVertex2f(x, 0.1 * sin(x/.3) + 0.4);
            glVertex2f(x, 0.1 * sin(x/.3) + 0.0);
            glVertex2f(x, 0.1 * sin(x/.3) - 0.4);
            glVertex2f(x, 0.1 * sin(x/.3) - 0.8);

        }
        glEnd ();


        // Skay
        glColor3d(1.0,1.0,1.0);
        glBegin(GL_POLYGON);
        for (int i = 0; i <= 180; i++) {
            glVertex2d(18 + cos (i * 3.1415/180)*1.5, 5 + sin (i * 3.1415/180)*1.5);
        }
        glEnd();

        glBegin(GL_POLYGON);
        for (int i = 0; i <= 180; i++) {
            glVertex2d(21 + cos (i * 3.1415/180)*2.2, 5 + sin (i * 3.1415/180)*2);
        }
        glEnd();

        glBegin(GL_POLYGON);
        for (int i = 0; i <= 180; i++) {
            glVertex2d(15 + cos (i * 3.1415/180)*0.5, 5 + sin (i * 3.1415/180)*0.5);
        }
        glEnd();

        glBegin(GL_POLYGON);
        for (int i = 0; i <= 180; i++) {
            glVertex2d(13 + cos (i * 3.1415/180)*1, 5 + sin (i * 3.1415/180)*0.6);
        }
        glEnd();


        // Boat

        // 1st
        glColor3d(0.63921591,0.64705905,0.65098062);
        glBegin(GL_QUADS);
        glVertex2d(2.0, 1.0);
        glVertex2d(8.6, 1.0);
        glVertex2d(9.5, 1.4);
        glVertex2d(1.2, 1.4);
        glEnd();

        // 2nd
        glColor3d(0.85098069,0.8588238300000001,0.86666697);
        glBegin(GL_QUADS);
        glVertex2d(1.2, 1.4);
        glVertex2d(9.5, 1.4);
        glVertex2d(9.94, 1.6);
        glVertex2d(0.6, 1.6);
        glEnd();

        // 3rd
        glColor3d(0.63921591,0.64705905,0.65098062);
        glBegin(GL_QUADS);
        glVertex2d(0.6, 1.6);
        glVertex2d(9.94, 1.6);
        glVertex2d(10.2, 1.7);
        glVertex2d(0.6, 1.7);
        glEnd();

        // 4th
        glColor3d(0.85098069,0.8588238300000001,0.86666697);
        glBegin(GL_QUADS);
        glVertex2d(0.6, 1.7);
        glVertex2d(10.2, 1.7);
        glVertex2d(11.3, 2.2);
        glVertex2d(0.4, 2.2);
        glEnd();

        // 5th
        glColor3d(0.46274526,0.05882355,0.01568628);
        glBegin(GL_POLYGON);
        glVertex2d(0.0, 2.2);
        glVertex2d(11.8, 2.2);
        glVertex2d(11.9, 2.35);
        glVertex2d(11.8, 2.5);
        glVertex2d(0.0, 2.5);
        glVertex2d(-0.1, 2.35);
        glEnd();

        // 6th
        glColor3d(0.6352943400000001,0.08235297,0.02745099);
        glBegin(GL_QUADS);
        glVertex2d(-0.1, 2.35);
        glVertex2d(11.9, 2.35);
        glVertex2d(11.8, 2.5);
        glVertex2d(0.0, 2.5);
        glEnd();


        // 7th
        glColor3d(0.00392157,0.07058826,0.14509809);
        glBegin(GL_QUADS);
        glVertex2d(1.0, 2.5);
        glVertex2d(1.6, 2.5);
        glVertex2d(1.6, 3.2);
        glVertex2d(1.0, 3.2);
        glEnd();

        // 8th
        glColor3d(0.00392157,0.07058826,0.14509809);
        glBegin(GL_POLYGON);

        for (int i = 0; i <= 180; i++) {

            glVertex2d(1.3 + cos (i * 3.1415/180)*0.3, 3.2 + sin (i * 3.1415/180)*0.3);
        }

        glEnd();


         // 9th
        glColor3d(0.01960785,0.1176471,0.21960792);
        glBegin(GL_TRIANGLES);
        glVertex2d(3.6, 2.5);
        glVertex2d(8.8, 2.5);
        glVertex2d(5.2, 3.8);
        glEnd();

         // 10th
        glColor3d(0.4313727,0.50588253,0.5882355);
        glBegin(GL_QUADS);
        glVertex2d(3.72, 2.6);
        glVertex2d(4.6, 2.6);
        glVertex2d(5.6, 3.66);
        glVertex2d(5.2, 3.8);
        glEnd();

         // 11th
        glColor3d(0.4313727,0.50588253,0.5882355);
        glBegin(GL_QUADS);
        glVertex2d(5.4, 2.6);
        glVertex2d(6.25, 2.6);
        glVertex2d(6.8, 3.23);
        glVertex2d(6.2, 3.44);
        glEnd();

         // 12th
        glColor3d(0.4313727,0.50588253,0.5882355);
        glBegin(GL_QUADS);
        glVertex2d(7.0, 2.6);
        glVertex2d(7.6, 2.6);
        glVertex2d(7.8, 2.86);
        glVertex2d(7.4,3.01);
        glEnd();

        // Boia
        glColor3d(0.46274526,0.05882355,0.01568628);
        glBegin(GL_POLYGON);
        for (int i = 0; i <= 360; i++) {
            glVertex2d(9 + cos (i * 3.1415/180)*0.2, 1.9 + sin (i * 3.1415/180)*0.2);
        }
        glEnd();

        glColor3d(0.67058847,0.80784342,0.89411796);
        glBegin(GL_POLYGON);
        for (int i = 0; i <= 360; i++) {
            glVertex2d(9 + cos (i * 3.1415/180)*0.1, 1.9 + sin (i * 3.1415/180)*0.1);
        }
        glEnd();

        glColor3d(0.46274526,0.05882355,0.01568628);
        glBegin(GL_POLYGON);
        for (int i = 0; i <= 360; i++) {
            glVertex2d(8.5 + cos (i * 3.1415/180)*0.2, 1.9 + sin (i * 3.1415/180)*0.2);
        }
        glEnd();

        glColor3d(0.67058847,0.80784342,0.89411796);
        glBegin(GL_POLYGON);
        for (int i = 0; i <= 360; i++) {
            glVertex2d(8.5 + cos (i * 3.1415/180)*0.1, 1.9 + sin (i * 3.1415/180)*0.1);
        }
        glEnd();


        glFlush();

    }
};
