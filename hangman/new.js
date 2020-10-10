const one=document.querySelector(".one");/*first window of the game*/
const two=document.querySelector(".two");/*Second window of the game*/
const three=document.querySelector(".three");/*thrid window of the game*/
const main=document.querySelector(".main");/*help to change the slide*/
const all=document.querySelector(".all");/*contain all the divs used in the game*/
const quest=document.querySelector(".t7");/*contain the question of the game*/
const hand=document.querySelector(".head");/*div that contain the t7(title) and help in cahing the animation*/
const check=document.querySelector(".give");/*for giving the answer*/
const final=document.querySelector(".final");/*div that contain ok and help to check the asnwer by compairing*/
const ok=document.querySelector(".lifenum");/*check the asnwer when it is click*/
const yes=document.querySelector(".number");/*level of the game*/
const body1=document.querySelector(".body1");/*level of the game*/
const body2=document.querySelector(".body2");
const body3=document.querySelector(".body3");
const body4=document.querySelector(".body4");
const body5=document.querySelector(".body5");
const body0=document.querySelector(".body0");
const body6=document.querySelector(".body6");
const body7=document.querySelector(".body7");
const body=document.querySelector(".body");
const dead=document.querySelector(".dead");
const dead2=document.querySelector(".dead2");

var file=[body0,body1,body2,body3,body4,body5];
a=1;
all.addEventListener("click",()=>{/*for animation to move the window to the next slide when the user click the button*/
    main.style.transform='translateY('+a*-100+'vh)';/*for animation for upto slide 1*/
    main.style.transition='1s';
    if(a<2){
        a++;
    }
    else{/*for animation when the slide dont want to move to slide 3 so we just loop it to sldie 2 */
    a=2;
    }
    
})
const ask=[{/*All of the question of the game*/
'q':"what is your name",
'a':"sandip"
},
{
'q':'how old are you',
'a':'19'
},
{
'q':'what is your favourite anime',
'a':'Black clover'
}
];
var c=0;/*for increasing the question number*/
var d=0;/*for changing the body part and incresing the life span number*/
yes.innerText=c+1;
ok.innerText=d;
quest.innerHTML=ask[c].q;
hand.classList.add("key");
final.addEventListener("click",()=>{
if(check.value==ask[c].a){ 
body.style.opacity='0';
d=0;/*for clearing the screen covering body part*/
for(var i=0;i<6;i++){
    file[i].style.opacity="0";
}
hand.classList.remove("key");
alert("congratulation");
c++;/*for increasing the question number*/
yes.innerText=c+1;/*for increasing the level numnber*/
quest.innerHTML=ask[c].q;/*for when the question in changed*/
hand.classList.add("key");/*for animation when the question in changed*/
check.value="";
}
else{
    if(d!=6){
        body.style.opacity='1';/*for showing the body part in the screen*/
    file[d].style.opacity="1";/*for changing the body part*/
    file[d].style.transition='2s';
    d++;/*for changing the body part and incresing the life number*/
    ok.innerText=d;/*incresing the life span if the answer if wrong*/
    }
    else{
        for(var i=1;i<6;i++){
            file[i].style.opacity="0";
        }
    body6.style.opacity="1";/*for changing the body part*/
    body6.style.transition="3s";
    body6.style.animation=`bye 4s ease forwards`;
    body7.style.opacity="1";
    body7.style.transition='7s'
    dead.style.opacity="1";
    dead.style.transition='8s';
    dead2.style.opacity="1";
    dead2.style.transition='8s'
    dead2.style.animation=`start5 2s ease infinite`
    }
}
})
