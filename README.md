# Smart Speaker !!
I made my own custom speaker based on a esp32 and has a verbo board for circuits, and what makes it even cooler is that it has an ESP32, not just some normal IC to like bt speakers! It plays actual MP3 songs using a DFPlayer Mini and sd card and online too!!, has 2 speaker, a 3.2-inch touch display so you can really interact with it and choice the music you want or change the volume or anything you want, and some cool ws2812 ring like party lights!!!!

and its not just a speaker its a SMART Speaker!!

## Why SMART SPEAKER
We all listen to songs on phones, but I wanted to  build a speaker of my own!!! That too not a normal one the one which is actually cool and do a lot of things!!! like we have in car dashboard, buttons, sound, LEDs and everything!!!

This is not just to play music it’s to show off my skills and say:
“I didn’t buy it from Amazon! I built it”


## What it do
 Plays MP3 songs from SD card

 Shows stuff on a touch display

 LED Ring change color while music plays

 Has buttons and touch for control

 You can show lyrics or info on the screen too

## Images 
<img width="1366" height="418" alt="smart speaker (v1~recovered)" src="https://github.com/user-attachments/assets/32c2bf0f-3062-4629-a9c3-890d73ee79eb" />
<img width="1366" height="418" alt="smart speaker v2" src="https://github.com/user-attachments/assets/91a1aed5-89dd-4b86-94ae-1cc67303d32c" />
<img width="1366" height="418" alt="smart speaker v2 3" src="https://github.com/user-attachments/assets/45d985ad-3f81-4ec6-9b67-4d3c33175987" />
<img width="1366" height="418" alt="smart speaker v2 4" src="https://github.com/user-attachments/assets/9a75901a-fd71-45da-b5a6-7c371bd201f5" />
<img width="1366" height="418" alt="smart speaker v2 5" src="https://github.com/user-attachments/assets/f4ddde04-a630-48c2-b272-a46086c18a52" />
<img width="781" height="1371" alt="smartspeaker drawio" src="https://github.com/user-attachments/assets/06515792-c39e-48cb-908d-d58765cc56f6" />

## Connections 
| GPIO Pin | Function                                  |
|----------|-------------------------------------------|
| GPIO 2   | DC/RS (Display)                          |
| GPIO 4   | RESET (Display)                          |
| GPIO 5   | T_CS (Touch Controller)                  |
| GPIO 13  | CS (SD Card Module)                      |
| GPIO 15  | CS (Display)                             |
| GPIO 18  | SCK (SPI Clock: Display, SD, Touch)      |
| GPIO 19  | MISO (SPI MISO: SD, Touch)               |
| GPIO 23  | MOSI (SPI MOSI: Display, SD, Touch)      |
| GPIO 25  | L IN (DAC1)                              |
| GPIO 26  | R IN (DAC2)                              |
| GPIO 27  | btn3                                     |
| GPIO 32  | btn1                                     |
| GPIO 33  | btn2                                     |

## BOM
# Smart Speaker - Bill of Materials (BoM)

| Name               | INR  | USD         | Link                                                                                     |
|--------------------|------|-------------|------------------------------------------------------------------------------------------|
| Speaker            | 159  | 1.848837209 | [Robocraze](https://robocraze.com/products/0-5w-speaker)                                 |
| PCB                | 0    | 0           | Vero Board Based                                                                         |
| Pam 8403           | 62   | 0.720930233 | [Robocraze](https://robocraze.com/products/pam-8403-amplifier-module?_pos=5&_sid=a9763169e&_ss=r) |
| Battery            | 269  | 3.127906977 | [Robocraze](https://robocraze.com/products/3-7v-1500mah-lipo-rechargeable-battery-model-uk-523450p?_pos=6&_sid=a9763169e&_ss=r) |
| Mini DF MP3 Player | 83   | 0.965116279 | [Robocraze](https://robocraze.com/products/dfplayer-mini-mp3-module?_pos=8&_sid=a9763169e&_ss=r) |
| ESP32              | 359  | 4.174418605 | [Robocraze](https://robocraze.com/products/esp32-development-board?_pos=1&_psq=esp32&_ss=e&_v=1.0) |
| Display            | 1299 | 15.10465116 | [ThinkRobotics](https://thinkrobotics.com/products/inches-spi-tft-display-module-1?variant=16353637564488) |
| SD Card Module     | 39   | 0.453488372 | [Robocraze](https://robocraze.com/products/sd-card-module?_pos=1&_psq=sd+card&_ss=e&_v=1.0) |
| TP4056             | 15   | 0.174418605 | [Robocraze](https://robocraze.com/products/tp4056-lithium-battery-charging-board?_pos=11&_sid=fee95a296&_ss=r) |
| Push Buttons       | 50   | 0.581395349 | Already Have                                                                             |
| Switch             | 20   | 0.232558140 | Already Have                                                                             |
| LED                | 50   | 0.581395349 | Already Have                                                                             |
| Buck Converter     | 35   | 0.406976744 | [Robocraze](https://robocraze.com/products/mt3608-dc-dc-boost-module-2v-24v?_pos=7&_sid=7933f63bd&_ss=r) |
| Capacitor          | 99   | 1.151162791 | [Robocraze](https://robocraze.com/products/4700uf-25v-electrolytic-capacitor?_pos=3&_sid=7933f63bd&_ss=r) |
| Vero Board         | 48   | 0.558139535 | [Robocraze](https://robocraze.com/products/vero-board-3-x4)                              |
| Wire               | 96   | 1.11627907  | [Robocraze](https://robocraze.com/products/ribbon-cable-10-wire-1-meter?_pos=2&_sid=9b0283ae3&_ss=r) |
| Berg Strip         | 50   | 0.581395349 | Robocraze                                                                                |
| Heatsink           | 36   | 0.418604651 | [Robocraze](https://robocraze.com/products/aluminium-heatsink-50mmx45mmx18mm-silver-tone?_pos=2&_sid=da2b33be0&_ss=r) |
| LED Ring           | 168  | 1.953488372 | [Robocraze](https://robocraze.com/products/ws2812-16-bit-rgb-led-round?_pos=4&_sid=de4f34d6c&_ss=r) |
| Case               | 0    | 0           | I can make on my own                                                                     |
| Misc               | 200  | 2.325581395 |                                                                                          |


** Total**: ₹3137 / **$36.48**


