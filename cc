Creating an Application in SalesForce.com using Apex programming Language.

public class tree
{
    public static void main(integer key)
    {
        System.debug('Linear Search');
        integer s=-1;
        List <integer> lon=new List <integer>();
        lon.add(0);
        lon.add(1);
        System.debug('List'+lon);
        for(integer i=0;i<lon.size();i++)
            if(key==lon[i])
        {
            s=1;
        }
        if (s==1)
        {
            System.debug('Elemtn found');
            
        }
        else 
        {
            System.debug('Element not found');
        }
    }


}

.........tree.main(....);................
