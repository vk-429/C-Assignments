#include<iostream>
using namespace std;

class Photon
{
    protected:
        double wavelength;
    public:
        Photon(double wl)
        {
            wavelength=wl;
        }
        double get_wavelength()
        {
            return wavelength;
        }
};

class calculate_photonEnergy: public Photon
{
    private:
        double photon_energy;
    public:
        calculate_photonEnergy(double wl):Photon(wl)
        {

        }
        void calculate_photon_energy()
        {
            const double h = 6.626e-34;
            const double c = 3.0e8;
            photon_energy=(h*c)/wavelength;
        }
        void display_photon_energy()
        {
            cout<<"Photon Energy = "<<photon_energy<<"\n";
        }
};
int main()
{
    calculate_photonEnergy pe1(5.0e-9);
    pe1.calculate_photon_energy();
    pe1.display_photon_energy();
    return 0;
}