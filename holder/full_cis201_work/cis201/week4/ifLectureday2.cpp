int main()
{
    
    string country = "USA";
    string state = "Hi";
    int weight = 1;
    double shipping = 5.0;

    /*if (country == "USA" 
        && state != "AK"
        && state != "HI"
        */
        if (country != "USA"
            || state == "AK"
            || state == "HI")
        {
            shipping_charge = 20.0;
        }
        cout << shipping_charge << endl;
        else
        {  
            shipping = 2.50;
        }
    }
    return 0;
}
