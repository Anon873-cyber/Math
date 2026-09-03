// creating the text into standerd ASCII

// function which converts the text into ascii code
function textToAscii(message) {
  // creating empty ascii veriable
  let AsciiMessage = "";
  //if not message then returning null
  if (!message) {
    console.log("No Message found to convert into ascii");
    return null;
  }
  // taking the charactors from the message veriable and converting it into ascii
  for (let index = 0; index < message.length; index++) {
    const element = message[index];
    // converting the charactor into ascii and adding it to the AsciiMessage veriable
    AsciiMessage += element.charCodeAt(0);
  }
  
  return Number(AsciiMessage);
}

export default textToAscii;
