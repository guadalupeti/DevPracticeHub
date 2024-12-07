class Forma {
    public:
    virtual double calcularArea() = 0;
};

class Quadrado : public Forma {
    private:
        double raio;

    public:
    Quadrado(int raio) {
        this -> raio = raio;
    }

    double calcularArea() override {
        return 3.14 * raio * raio;
    }
};