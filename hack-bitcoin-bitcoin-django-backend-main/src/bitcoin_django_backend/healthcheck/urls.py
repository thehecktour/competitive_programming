from django.urls import path

from bitcoin_django_backend.healthcheck.views import HealthCheckView

urlpatterns = [
    path("", HealthCheckView.as_view(), name="healthcheck"),
]
