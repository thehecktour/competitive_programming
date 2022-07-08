from rest_framework import serializers

from bitcoin_django_backend.healthcheck.enums import Status


class HealthcheckSerializer(serializers.Serializer):
    status = serializers.ChoiceField(choices=Status.choices())
