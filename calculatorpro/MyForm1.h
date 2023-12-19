//OOPS C++ Project
//Start of the program for Advance Calculator

#pragma once 

namespace calculatorpro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Constructor
		}

	protected:
		
		~MyForm()
		{//destructor
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ operatorshow;
	private: System::Windows::Forms::Button^ button1;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->operatorshow = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(2, -1);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(399, 97);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(82, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"5";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(82, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(244, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 64);
			this->button4->TabIndex = 4;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::signbtn_click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(163, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 64);
			this->button5->TabIndex = 5;
			this->button5->Text = L"%";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(2, 102);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 64);
			this->button6->TabIndex = 6;
			this->button6->Text = L"C";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnc_click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1, 381);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 64);
			this->button7->TabIndex = 7;
			this->button7->Text = L"0";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1, 311);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 64);
			this->button8->TabIndex = 8;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 64);
			this->button9->TabIndex = 9;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1, 172);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(76, 65);
			this->button10->TabIndex = 10;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(163, 172);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 64);
			this->button11->TabIndex = 11;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(244, 242);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 64);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(244, 172);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 64);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(82, 381);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 64);
			this->button14->TabIndex = 14;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::dotbtn_click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(82, 311);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 64);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(163, 241);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 64);
			this->button16->TabIndex = 16;
			this->button16->Text = L"6";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(83, 102);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 64);
			this->button17->TabIndex = 17;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(244, 311);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 64);
			this->button18->TabIndex = 18;
			this->button18->Text = L"*";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(163, 381);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 64);
			this->button19->TabIndex = 19;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::equalbtn_click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(163, 311);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 64);
			this->button20->TabIndex = 20;
			this->button20->Text = L"3";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(325, 102);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 64);
			this->button21->TabIndex = 21;
			this->button21->Text = L"Sin";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::trigocalculation);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(325, 242);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 64);
			this->button22->TabIndex = 22;
			this->button22->Text = L"tan";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::trigocalculation);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(325, 172);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 64);
			this->button23->TabIndex = 23;
			this->button23->Text = L"Cos";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::trigocalculation);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(325, 311);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 64);
			this->button24->TabIndex = 24;
			this->button24->Text = L"x^y";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(325, 381);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 64);
			this->button25->TabIndex = 25;
			this->button25->Text = L"root";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::rootbtn_click);
			// 
			// operatorshow
			// 
			this->operatorshow->AutoSize = true;
			this->operatorshow->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->operatorshow->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operatorshow->Location = System::Drawing::Point(12, 65);
			this->operatorshow->Name = L"operatorshow";
			this->operatorshow->Size = System::Drawing::Size(98, 23);
			this->operatorshow->TabIndex = 26;
			this->operatorshow->Text = L"Operator";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(244, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 64);
			this->button1->TabIndex = 27;
			this->button1->Text = L"π";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::pibtn_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 448);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->operatorshow);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first, second, result;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;
		}
	}
    private: System::Void pibtn_click(System::Object^ sender, System::EventArgs^ e) {

		textBox1->Text = System::Convert::ToString(Math::PI);
	}

    private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	first = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
	operatorshow->Text = operators;
    }
    private: System::Void dotbtn_click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
    }
    private: System::Void equalbtn_click(System::Object^ sender, System::EventArgs^ e) {
	second = Double::Parse(textBox1->Text);	                       
	if (operators == "+")
	{
		result = first + second;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = first - second;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = first * second;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = first / second;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "%")
	{
		result = (first / second)*100;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "x^y")
	{
		result = Math::Pow(first, second);
		textBox1->Text = System::Convert::ToString(result);
	}
}

    private: System::Void signbtn_click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text; 
	}
    }
    private: System::Void btnc_click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	operatorshow->Text = "Operator";
    }
    private: System::Void trigocalculation(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	first = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
	if (operators == "Sin")
	{
		operatorshow->Text = operators;
		result = Math::Sin(first);
		if (Math::Abs(result) < 1e-10)
		{
			result = 0;
		}
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "Cos")
	{
		operatorshow->Text = operators;
		result = Math::Cos(first);
		if (Math::Abs(result) < 1e-10)
		{
			result = 0;
		}
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "tan")
	{
		operatorshow->Text = operators;
		result = Math::Tan(first);
		if (Math::Abs(result) < 1e-10)
		{
			result = 0;
		}
		textBox1->Text = System::Convert::ToString(result);
	}
    }
    private: System::Void rootbtn_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	first = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
	operatorshow->Text = operators;
	result = Math::Sqrt(first);
	textBox1->Text = System::Convert::ToString(result);
    }
    };
}