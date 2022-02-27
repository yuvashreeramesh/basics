function main() {
    var increase = parseInt(readLine(), 10);
    var prices = [98.99, 15.2, 20, 1026];
    //your code goes here
    var ar=new Array;
    for(var i=0;i<prices.length;i++){
    var final=prices[i]+increase;
    ar.push(final);
   } 
   console.log(ar); 
}
