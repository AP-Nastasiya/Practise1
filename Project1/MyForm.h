#pragma once
#include <math.h>
#include <string.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(265, 279);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"3";
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 324);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"5";
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(265, 367);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(251, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 370);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(164, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 48);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(300, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 48);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(36, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(469, 179);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 484);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double y, x, a;
		//Проверка, что данные для х и а введены
		if ((textBox1->Text != "") && (textBox2->Text != ""))
		{
			//Преобразование из текста в дробное число х и а 
			a =Convert::ToDouble(textBox1->Text);
			x = Convert::ToDouble(textBox2->Text);
			if (x <= 0) { y = (x + 1) / pow(fabs(x)+2,3); }

			else

				if (x > 0 && x <= a) { y = exp(x)+cos(x+2); }

				else

				{
					y = 3*log10(pow(pow(sin(x),2)+2, 1 / 5));
				};
			//Вывод в компоненте ТextBox3 преобразованного в текст значения у
			textBox3->Text = Convert::ToString(y);
		}

		else
          //Вывод окна с сообщением, если не введены данные в компоненты ТextBox1 и ТextBox2
			{ MessageBox::Show("Введите пожалуйста данные А и Х", "Ошибкаввода данных", 
							MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем 
	t=0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	 k = 0;
					//двигаем индексатор, если наше число отрицательное 
	 if (str[t] == '-') { t++; }
					//число не может начинаться с запятой
	 if (str[t] == ',') { a = false; } while (t < l)
					{
						if (str[t] == ',')
							//если запятая стоит последним символом или запятая уже была найдена
						{
							if (t == l - 1 || k > 0) { a = false; }
							k++;

						}

						//если t-ый символ не лежит в диапазоне от '0' до '9'
						else if (str[t] < '0' || str[t] > '9') { a = false; }
						t++;
					}
					if (a == false)
					{
						MessageBox::Show("параметр А не является числом", "Ошибка ввода данных",
							MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						//возврат фокуса текстовому полю this->textBox1->Focus();
					}
					
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	 t=0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-') { t++; }
	//число не может начинаться с запятой 
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена

		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'

		else if (str[t] < '0' || str[t]>'9') { a = false; } t++;
}
	if (a == false)
	{
		MessageBox::Show("параметр Х не является числом", "Ошибкаввода данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю this->textBox2->Focus();
	}
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
};
}
