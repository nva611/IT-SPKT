package mypack;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.List;

public class Family {
	private List<Person> household;

	public Family()
	{
		this.household = new LinkedList<Person>();
	}
	/**
	 * @param household
	 */
	public Family(LinkedList<Person> household) {
		super();
		this.household = household;
	}

	public List<Person> getHousehold() {
		return household;
	}

	public void setHousehold(LinkedList<Person> household) {
		this.household = household;
	}
	
	public boolean addMember(Person member)
	{
		if(member == null)
			return false;
		this.household.add(member);
		return true;
	}
	public void showFamilyInformation()
	{
		ListIterator<Person> itr = this.getHousehold().listIterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next().toString());
		}
	}
}
