# Ray the Plant

Ray the talking plant lets you know when it is thirsty, if the temperature is outside its range, and additional other.

In this tutorial, I will show you how to use a Particle Photon to test the moisture level of some soil. If the moisture falls outside a certain range (too wet or too dry) we will send a text message to a cell phone.

If you have any questions or a piece of this tutorial is unclear, I would encourage you to create an [issue](https://github.com/jordanskole/ray-the-plant/issues) and I will address it ASAP.

## Parts List

- Particle Photon ([particle](https://store.particle.io/collections/photon), [Sparkfun](https://www.sparkfun.com/products/13774), [Adafruit](https://www.adafruit.com/product/2721))
- Soil Moisture Sensor ([sparkfun](https://www.sparkfun.com/products/13322))
- Mini breadboard ([sparkfun](https://www.sparkfun.com/products/12044))

## Pre-requisites

- [node.js](https://nodejs.org)
- [Particle Account](https://build.particle.io/signup)
- [Particle CLI Software](https://www.npmjs.com/package/particle-cli)
- [Zapier Account](https://zapier.com/app/explore)


#### Particle Account

In order to upload sketches (explain sketches) to your Particle Photon, that neat little chip that will be powering our plant, we first need to create a Particle account. Creating an account is easy. Just visit `build.particle.io` and click on the link to [create a new account](https://build.particle.io/signup). Go ahead and do that and come back here.

Your Photon is composed of two pieces: the device itself and Particle Cloud, the online IDE (what is IDE?) that you use to manage all of your devices in the field. Particle Cloud gives you access to several methods inside your sketch that allow your Photon device to communicate with the outside world.


#### Particle CLI Software

> I am going to assume that you are on a MacOS computer for now. I will update this tutorial with Windows instructions soon, or you can visit `https://www.particle.io/cli` to download the installer for Windows.

We will need a way for our laptop to communicate with our Photon. The easiest way to do so is by using the _Particle Cli_ application.

Particle Cli is a command line application. That means that we need to run it in our terminal, but don't worry! It is not as scary as it seems, and if you get at all stuck, you can [ask a question in the issues](https://github.com/jordanskole/ray-the-plant/issues) and I will help you work through it.

In order to install the Particle Cli software, you will need a program called node.js. Head on over to the [nodejs website](https://nodejs.org). Follow the directions over there, you should need to download the installer and run it on your local machine.

Once you have node installed open a terminal window. You can use the magnifying glass in the top right of your machine to search for the terminal app if you are unsure where it is.

Inside your terminal type the following command and hit enter

```shell
npm install particle-cli -g
```

If it worked you should see some jibberish that looks like this. Its okay if you don't know what this means, nobody does! You just don't want to see any red.

```shell
├── request@2.72.0 (tunnel-agent@0.4.3, aws-sign2@0.6.0, oauth-sign@0.8.2, forever-agent@0.6.1, caseless@0.11.0, is-typedarray@1.0.0, stringstream@0.0.5, aws4@1.4.1, isstream@0.1.2, json-stringify-safe@5.0.1, extend@3.0.0, tough-cookie@2.2.2, node-uuid@1.4.7, qs@6.1.0, combined-stream@1.0.5, mime-types@2.1.11, hawk@3.1.3, bl@1.1.2, http-signature@1.1.1, har-validator@2.0.6)
├── moment@2.13.0
├── lodash@3.10.1
├── softap-setup@1.1.4 (nconf@0.7.2, node-rsa@0.2.30)
└── serialport@3.1.2 (bindings@1.2.1, commander@2.9.0, es6-promise@3.2.1, nan@2.3.5, debug@2.2.0, object.assign@4.0.3)
```

Go ahead and type `clear` to clear out all the jibberish.

```shell
clear
```

Awesome! Let's double check that everything is installed okay. To do that we will "open" the particle app from within the terminal. Simply type `particle`.

```shell
particle
```

You should see something that looks something like this

```shell
Welcome to the Particle Command line utility!
Version 1.14.2
https://github.com/spark/particle-cli

Usage: particle <command_name> <arguments>
Common Commands:

    setup, list, call, get, device, identify, flash, subscribe
    compile, monitor, login, logout, help

Less Common Commands:
    token, binary, cloud, config, function, keys, serial, udp
    update, variable, webhook, wireless

For more information Run: particle help <command_name>
```

Cowabunga! We are 2/3rds of the way through our Pre-requisites!

#### Zapier Account

Zapier is a web application that connects all of the other applications on the internet together. After you create an account, you can make recipes, or "Zaps" that connect two or more web applications together. If something happens in one application, you can trigger an action in another application.

In our case, we will use Zapier to connect the Particle Cloud with an SMS message. If our Photon _publishes_ an event to the Particle Cloud, then we will send an SMS message.

You can create a Zapier account on the [Zapier website](https://zapier.com).

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
