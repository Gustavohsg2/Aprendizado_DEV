 /* *******************************************************************
 * Colegio Técnico Antônio Teixeira Fernandes (Univap)
 * Curso Técnico em Informática - Data de Entrega: 25/06/2024
 * Autores do Projeto: Gustavo Henrique Souza Gimenez
 * 
 * Turma: 2I
 * Atividade Proposta em aula
 * 
 * problema_aula.cs
 * ************************************************************/     

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < textBox1.Lines.Length; i++)
            {
                long number = long.Parse(textBox1.Lines[i]);
                string s = "";
         
                int d10 = 0;
                int d11 = 0;
                int q = 10;
                long j = 10000000000;
                int anterior = 0;

                for (int k = 0; k < 9; k++)
                {
                    int digito = (int)((number / j) - (anterior * 10));
                    d10 += digito * q;
                    d11 += digito * (q + 1);
                    anterior = (int)(number / j);
                    q--;
                    j /= 10;
                }

                d10 = (d10 % 11) < 2 ? 0 : 11 - (d10 % 11);

                d11 += d10 * 2;
                d11 = (d11 % 11) < 2 ? 0 : 11 - (d11 % 11);

                int cpfDigit10 = (int)((number / 10) % 10);
                int cpfDigit11 = (int)(number % 10);

                if (d10 == cpfDigit10 && d11 == cpfDigit11)
                    s = String.Format(@"CPF VÁLIDO: {0:###\.###\.###-##}", number);
                else
                    s = "CPF Invalido";

                textBox2.AppendText(s + Environment.NewLine);
            }
        }
    }
}