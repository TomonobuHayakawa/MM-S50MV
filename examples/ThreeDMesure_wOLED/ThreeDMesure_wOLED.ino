/*
 *  ThreeDMesure.ino - Three-dimensional distance measurement with OLED sample
 *  Author Tomonobu Hayakawa
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
 
#include <Wire.h>

#include "MM-S50MV.h"
#include "U8g2lib.h"

U8G2_SSD1327_EA_W128128_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup()
{
  Wire.begin();
  u8g2.begin();

  Serial.begin(115200);
  MMS50MV.begin();

  MMS50MV.skip(256);
  delay(500);
  MMS50MV.set(0, 0xff); // sync mode.
  delay(500);
  MMS50MV.skip(256);
  MMS50MV.sync();       // sync.
  MMS50MV.set(0, 0);    // normal mode. 
  delay(500);

//  MMS50MV.set(0x10, 0x20); // 32frames/s
  MMS50MV.set(0x10, 0x04);
  delay(500);
  MMS50MV.set(0x12, 0x00); // 
  delay(500);
  MMS50MV.skip(256);

  u8g2.clearBuffer();
  u8g2.sendBuffer();
}

void display_3d(int32_t* data)
{
  u8g2.clearBuffer();

  for(int j=2;j<6;j++){
    for(int i=0;i<4;i++){
      int32_t val = *(data+i+j*4);
      if((val<500)&&(val>0)){
//        printf("range[%d][%d]=%d\n",j,i,*(data+i+j*4));
        u8g2.drawBox((1+10)*i, (1+10)*(j-2), 10, 10);
      }else{        
        u8g2.drawFrame((1+10)*i, (1+10)*(j-2), 10, 10);
      }
    }
  }

  u8g2.updateDisplayArea(0,0, 7, 7); 
//  u8g2.sendBuffer();
}

void loop()
{
  static  int32_t data[8][4];
/*  static  int ledr = 0;
  static  int ledg = 0;
  static  int ledb = 0;*/

//  printf("range=%d\n",MMS50MV.get1d());

  int32_t* ptr = (int32_t*)data;

  MMS50MV.get3d(ptr);

  display_3d((int32_t*)data);
  
// MMS50MV.led(ledr,ledg,ledb);
   printf("\n");
//  usleep(10*1000);

}
