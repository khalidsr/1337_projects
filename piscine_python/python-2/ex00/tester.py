from load_csv import load
try:    
    print(load("life_expectancy_years.csv"))
   
except FileNotFoundError as error:
    print(error)

