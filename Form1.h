#pragma once
#include <math.h>
#include <string.h>
#include <cmath>

namespace CppCLRWinFormsProject
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 457);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(381, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать таблицу и экстремумы функции";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(633, 457);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите значение XN=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 334);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите значение XК=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 363);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите значение XН=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Введите значение а=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 300);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"12";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(187, 331);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"-6";
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 360);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,5";
			this->textBox3->Enter += gcnew System::EventHandler(this, &Form1::textBox3_Enter);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(187, 385);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"5";
			this->textBox4->Leave += gcnew System::EventHandler(this, &Form1::textBox4_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 65);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(542, 196);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(550, 65);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(313, 257);
			this->dataGridView1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(630, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Таблица значений функции";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(501, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Максим. знач. функции";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(697, 337);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Миним. знач. функции";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(550, 360);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(731, 363);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 561);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Выполнил студент группы 23-КФ Берговин Александр Задание 3";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int n, i;
		//Проверка ввода данных в компоненты textBox
		if ((textBox1->Text != "") && (textBox2->Text != "") &&
			(textBox3->Text != "") && (textBox4->Text != ""))
		{
			//Преобразование введенных данных в тип double
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);a
				= Convert::ToDouble(textBox4->Text);
			//Очистка столбцов таблицы
			dataGridView1->Columns->Clear();
			//Создание двух столбцов в таблице
			dataGridView1->ColumnCount = 2;
			//Создание в таблице строк
			dataGridView1->Rows->Add(ceil((xk - n) / xh) + 1);
			//Занесение в верхнюю строку таблицы в первую ячейку текст «Х», во вторую текст «У»
			dataGridView1->Columns[0]->Name = " X";
			dataGridView1->Columns[1]->Name = " Y";
			i = 0;
			x = xn;
			ymax = -2, 9;ymin = 6, 2;
			while (x <= xk)
			{
				if (x <= 0) { y = x * x * x * x * x - (1 / tan(x * x * x * 3.14)); }
				else
					if (x <= a) { y = pow(abs(7 * x) + 1, 0.3) + sin(x); }
					else
					{
						y = 5 * x + x * x;
					}
				//Занесение в первый столбец значений аргумента Х
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				//Переменной yt присваивает округленное до двух знаков после запятой значение у
				yt = ceil(y * 100) / 100;
				//Вывод во втором столбце таблицы значение функции У
				dataGridView1->Rows[i]->Cells[1]->Value
					= Convert::ToString(yt);
				//находит максимальное и минимальное значение и округляет до двух знаковпосле запятой
				if (y > ymax) ymax = ceil(y * 100) / 100; if
					(y < ymin) ymin = ceil(y * 100) / 100;
				x = x + xh;
				i++;
			}
			//выводит в компоненты textbox максимальное и минимальное значение функции
			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else {
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation

			);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool XN = true; String^ str; str = textBox1->Text;
		l = str->Length;
		//индекс символа, с которым работаем 
		t = 0;
		//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
		k = 0;
		//двигаем индексатор, если наше число отрицательное 
		if (str[t] == '-') t++;
		//число не может начинаться с запятой 
		if (str[t] == ',') XN = false; while (t < l)
		{
			if (str[t] == ',')
				//если запятая стоит последним символом или запятая уже была найдена
			{
				if (t == l - 1 || k > 0) XN = false; k++;

			}

			//если t-ый символ не лежит в диапазоне от '-2,9' до '6,2' 
			else if (str[t] < '6,2' || str[t] > '-2,9') XN = false;

			t++;
		}
		if (XN == false)
		{
			MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//возврат фокуса текстовому полю
			this->textBox1->Focus();
		}
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool XK = true; String^ str; str = textBox1->Text;
		l = str->Length;
		//индекс символа, с которым работаем 
		t = 0;
		//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
		k = 0;
		//двигаем индексатор, если наше число отрицательное 
		if (str[t] == '-') t++;
		//число не может начинаться с запятой 
		if (str[t] == ',') XK = false; while (t < l)
		{
			if (str[t] == ',')
				//если запятая стоит последним символом или запятая уже была найдена
			{
				if (t == l - 1 || k > 0) XK = false; k++;

			}

			//если t-ый символ не лежит в диапазоне от '-2,9' до '6,2' 
			else if (str[t] < '6,2' || str[t] > '-2,9') XK = false;

			t++;
		}
		if (XK == false)
		{
			MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//возврат фокуса текстовому полю
			this->textBox1->Focus();
		}
	};
	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool XH = true; String^ str; str = textBox1->Text;
		l = str->Length;
		//индекс символа, с которым работаем 
		t = 0;
		//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
		k = 0;
		//двигаем индексатор, если наше число отрицательное 
		if (str[t] == '-') t++;
		//число не может начинаться с запятой 
		if (str[t] == ',') XH = false; while (t < l)
		{
			if (str[t] == ',')
				//если запятая стоит последним символом или запятая уже была найдена
			{
				if (t == l - 1 || k > 0) XH = false; k++;

			}

			//если t-ый символ не лежит в диапазоне от '-2,9' до '6,2' 
			else if (str[t] < '6,2' || str[t] > '-2,9') XH = false;

			t++;
		}
		if (XH == false)
		{
			MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//возврат фокуса текстовому полю
			this->textBox1->Focus();
		}
	}
	private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool a = true; String^ str; str = textBox1->Text;
		l = str->Length;
		//индекс символа, с которым работаем 
		t = 0;
		//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число) 
		k = 0;
		//двигаем индексатор, если наше число отрицательное 
		if (str[t] == '-') t++;
		//число не может начинаться с запятой 
		if (str[t] == ',') a = false; while (t < l)
		{
			if (str[t] == ',')
				//если запятая стоит последним символом или запятая уже была найдена
			{
				if (t == l - 1 || k > 0) a = false; k++;

			}

			//если t-ый символ не лежит в диапазоне от '-2,9' до '6,2' 
			else if (str[t] < '6,2' || str[t] > '-2,9') a = false;

			t++;
		}
		if (a == false)
		{
			MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//возврат фокуса текстовому полю
			this->textBox1->Focus();
		}
	};
	};
}
