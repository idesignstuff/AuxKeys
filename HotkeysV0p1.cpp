#include <arduino.h>
#include <Pushbutton.h>
#include <Keyboard.h>

#define LED_PIN 15
#define b0 0
#define b1 1
#define b2 2
#define b3 3
#define b4 4
#define b5 5
#define b6 6
#define b7 7
#define b8 8
#define b9 9
#define b10 10
#define b11 11
#define b12 12
#define b13 13
#define b14 14

//-----keypresses-----//

/* Create a Pushbutton object with default settings, which
 * enables the internal pull-up on the pin and interprets a HIGH
 * pin value as the default (unpressed) state of the
 * button. (Optional arguments can be passed to the constructor
 * to specify other button types and connection methods; see the
 * documentation for details.) */
Pushbutton but0(0);
Pushbutton but1(1);
Pushbutton but2(2);
Pushbutton but3(3);
Pushbutton but4(4);
Pushbutton but5(5);
Pushbutton but6(6);
Pushbutton but7(7);
Pushbutton but8(8);
Pushbutton but9(9);
Pushbutton but10(10);
Pushbutton but11(11);
Pushbutton but12(12);
Pushbutton but13(13);
Pushbutton but14(14);



void setup()
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  Keyboard.begin();


}

void loop()
{
  while (1) {

  /* Method 3: Call the getSingleDebouncedRelease() function
   * repeatedly in a loop, which returns true to report a single
   * button release or false otherwise. This function takes care
   * of button debouncing. If you have multiple buttons, you can
   * call getSingleDebouncedRelease() or
   * getSingleDebouncedPress() in a loop for all of them until
   * one of them returns true. */
//Button 0
    if (but0.getSingleDebouncedRelease())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      delay(200);
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      break;
    }

    if (but0.getSingleDebouncedPress())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      delay(200);
      digitalWrite(LED_PIN, HIGH);
      break;
    }

//Button 1
    if (but1.getSingleDebouncedRelease())
    {
      // blink LED
      digitalWrite(LED_PIN, LOW);
      delay(200);
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      break;
    }

    if (but1.getSingleDebouncedPress())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      delay(200);
      digitalWrite(LED_PIN, HIGH);
      break;
    }

//Button 2
    if (but2.getSingleDebouncedRelease())
    {
      // blink LED
      digitalWrite(LED_PIN, LOW);
      Keyboard.release(KEY_LEFT_SHIFT);
      break;
    }

    if (but2.getSingleDebouncedPress())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      Keyboard.press(KEY_LEFT_SHIFT);
      break;
    }

//Button 3
    if (but3.getSingleDebouncedRelease())
    {
      // blink LED
      digitalWrite(LED_PIN, LOW);
      Keyboard.release(KEY_LEFT_ALT);
      break;
    }

    if (but3.getSingleDebouncedPress())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      Keyboard.release(KEY_LEFT_ALT);
      break;
    }

//Button 4
    if (but4.getSingleDebouncedRelease())
    {
      // blink LED
      digitalWrite(LED_PIN, LOW);
      Keyboard.release(KEY_LEFT_CTRL);
      break;
    }

    if (but4.getSingleDebouncedPress())
    {
      // blink LED
      digitalWrite(LED_PIN, HIGH);
      Keyboard.press(KEY_LEFT_CTRL);
      break;
    }
    //Button 5
        if (but5.getSingleDebouncedRelease())
        {
          // blink LED
          digitalWrite(LED_PIN, LOW);
          Keyboard.release('b');
          break;
        }

        if (but5.getSingleDebouncedPress())
        {
          // blink LED
          digitalWrite(LED_PIN, HIGH);
          Keyboard.press('b');
          break;
        }

    //Button 6
        if (but6.getSingleDebouncedRelease())
        {
          // blink LED
          digitalWrite(LED_PIN, LOW);
          break;
        }

        if (but6.getSingleDebouncedPress())
        {
          // blink LED
          digitalWrite(LED_PIN, HIGH);
          Keyboard.press(KEY_LEFT_CTRL);
          Keyboard.write('z');
          Keyboard.release(KEY_LEFT_CTRL);
          break;
        }

    //Button 7
        if (but7.getSingleDebouncedRelease())
        {
          // blink LED
          digitalWrite(LED_PIN, LOW);
          Keyboard.release(KEY_LEFT_SHIFT);
          break;
        }

        if (but7.getSingleDebouncedPress())
        {
          // blink LED
          digitalWrite(LED_PIN, HIGH);
          Keyboard.press(KEY_LEFT_SHIFT);
          break;
        }

    //Button 8
        if (but8.getSingleDebouncedRelease())
        {
          // blink LED
          digitalWrite(LED_PIN, LOW);
          Keyboard.release(KEY_LEFT_ALT);
          break;
        }

        if (but8.getSingleDebouncedPress())
        {
          // blink LED
          digitalWrite(LED_PIN, HIGH);
          Keyboard.release(KEY_LEFT_ALT);
          break;
        }

    //Button 9
        if (but9.getSingleDebouncedRelease())
        {
          // blink LED
          digitalWrite(LED_PIN, LOW);
          Keyboard.release(KEY_LEFT_CTRL);
          break;
        }

        if (but9.getSingleDebouncedPress())
        {
          // blink LED
          digitalWrite(LED_PIN, HIGH);
          Keyboard.press(KEY_LEFT_CTRL);
          break;
        }
        //Button 10
            if (but10.getSingleDebouncedRelease())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              delay(200);
              digitalWrite(LED_PIN, LOW);
              delay(200);
              digitalWrite(LED_PIN, HIGH);
              delay(200);
              digitalWrite(LED_PIN, LOW);
              break;
            }

            if (but10.getSingleDebouncedPress())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              delay(200);
              digitalWrite(LED_PIN, LOW);
              delay(200);
              digitalWrite(LED_PIN, HIGH);
              break;
            }

        //Button 11
            if (but11.getSingleDebouncedRelease())
            {
              // blink LED
              digitalWrite(LED_PIN, LOW);
              delay(200);
              digitalWrite(LED_PIN, HIGH);
              delay(200);
              digitalWrite(LED_PIN, LOW);
              break;
            }

            if (but11.getSingleDebouncedPress())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              delay(200);
              digitalWrite(LED_PIN, LOW);
              delay(200);
              digitalWrite(LED_PIN, HIGH);
              break;
            }

        //Button 12
            if (but12.getSingleDebouncedRelease())
            {
              // blink LED
              digitalWrite(LED_PIN, LOW);
              Keyboard.release(KEY_LEFT_SHIFT);
              break;
            }

            if (but12.getSingleDebouncedPress())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              Keyboard.press(KEY_LEFT_SHIFT);
              break;
            }

        //Button 13
            if (but13.getSingleDebouncedRelease())
            {
              // blink LED
              digitalWrite(LED_PIN, LOW);
              Keyboard.release(KEY_LEFT_ALT);
              break;
            }

            if (but13.getSingleDebouncedPress())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              Keyboard.release(KEY_LEFT_ALT);
              break;
            }

        //Button 14
            if (but14.getSingleDebouncedRelease())
            {
              // blink LED
              digitalWrite(LED_PIN, LOW);
              Keyboard.release(KEY_LEFT_CTRL);
              break;
            }

            if (but14.getSingleDebouncedPress())
            {
              // blink LED
              digitalWrite(LED_PIN, HIGH);
              Keyboard.press(KEY_LEFT_CTRL);
              break;
            }
  }
}
