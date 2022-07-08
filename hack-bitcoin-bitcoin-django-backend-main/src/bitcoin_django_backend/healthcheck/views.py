from http import HTTPStatus
from typing import List

from rest_framework.views import APIView, Response

from bitcoin_django_backend.healthcheck.enums import Status
from bitcoin_django_backend.healthcheck.serializers import HealthcheckSerializer


class HealthCheckView(APIView):
    authentication_classes: List = []
    permission_classes: List = []
    serializer_class = HealthcheckSerializer

    def get(self, request):
        serializer = HealthcheckSerializer(data={"status": Status.OK.value})
        serializer.is_valid(raise_exception=True)

        return Response(
            data=serializer.data,
            status=HTTPStatus.OK,
        )
