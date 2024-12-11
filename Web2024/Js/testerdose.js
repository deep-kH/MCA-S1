function view(check){
    if(check == 'string'){
        document.getElementsByClassName('string').style.display = "block";
        document.getElementsByClassName('math').style.display = "none";
    }
    if(check == 'math'){
        document.getElementsByClassName('math').style.display = "block";
        document.getElementsByClassName('string').style.display = "none";
    }
}
function view(check){
        document.getElementsByClassName('math').style.display = "block";
        document.getElementsByClassName('string').style.display = "none";

}