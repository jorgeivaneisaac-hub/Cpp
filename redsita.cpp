#include <iostream>
#include <vector>
#include <cmath>

// Función de activación
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    // Entradas (ejemplo: 2 sensores)
    std::vector<double> inputs = {1.0, 0.5};
    // Pesos iniciales aleatorios
    std::vector<double> weights = {0.2, -0.4};
    double bias = 0.1;

    // Cálculo: (entrada * peso) + bias
    double sum = bias;
    for(size_t i = 0; i < inputs.size(); i++) {
        sum += inputs[i] * weights[i];
    }

    // Resultado de la neurona
    double output = sigmoid(sum);

    std::cout << "Resultado de la neurona: " << output << std::endl;

    return 0;
}

