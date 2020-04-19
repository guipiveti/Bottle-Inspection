#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <opencv2/features2d.hpp>

#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"


using namespace System; 
using namespace cv;
using namespace std;



namespace Projeto_OpenCV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public: int cont_Aprovados = 0, cont_Reprovados = 0;
	public: Boolean instrucoes_ja_apresentadas = false;
	private: System::Windows::Forms::Label^  titulo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::LineAnnotation^ lineAnnotation2 = (gcnew System::Windows::Forms::DataVisualization::Charting::LineAnnotation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->titulo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 118);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calibrar Fundo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 118);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Calibrar Produto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(463, 118);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Tirar Foto";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(128, 39);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 4;
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm::bindingSource1_CurrentChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 154);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->Size = System::Drawing::Size(564, 722);
			this->dataGridView1->TabIndex = 5;
			// 
			// chart1
			// 
			lineAnnotation2->Name = L"LineAnnotation1";
			lineAnnotation2->Visible = false;
			this->chart1->Annotations->Add(lineAnnotation2);
			this->chart1->BackColor = System::Drawing::SystemColors::Control;
			this->chart1->BackSecondaryColor = System::Drawing::Color::Silver;
			this->chart1->BorderlineColor = System::Drawing::SystemColors::ActiveCaptionText;
			chartArea2->BackColor = System::Drawing::SystemColors::Control;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(607, 154);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->CustomProperties = L"PieLineColor=Black, CollectedColor=Lime";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(400, 369);
			this->chart1->TabIndex = 6;
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// titulo
			// 
			this->titulo->AutoSize = true;
			this->titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titulo->Location = System::Drawing::Point(387, 25);
			this->titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titulo->Name = L"titulo";
			this->titulo->Size = System::Drawing::Size(688, 54);
			this->titulo->TabIndex = 7;
			this->titulo->Text = L"Sistema de Deteção de Falhas";
			this->titulo->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(932, 249);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 1000);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1067, 57);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Guilherme Piveti Filho";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1105, 796);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->titulo);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teste de Qualidade";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!instrucoes_ja_apresentadas) {
			MessageBox::Show("Para tirar a foto pressione a barra de espaço");
			instrucoes_ja_apresentadas = true;
		}

		VideoCapture cam(0);
		char comando = NULL;
		cv::Mat frame;
		while (comando != ' ') {
			cam >> frame;
			imshow("Câmera", frame);
			comando = waitKey(20);
		}
		cam.release();
		cv::imwrite("Gabarito.jpg", frame);
		cvDestroyWindow("Câmera");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!instrucoes_ja_apresentadas) {
			MessageBox::Show("Para tirar a foto pressione a barra de espaço");
			instrucoes_ja_apresentadas = true;
		}


		VideoCapture cam(0);
		char comando = NULL;
		cv::Mat frame;
		while (comando != ' ') {
			cam >> frame;
			imshow("Câmera", frame);
			comando = waitKey(20);
		}
		cam.release();
		cv::imwrite("Objeto_Padrao.jpg", frame);
		cvDestroyWindow("Câmera");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!instrucoes_ja_apresentadas) {
			MessageBox::Show("Para tirar a foto pressione a barra de espaço");
			instrucoes_ja_apresentadas = true;
		}


		//*****************TIRANDO FOTO DO OBJETO_TESTE*****************
		VideoCapture cam(0);
		Boolean sair = false;
		char comando = NULL;
		cv::Mat frame;
		
		//System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		cam >> frame;
		//System::IntPtr ptr(frame.ptr());
		while (comando!=' ') {
			cam >> frame;
			/*
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(frame.size().width, frame.size().height, frame.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, frame.size().width, frame.size().height);
			graphics->DrawImage(b, rect);
			*/
			imshow("Câmera", frame);
			comando = waitKey(20);
		}
	
		cam.release();
		cv::imwrite("Objeto_Teste.jpg", frame);
		cvDestroyWindow("Câmera");



		



		//*****************TIRANDO FOTO DO OBJETO_TESTE*****************

		//*****************TESTANDO CONTORNOS **************************
		Mat gabarito = imread("Gabarito.jpg", CV_LOAD_IMAGE_GRAYSCALE);
		Mat objeto_padrao = imread("Objeto_Padrao.jpg", CV_LOAD_IMAGE_GRAYSCALE);
		Mat objeto_teste = imread("Objeto_Teste.jpg", CV_LOAD_IMAGE_GRAYSCALE);

		absdiff(objeto_padrao, gabarito, objeto_padrao);    absdiff(objeto_teste, gabarito, objeto_teste);

		blur(objeto_padrao, objeto_padrao, cv::Size(3, 3));		blur(objeto_teste, objeto_teste, cv::Size(3, 3));
		blur(objeto_padrao,	objeto_padrao, cv::Size(3, 3));		blur(objeto_teste, objeto_teste, cv::Size(3, 3));
		blur(objeto_padrao, objeto_padrao, cv::Size(3, 3));		blur(objeto_teste, objeto_teste, cv::Size(3, 3));

		threshold(objeto_padrao, objeto_padrao, 40, 500, THRESH_BINARY_INV);		threshold(objeto_teste, objeto_teste, 40, 500, THRESH_BINARY_INV);

		double largest_area = 0;		double largest_area2 = 0;
		int largest_contour_index = 0;		int largest_contour_index2 = 0;
		Rect bounding_rect;		Rect bounding_rect2;
		vector<vector<cv::Point> > contours;		vector<vector<cv::Point> > contours2;
		vector<Vec4i> hierarchy;		vector<Vec4i> hierarchy2;
		findContours(objeto_padrao, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);		findContours(objeto_teste, contours2, hierarchy2, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
		Mat gabarito_colorido = imread("Gabarito.jpg", CV_LOAD_IMAGE_COLOR);

		for (int i = 0; i< contours.size(); i++)
		{
			//drawContours(gabarito_colorido, contours, i, Scalar(255, 0, 0), 1, 8); //////PARA TESTE
			double a = contourArea(contours[i], false);
			if (a>largest_area) {
				largest_area = a;
				largest_contour_index = i;
				bounding_rect = boundingRect(contours[i]);
			}
		}
		
		for (int i = 0; i< contours2.size(); i++)
		{
			//drawContours(gabarito_colorido, contours2, i, Scalar(0, 0, 255), 1, 8); //////PARA TESTE
			double a2 = contourArea(contours2[i], false);
			if (a2>largest_area2) {
				largest_area2 = a2;
				largest_contour_index2 = i;
				bounding_rect2 = boundingRect(contours2[i]);
			}
		}
		drawContours(gabarito_colorido, contours, largest_contour_index + 1, Scalar(255, 255, 0), 1, 8);
		drawContours(gabarito_colorido, contours2, largest_contour_index2 + 1, Scalar(0, 255, 0), 1, 8);
		//imshow("Análise de Contornos", gabarito_colorido);
		imwrite("Contorno.jpg", gabarito_colorido);
		
		/*
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(gabarito_colorido.ptr());
		System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(gabarito_colorido.size().width, gabarito_colorido.size().height, gabarito_colorido.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, gabarito_colorido.size().width, gabarito_colorido.size().height);
		graphics->DrawImage(b, rect);
		*/
	
		pictureBox1->ImageLocation = "Contorno.jpg";
		//imshow("Contorno", gabarito_colorido);


		//*****************TESTANDO CONTORNOS **************************

		//*****************COMPARANDO CONTORNOS **************************
		double diferenca = matchShapes(contours[largest_contour_index + 1], contours2[largest_contour_index2 + 1], CV_CONTOURS_MATCH_I1, 0);
		label1->Text = Convert::ToString(diferenca);
		System::String^ constr = gcnew System::String("Server=127.0.0.1;Uid=root;Pwd=senha;Database=bancodedados;");
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		System::String^ Status = gcnew System::String("");
		if (diferenca < 0.20) {
			Status = "Aprovado";
			label2->Text = "Aprovado";
			cont_Aprovados++;
		}
		else {
			Status = "Reprovado";
			label2->Text = "Reprovado";
			cont_Reprovados++;
		}
		
		//***********************************************************Atualizando o grafico
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series1"]->Points->AddXY("Aprovados", cont_Aprovados);
		chart1->Series["Series1"]->Points->AddXY("Reprovados", cont_Reprovados);
		Refresh();
		//************************************************************Atualizando o grafico
		
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("insert into produtos (Status, `Indice de Semelhança`, Horário ) values ('"+Status+"', "+ diferenca +", '"+ DateTime::Now.ToString()+"' )", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			System::String^ constr = gcnew System::String("Server=127.0.0.1;Uid=root;Pwd=senha;Database=bancodedados;");
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM PRODUTOS", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		dataGridView1->FirstDisplayedScrollingRowIndex = dataGridView1->RowCount - 1;
		waitKey(0);
	}
private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			System::String^ constr = gcnew System::String("Server=127.0.0.1;Uid=root;Pwd=senha;Database=bancodedados;");
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM PRODUTOS", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		//***********************************************************Criando o grafico

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			if (Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value) == "Aprovado") { cont_Aprovados++; }
			else if (Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value) == "Reprovado") { cont_Reprovados++; }
		}
		if (cont_Aprovados > 0) {
			chart1->Series["Series1"]->Points->AddXY("Aprovados", cont_Aprovados);
		}
		if (cont_Reprovados > 0) {
			chart1->Series["Series1"]->Points->AddXY("Reprovados", cont_Reprovados);
		}
		Refresh();

		if (dataGridView1->RowCount >= 1) { dataGridView1->FirstDisplayedScrollingRowIndex = dataGridView1->RowCount - 1; }
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	Application::Exit();
}
};
}
