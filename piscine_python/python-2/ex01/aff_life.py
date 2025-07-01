import matplotlib.pyplot as plt
from load_csv import load

def main(path):
    """
    this is  a program that calls the load function that load life_expectancy_years.csv file , and displays the country information of Morocco as graph .
    varibles:
        data : is a dataframe that hold data
        df: is the selected data 
        country: is name of country selected
        years: the columns that represent years 
        values: it represent values
    """
    data = load(path)

    df = data[data ["country"] == "Morocco"]
    country = df.iloc[0, 0]

    years = df.columns[1:]
    values = df.iloc[0, 1:]
    plt.plot(years, values)
    plt.title(f"{country} Life Expectancy Projections")
    plt.xticks(years[::40])
    plt.xlabel("Year")
    plt.ylabel("Life Expectancy")
    plt.show()


if __name__ == "__main__":
    try:    
        main("life_expectancy_years.csv")
   
    except FileNotFoundError as error:
        print(error)