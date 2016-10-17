object bsort
{

def binsort(beg:Int,end:Int,myArray:Array[Int],ele:Int):Int=
{
	var mid:Int=0;
	mid=(beg+end)/2;

	if(beg>end)
	{

		return -1 
	}
	else if(ele==myArray(mid))
	{
		return mid
	}
	else if(ele>myArray(mid))
	{
		binsort(mid+1,end,myArray,ele)
	}
	else
	{
		binsort(beg,mid-1,myArray,ele)
	
	}


}

def main(args:Array[String])
{
        val n=readLine("Enter no. of elements ");
	
	var i=0;
	var num=n.toInt;
	var j=0;
	var a=0;
	var b=0;
	var temp=0;
	var myArray:Array[Int]=new Array[Int](num);
	println("Enter array element");
	for(i<-0 to num-1)
	{
		myArray(i)=Console.readInt();
	}
	println("Array is");
	for(i<-0 to num-1)
	{
		println(myArray(i));

	}	

	val limit=myArray.size-1
	for(i<-1 to limit)
	{
		for(a<-limit to i by -1)
		{
			if(myArray(a)<myArray(a-1))
				{
					val x=myArray(a)
					myArray(a)=myArray(a-1)
					myArray(a-1)=x

				}

		}

	}
	println("Sorted array is : ");
 	for(i<-0 to num-1)
	{
		println(myArray(i));

	}	
	println("Enter element to be searched :");
	var find=Console.readInt();
	var beg=0;
	var end=num-1;
	var ret=0;
	ret=binsort(beg,end,myArray,find);
	if(ret<0)
	println("Element not found..");
	else
	println("Element is found at location " +(ret+1));


}
}
