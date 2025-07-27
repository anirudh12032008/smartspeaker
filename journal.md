# Smart Speaker
## author: "Anirudh Sahu"
### description: "I made my own custom speaker based on a esp32 and has a verbo board for circuits, and what makes it even cooler is that it has an ESP32, not just some normal IC to like bt speakers! It plays actual MP3 songs using a DFPlayer Mini and sd card and online too!!, has 2 speaker, a 3.2-inch touch display so you can really interact with it and choice the music you want or change the volume or anything you want, and some cool ws2812 ring like party lights!!!!"
created_at: "2024-07-26"
## Time spent - 14 HR


## July 26 - Planing and schematic
So I really wanted to make my own speaker because my previous speaker is kind of shitty so yeah I started planning things out and created the schematic and planned the stuff of how will I use.
but finding the display was way tooo hard!!! like idk why was it hard to find a cheap display it was out of stock from everywhere so I kind off gave up for today I will continue on it tommorow
<img width="781" height="1371" alt="schematic (2)" src="https://github.com/user-attachments/assets/c3a6fdfb-572a-4f67-9658-36b37dbdf9ef" />
Time Spent - 2 Hr

## July 27 - Done EVERYTHING ( it is sunday!!!!)
So the grind starts now after waking up late because I  slept at 2am last night so I started searching for stuff I found all other stuff for the project but the display was still hard to find because everyone is just selling display for rpi and arduino but I wanted for ESP32!!! why is it so hard!!! anyways I found it after a lot stuggles and then BOM optimization took like my whole life because I needed it to be in $50 but yeah its under $40 so its cool
<img width="1005" height="481" alt="bom" src="https://github.com/user-attachments/assets/e8a5eb57-7775-46bd-82d6-8cd9bb3c9fea" />

next was the most annoying thing CAD
why fusion runs good but dont have mate connectors!!!!! so I had no choice but to grind moving stuff to make it look cool, the ws2812 16 bit ring was not available anywhere!!! the only model I found were like 10x the actual measurement so yeah its messed up

<img width="542" height="313" alt="1" src="https://github.com/user-attachments/assets/6499fceb-cfad-4c5a-a149-6aef40ad8159" />

so I just created a simple circle type of thing so it was a quick fix and then when I randomly went to get a 3D model I got to know that one of my component is sold out 😢 so I again went to find some cool stuff so yeah it was annoying

<img width="657" height="423" alt="2" src="https://github.com/user-attachments/assets/50f47cab-6514-4def-85c5-a84f63e50286" />

after adding everything i needed to organize every stuff so I started working on that 
<img width="543" height="342" alt="3" src="https://github.com/user-attachments/assets/5de6d53d-0c2f-41a2-bd9f-f7c13c5b6755" />

Now I was working upside down the whole time but yeah if it works fine then why not so I continued working added fillets and hole in the case I didnt use much text on it because it adds way too much supports while 3D printing, so I'll just add externally if I need to
<img width="551" height="413" alt="4" src="https://github.com/user-attachments/assets/77cb461e-3bea-4b4d-9409-f18a140b997f" />

Then tried tweaking the renders to get some good images but idk if it looks any better now lol

then the firmware waw quick and everything done
Time spent - 12 Hr
