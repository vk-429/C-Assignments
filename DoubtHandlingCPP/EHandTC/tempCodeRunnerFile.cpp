dollar operator=(Rupee R)
        {
            cout<<"Operator = called for doller\n";
            dollar D;
            D.d=R.getX()/100;
            return D;
        }