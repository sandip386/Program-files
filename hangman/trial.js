const one=document.querySelector(".one");
const ok=document.querySelector(".send");
ok.addEventListener("click",()=>{
    alert(one.options[one.selectedIndex].value);
})