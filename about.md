---
layout: default
permalink: /about
---

##### Some notes on baby hacker for my Something Awesome submittion for COMP6841 :)

##### What did i do?
1. i made a bunch of CTF questions, with corresponding walkthroughs. i covered a range of topics covered in the course, and some questions that i made up myself, such as:
    - cyphers
    - Stegonagraphy
    - Types of data formats (eg. png, xlsx)
    
    I'm pretty happy with how i chose this for my something awesome project since i ended up doing a bunch of deep dives into various topics, for example, if i was creating a question on cyphers, i ended up looking up and figuring out how nearly every cypher works so that i can pick one that works for the story/question! 



2. I based the CTF's around a story. This isn't too technical, but i made sure to relate it to security, so throughout the story you can see themes that we talked about from weeks 1-7, such as
    - Secrets
    - Physical Security
    - Attacker/Defender
    - Data and Privacy/Data Leeks
    - Bribing/corruption
    - Insiders
    - Trust/honesty -> gossip

    the story is that you have been brought to work by your mum on "bring your kid to work day" (you are a baby btw), and throughout the CTF you end up excaping places, getting through secure doors, finding peoples secrets and even meeting the CEO! There are 3 endings depending on things like which door/elevarot level you take (according to which CTF flag you find).



3. i put it all on a website. Origionally, i wanted to include a login system that keeps track of how many questions you've completed, but i was overly optimistic when writing my pitch and forgot to remember that although i know some front end and some back end coding, i don't know how to put them together. I also didnt know javascript. I ended up just writing a static website to host all the questions, helped me learn more abotu HTML and css code, while also keeping the website very secure (as there is no data to hack lmao). This part was mainly so that my friends, family and Brendan can see the questions and answeres easily. Some other info:
    - for the website, i used jekyll and github pages

##### Where is the code?

You can find the code for the website in [this](https://github.com/paulatennent/paulatennent.github.io){:target="_blank"} repo. Sometimes this site doesn't work since jekyll is a bit janky (if it looks broken or only part of the site is there), so you can see the questions in the _posts folder as markdown files, or you can pull the repo onto your computer and run

```
$ gem install bundler jekyll
$ bundle exec jekyll serve
```
then go to http://127.0.0.1:4000/


##### how it turned out

I think it turned out pretty good! although i didnt get as many questions done as i would have hoped (hense not finishing the story), im pretty happy with the question i have made! Also Im pretty happy with how the website turned out too!

##### your significant achievements (this is the main bit)

My main achievement is definently the final product that i made (how everything came together), ive made questions, websites and stories before, but somehow combining them all together made something that im pretty proud of and i feel like i can show my friends+family! 

I addition to this, i found that i learnt a bunch about all the different topics i covered (for example, i did 2 questions on ciphers, and ended up learning about most of the main cyphers!), and even learning bits about design and how websites are put together. Even though some of this doesnt show thorugh the project (such as how i didnt build a backend, but still did some research on it), im super happy about my new knowledge!

##### any significant challenges you faced along the way and how/if you overcame them

Doing an assignment that has a shittonne more creavitity than your regular bum comp sci assignment was a bit of a wakeup call to the type of content im comfortable making. I found that it was FAR eeasier to procrastinate creative processes as its pretty easy to be very picky about everyhting and then just decide to do nothing. I guess it was also eyeopening with timemanagement, im usually pretty good with getting assignments started early, but yeah even one assignment leaving to the last minute can be pretty bad. 

Some ways i overcame the procrastinating creative aspects to the project were
- get someething on the page! it doesnt matter how good/bad it is, you can fix it later
- talk about it with other people to bring back any enthusasium you had at the start of the project

##### what you are most proud of

Just how you can go on the website and click on all the buttons and hover over all the links and how it looks all cool and hackerie.

##### your reflections on your Project and what you have learned

Overall, i think i could have done a bit better if i gave myself more time, but i guess thats what happens when you procrastinte, and also make a more creative project where you feel like nothing is ever finished. Ive learnt a bunch about making learning activities, improving my writing, not taking my work too too seriously, making front end pages, that i shouldn't leave assignments to the last minute. 

##### Thanks/references

Abirams CTFs really helped me start out! I also messaged him about some tips and he was very helpful!

Harrisons Cryptcis talk was super useful for putting clues thorugout my questions

I also took some inspiration from Advent of Code, and some topics mentioned in Things to See and do in the 4th dimention (Matt Parker).


##### thanks for reading, hope you enjoy!