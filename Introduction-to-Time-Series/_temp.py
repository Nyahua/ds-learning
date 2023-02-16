url = "https://vincentarelbundock.github.io/Rdatasets/csv/datasets/AirPassengers.csv"
df = pd.read_csv(url, usecols=[1, 2], index_col=0)
year = df.index.astype(int).astype(str)
diff = df.index - np.trunc(df.index)
month = (diff * 12 + 1.5).astype(int).astype(str)
df.index = pd.to_datetime(year+'-'+month)
df.plot(figsize=(16, 9))
