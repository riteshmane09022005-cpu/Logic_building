class Demo
{
    constructor()
    {
        this.no1 = 11
        this.no2 = 21
        console.log("Inside constructor")

    }
    Display()
    {
      console.log("Inside display")
    }
}

function main()
{

   dobj = new Demo(101,151)

   console.log(bobj.no1)
   console.log(dobj.no2)

}
main()
