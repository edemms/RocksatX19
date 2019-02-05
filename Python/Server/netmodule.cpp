#include <pybind11/pybind11.h>
#include "netmodule.h"
namespace py = pybind11;

PYBIND11_MODULE(net, m) {
    py::class_<Net>(m, "Net")
        .def(py::init<char*, char*>())
        .def("send", &Net::send);
}
