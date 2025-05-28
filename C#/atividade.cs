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

        private void Form1_Load(object sender, EventArgs e)
        {
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int ano = int.Parse(textBox3.Text);
            int mes = int.Parse(textBox2.Text);
            int dia = int.Parse(textBox1.Text);


            DateTime data = new DateTime(ano, mes, dia);
            MessageBox.Show(data.ToString("dd 'de' MMM 'de' yyyy"));
        }
    }
}