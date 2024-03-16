using System;
using System.Collections.Generic;

public class Program
{
    public static void Main()
    {
        // No es necesario establecer la sincronización con la entrada y salida estándar en C#
        // Inicialmente, se comenta la entrada del número de casos y se establece t = 1
        int t = 1;
        while (t-- > 0)
        {
            Solve();
        }
    }

    public static void Solve()
    {
        int n = int.Parse(Console.ReadLine());
        int res = 13000;
        for (int i = 0; i < n; i++)
        {
            int m = int.Parse(Console.ReadLine());
            res -= m;
        }
        Console.WriteLine(res);
    }
}
