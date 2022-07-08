FROM 414700354900.dkr.ecr.us-east-1.amazonaws.com/base/python:3.10-slim

RUN apt-get update && apt-get install -y --no-install-recommends swig vim

ENV POETRY_VIRTUALENVS_CREATE false
ENV PYTHONDONTWRITEBYTECODE 1
ENV PYTHONUNBUFFERED 1
ENV PYTHONPATH .
ENV SECRET_KEY 123456
ENV DJANGO_SETTINGS_MODULE="bitcoin_django_backend.settings.base"

ARG AZDO_AZURE_ARTIFACTS_USR
ARG AZDO_AZURE_ARTIFACTS_PWD
ENV AZDO_AZURE_ARTIFACTS_USR $AZDO_AZURE_ARTIFACTS_USR
ENV AZDO_AZURE_ARTIFACTS_PWD $AZDO_AZURE_ARTIFACTS_PWD

COPY poetry.lock pyproject.toml poetry_ci.py ./

RUN pip install --no-cache-dir -U pip poetry
RUN python poetry_ci.py
RUN poetry install --no-dev
RUN pip install --no-cache-dir newrelic
RUN rm poetry_ci.py poetry.toml

ENTRYPOINT ["newrelic-admin", "run-program"]

COPY ./src .

EXPOSE 3000

CMD ["gunicorn", "bitcoin_django_backend.asgi", "-b :3000", "-k uvicorn.workers.UvicornWorker"]
