package mypack;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

public class Quarter {
	private List<Family> quarter;

	public Quarter()
	{
		this.quarter = new LinkedList<Family>();
	}
	/**
	 * @param quarter
	 */
	public Quarter(LinkedList<Family> quarter) {
		super();
		this.quarter = quarter;
	}
	
	
	public List<Family> getQuarter() {
		return quarter;
	}
	public void setQuarter(List<Family> quarter) {
		this.quarter = quarter;
	}
	
	public boolean addHousehold(Family household)
	{
		if(household == null)
			return false;
		this.getQuarter().add(household);
		return true;
	}
	public void display()
	{
		ListIterator<Family> itr = this.getQuarter().listIterator();
		while(itr.hasNext())
		{
			itr.next().showFamilyInformation();
		}
	}
}
