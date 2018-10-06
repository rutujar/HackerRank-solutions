for( let i = 1; i < 10; i++) {
    let btn = document.createElement("button");
    btn.id = "btn"+i;
    btn.innerHTML = i;
    document.getElementById("btns").appendChild(btn);
  }
  
  const sequence = "12369874";
  document.getElementById("btn5").addEventListener("click", function() {
     for(let x of sequence) {
         var current = document.getElementById("btn" + x);
         var index = sequence.indexOf(current.innerHTML);
         
         if(index == 0) {index = 8};
         current.innerHTML = sequence[--index];
     } 
  });
