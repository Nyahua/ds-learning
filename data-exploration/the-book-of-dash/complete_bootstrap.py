import dash
from dash import  dcc, html
from dash.dependencies import Output, Input
import plotly.express as px
import dash_bootstrap_components as dbc

import pandas as pd
import pandas_datareader.data as web
import datetime

start = datetime.datatime(2020, 1, 1)