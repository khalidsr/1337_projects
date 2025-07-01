import matplotlib.pyplot as plt
from load_csv import load


def format_ticks(value):
    if value == 0:
        return "0"
    elif value < 1000:
        return f"{int(value)}"
    else:
        return f"{int(value/1000)}k"
    
def main(path_one,path_two):
    """
    This is a program that calls the load function to  loads the "income_per_person_gdppercapita_ppp_inflation_adjusted.csv" file  and "life_expectancy_years.csv",
    and displays the projection of life expectancy in relation to the gross national product of
    the year 1900 for each country.
    """
   
    data_one = load(path_one)
    data_two = load(path_two)
    df_first = data_one["1900"]
    df_second =  data_two["1900"]
    
    plt.scatter(df_first, df_second)

    plt.title("1900")
    plt.xlabel("Gross domestic product")
    plt.ylabel("Life expectancy")
    plt.xscale("log")
    ticks = [300, 1000, 10000]
    tick_labels = [format_ticks(tick) for tick in ticks]
    plt.xticks(ticks, tick_labels)
    plt.show()
    
    
if __name__ == "__main__":
    try:    
        main("income_per_person_gdppercapita_ppp_inflation_adjusted.csv","life_expectancy_years.csv")
    
    except FileNotFoundError as error:
        print(error)
