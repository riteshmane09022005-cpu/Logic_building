function DisplayFactors(iNo)
{
  let icnt=0

  console.log("Factors of :",iNo)

  for(icnt = 1; icnt <= (iNo /2); icnt++)
  {
    if(iNo % icnt == 0)
    {
        console.log(icnt)
    }
  }
}
function main()
{
  DisplayFactors(12)
}
main()