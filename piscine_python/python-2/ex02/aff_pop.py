import matplotlib.pyplot as plt
from load_csv import load
import numpy as np


def main(path):

    """
    This a program that calls the load function ,loads the file
    population_total.csv, and displays Population Projections of both Morocco and Algeria
    variables:
        data : is a dataframe that hold data
        df_first, df_second: is the selected data of morocco,algeria
        country_first , country_second: is name of countries selected
        years_first,years_second: the columns that represent years 
        values_first, values_second: it represent values
    """
    data = load(path)
    df_first = data[data ["country"] == "Morocco"]
    df_second = data[data ["country"] == "Algeria"]
    
    country_first = df_first.iloc[0, 0]
    years_first = df_first.columns[1:].astype(int)
    values_first = df_first.iloc[0, 1:].str.rstrip('M').astype(float)
    country_second = df_second.iloc[0, 0]
    years_second = df_second.columns[1:].astype(int)
    values_second = df_second.iloc[0, 1:].str.rstrip('M').astype(float)
    plt.plot(years_first, values_first,label =country_first)
    plt.plot(years_second, values_second,color='g',label=country_second)
    plt.title(f"Population Projections")
    plt.xticks(range(1800, 2050, 40))
    plt.xlim(1780, 2060)
    plt.tight_layout()
    labels = [f"{i}M" for i in (np.arange(0, 80, 20))]
    plt.yticks(np.arange(0, 80, 20), labels)
    plt.legend()
    plt.xlabel("Year")
    plt.ylabel("Population")
    plt.show()
    
if __name__ == "__main__":
    try:    
        main("population_total.csv")
    
    except FileNotFoundError as error:
        print(error)
