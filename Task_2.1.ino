int LED = D7; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.
int wait = 500;

void dot()
{
    digitalWrite(LED,HIGH);
    delay(wait);
    digitalWrite(LED,LOW);
    delay(wait);
}

void dash()
{
    digitalWrite(LED,HIGH);
    delay(wait*3);
    digitalWrite(LED,LOW);
    delay(wait);
}

void new_char()
{
    delay(wait*3);
}

void new_word()
{
    delay(wait*7);
}


void setup() {

    // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output

    // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

    pinMode(LED, OUTPUT);

}


void loop()
{
    ///K
    dash();
    dot();
    dash();
    
    new_char();

    ///R
    dot();
    dash();
    dot();
    
    new_char();
    
    ///U
    dot();
    dot();
    dash();
    
    new_char();
    
    ///T
    dash();
    
    new_char();
    
    ///I
    dot();
    dot();
    
    new_char();
    
    ///K
    dash();
    dot();
    dash()
    
    new_char();
    
    
}
