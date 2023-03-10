package demo;

import ecomm.*;
import ecomm.Globals.Category;

public class Mobile extends myProduct
{
    private String name, ProductID;
    private int quantity;
    private float price;
    
    public Mobile(String ProductID, String name, float price, int quantity)
    {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
        this.ProductID = ProductID;
    }
    public Globals.Category getCategory()   //getters
    {
        return Category.Mobile;
    }

	public String getName()
    {
        return name;
    }
	public String getProductID()
    {
        return ProductID;
    }
	public float getPrice()
    {
        return price;
    }
	public int getQuantity()
    {
        return quantity;
    }
    public void decreaseQty(int qty){
        this.quantity -= qty;
    }
}