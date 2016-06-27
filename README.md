# Ray the Plant

Ray the talking plant lets you know when it is thirsty, if the temperature is outside its range, and additional other.

In this tutorial, I will show you how to use a Particle Photon to test the moisture level of some soil. If the moisture falls outside a certain range (too wet or too dry) we will send a text message to a cell phone.

If you have any questions or a piece of this tutorial is unclear, I would encourage you to create an [issue](https://github.com/jordanskole/ray-the-plant/issues) and I will address it ASAP.

## Parts List

- Particle Photon ([particle](https://store.particle.io/collections/photon), [Sparkfun](https://www.sparkfun.com/products/13774), [Adafruit](https://www.adafruit.com/product/2721))
- Soil Moisture Sensor ([sparkfun](https://www.sparkfun.com/products/13322))
- Mini breadboard ([sparkfun](https://www.sparkfun.com/products/12044))
- Optional: 3 prong, jst connector


- Photon Weather Shield ([sparkfun](https://www.sparkfun.com/products/13630))

## Pre-requisites

- [Particle Account](https://build.particle.io/signup)
- [Particle CLI Software](https://www.npmjs.com/package/particle-cli)
- [Zapier Account](https://zapier.com/app/explore)


#### Particle Account

In order to upload sketches to your Particle Photon, that neat little chip that will be powering our plant, we first need to create a Particle account. Your Photon is composed of two pieces, the device itself, and Particle Cloud, the online IDE that you use to manage all of your devices in the field.

Particle Cloud gives you access to several methods inside your sketch that allow your Photon device to communicate with the outside world.

Creating an account is easy. Just visit `build.particle.io` and click on the link to [create a new account](https://build.particle.io/signup). Go ahead and do that and come back here.

#### Particle CLI Software

> I am going to assume that you are on a MacOS computer for now. I will update this tutorial with Windows instructions soon, or you can visit `https://www.particle.io/cli` to download the installer for Windows.

We will need a way for our laptop to communicate with our Photon. The easiest way to do so is by using the _Particle Cli_ application. Particle Cli is a command line application. That means that we need to run it in our terminal, but don't worry! It is not as scary as it seems, and if you get at all stuck, you can [ask a question in the issues](https://github.com/jordanskole/ray-the-plant/issues) and I will help you work through it. 

#### Zapier Account

## Tutorial

1. Connect the Particle Photon
  1. Wire the Photon to the Soil Moisture Sensor
  2. Upload a sketch to the Photon
2. Print values to serial
3. Create the webhook
4. Write the sketch
5. Bonus Steps COMING SOON!
  1. Control a solenoid
  2. Build a web interface

#### Connect the Particle Photon

##### Wire the Photon to the Soil Moisture Sensor

##### Upload a Sketch to the Photon

#### Create the webhook

#### Write the sketch

#### Bonus steps
