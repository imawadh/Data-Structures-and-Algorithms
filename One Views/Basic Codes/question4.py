#   Calculate monthly salary for a given annual salary and tax rate


annual_salary = int(input())
tax_percent = int(input())
tax = (annual_salary*tax_percent/100)
print(tax)
annual_salary-=tax
print(annual_salary)
monthly_salary = annual_salary/12
print(monthly_salary)
