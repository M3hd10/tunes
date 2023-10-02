enum ROLE
{
    EMPLOYEE_ROLE = 1,
    CUSTOMER_ROLE = 2
};

class user
{
    ROLE role;
    virtual ROLE the_role() = 0;
};