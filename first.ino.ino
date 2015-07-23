int ledPin = 13; // LED连接到13脚
int inPin = 7;   // 按钮连接到数字引脚7
int val = 0;  //定义变量存以储读值
 
void setup()
{
  pinMode(ledPin, OUTPUT);      // 将13脚设置为输出
  pinMode(inPin, INPUT);      // 将7脚设置为输入
}
 
void loop()
{
  val = digitalRead(inPin);   // 读取输入脚
  digitalWrite(ledPin, val);    //将LED值设置为按钮的值
}
