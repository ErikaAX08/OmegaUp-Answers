#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matriz(m, vector<int>(n));
    vector<pair<int, int>> relaciones;

    // leemos los datos
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                map<int, int> valores_visitados;
                bool es_relacion = true;

                for (int k = 0; k < m; k++)
                {
                    int valor_0 = matriz[k][i];
                    int valor_1 = matriz[k][j];

                    // checamos si ya visitamos esta posicion
                    if (valores_visitados.find(valor_0) != valores_visitados.end())
                    {
                        // si ya fue visitada checamos que tenga el mismo valor
                        if (valores_visitados[valor_0] != valor_1)
                        {
                            // en este caso, utilizamos una bandera para evitar ciclos innecesarios
                            es_relacion = false;
                            break;
                        }
                    }
                    else
                    {
                        valores_visitados[valor_0] = valor_1;
                    }
                }

                if (es_relacion)
                {
                    pair<int, int> relacion (i, j);
                    relaciones.push_back(relacion);
                }
            }
        }
    }
    
    // ordenamos las relaciones
    sort(relaciones.begin(), relaciones.end());

    // imprimimos las relaciones
    for (size_t i = 0; i < relaciones.size(); i++)
    {
        cout << relaciones[i].first << " " << relaciones[i].second << endl;
    }

    return 0;
}