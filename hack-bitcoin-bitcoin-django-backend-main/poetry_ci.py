import os

username = os.getenv("AZDO_AZURE_ARTIFACTS_USR")
password = os.getenv("AZDO_AZURE_ARTIFACTS_PWD")

template = """[repositories.BoticarioFeed]
url = "https://pkgs.dev.azure.com/gboticario/_packaging/BoticarioFeed/pypi/simple/"

[http-basic.BoticarioFeed]
username = "{username}"
password = "{password}"
""".format(
    username=username, password=password
)

with open("poetry.toml", "w") as f:
    f.write(template)
