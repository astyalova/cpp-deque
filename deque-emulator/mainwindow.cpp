#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <algorithm>
#include <random>
#include "algo.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    deque_model_.iterator = deque_model_.items.begin();

    ApplyModel();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::ApplyModel() {

    auto preserve_iter = deque_model_.iterator;
    ui->list_widget->clear();

    if (deque_model_.items.empty()) {
        ui->btn_pop_back->setEnabled(false);
        ui->btn_erase->setEnabled(false);
        ui->btn_dec->setEnabled(false);
        ui->btn_inc->setEnabled(false);
        ui->btn_edit->setEnabled(false);
        ui->btn_pop_front->setEnabled(false);
    } else {
        ui->btn_pop_back->setEnabled(true);
        ui->btn_erase->setEnabled(true);
        ui->btn_dec->setEnabled(true);
        ui->btn_inc->setEnabled(true);
        ui->btn_edit->setEnabled(true);
        ui->btn_pop_front->setEnabled(true);
    }

    if(deque_model_.iterator == deque_model_.items.begin()) {
        ui->btn_dec->setEnabled(false);
    } else {
        ui->btn_dec->setEnabled(true);
    }

    QString size = QString::number(deque_model_.items.size());
    ui->txt_size->setText(size);

    for (size_t i = 0; i < deque_model_.items.size(); ++i) {
        QString str = QString::fromStdString(deque_model_.items[i]);
        ui->list_widget->addItem(QString::number(i) + ": " + str);
    }

    ui->list_widget->addItem("end");

    if (deque_model_.items.empty() || preserve_iter == deque_model_.items.end()) {
        deque_model_.iterator = deque_model_.items.end();
    } else {
        deque_model_.iterator = deque_model_.items.begin() + std::distance(deque_model_.items.begin(), preserve_iter);
    }

    ApplyIterator();
}

void MainWindow::ApplyIterator() {
    if (deque_model_.items.empty() || deque_model_.iterator == deque_model_.items.end()) {
        ui->txt_elem_content->setText("");
        ui->btn_erase->setEnabled(false);
        ui->btn_inc->setEnabled(false);
        ui->btn_edit->setEnabled(false);
        ui->btn_upper_bound->setEnabled(false);
        ui->btn_lower_bound->setEnabled(false);

        int end_index = ui->list_widget->count() - 1;
        if (end_index >= 0) {
            ui->list_widget->setCurrentRow(end_index);
        }
    } else {
        ui->btn_erase->setEnabled(true);
        ui->btn_inc->setEnabled(true);
        ui->btn_edit->setEnabled(true);
        ui->btn_upper_bound->setEnabled(true);
        ui->btn_lower_bound->setEnabled(true);

        int index = std::distance(deque_model_.items.begin(), deque_model_.iterator);
        ui->list_widget->setCurrentRow(index);

        ui->txt_elem_content->setText(QString::fromStdString(*deque_model_.iterator));
    }

    ui->btn_dec->setEnabled(deque_model_.iterator != deque_model_.items.begin());
}

void MainWindow::on_btn_pop_back_clicked() {
    if (!deque_model_.items.empty()) {
        deque_model_.items.pop_back();
        deque_model_.iterator = deque_model_.items.begin();
        ApplyModel();
    }
}

void MainWindow::on_btn_push_back_clicked() {
    QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();
    deque_model_.items.push_back(str);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_clear_clicked() {
    deque_model_.items.clear();
    deque_model_.iterator = deque_model_.items.end();
    ApplyModel();
}

void MainWindow::on_btn_tea_clicked() {
    std::deque<std::string> tea = {
        "Чай Лунцзин",
        "Эрл Грей",
        "Сенча",
        "Пуэр",
        "Дарджилинг",
        "Ассам",
        "Матча",
        "Ганпаудер",
        "Оолонг",
        "Лапсанг Сушонг"
    };
    deque_model_.items = tea;
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_cakes_clicked() {
    std::deque<std::string> cakes = {
        "Красный бархат",
        "Наполеон",
        "Медовик",
        "Тирамису",
        "Прага",
        "Чизкейк",
        "Захер",
        "Эстерхази",
        "Морковный торт",
        "Чёрный лес",
    };
    deque_model_.items = cakes;
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_erase_clicked() {
    if (!deque_model_.items.empty() && deque_model_.iterator != deque_model_.items.end()) {
        deque_model_.iterator = deque_model_.items.erase(deque_model_.iterator);
        deque_model_.iterator = deque_model_.items.begin();
        ApplyModel();
    }
}

void MainWindow::on_btn_insert_clicked() {
    QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();
    deque_model_.items.insert(deque_model_.iterator, str);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_inc_clicked() {
    if (!deque_model_.items.empty() && deque_model_.iterator != deque_model_.items.end()) {
        ++deque_model_.iterator;
    }
    ApplyIterator();
}

void MainWindow::on_btn_dec_clicked() {
    if (deque_model_.iterator != deque_model_.items.begin()) {
        --deque_model_.iterator;
    }
    ApplyIterator();
}

void MainWindow::on_btn_begin_clicked() {
    deque_model_.iterator = deque_model_.items.begin();
    ApplyIterator();
}

void MainWindow::on_btn_end_clicked() {
    deque_model_.iterator = deque_model_.items.end();
    ApplyIterator();
}

void MainWindow::on_list_widget_currentRowChanged(int current_row) {
    if (current_row >= 0 && current_row < static_cast<int>(deque_model_.items.size())) {
        deque_model_.iterator = deque_model_.items.begin() + current_row;
    } else {
        deque_model_.iterator = deque_model_.items.end();
    }

    ApplyIterator();
}



void MainWindow::on_btn_edit_clicked()
{
    int index = std::distance(deque_model_.items.begin(), deque_model_.iterator);
    QString str = ui->txt_elem_content->text();
    deque_model_.items[index] = str.toStdString();
    ApplyModel();
}

void MainWindow::on_btn_resize_clicked()
{
    QString str = (ui->txt_size->text());
    int size = str.toInt();

    deque_model_.items.resize(size);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_find_clicked()
{
    QString qstr = ui->txt_elem_content->text();
    std::string str = qstr.toStdString();
    deque_model_.iterator = std::find(deque_model_.items.begin(), deque_model_.items.end(), str);
    ApplyIterator();
}


void MainWindow::on_btn_count_clicked()
{
    QString qstr = ui->le_count->text();
    std::string str = qstr.toStdString();
    int c = std::count(deque_model_.items.begin(), deque_model_.items.end(), str);
    ui->lbl_count->setText(QString::number(c));
}


void MainWindow::on_btn_min_element_clicked()
{
    deque_model_.iterator = std::min_element(deque_model_.items.begin(), deque_model_.items.end());
    ApplyIterator();
}


void MainWindow::on_btn_max_element_clicked()
{
    deque_model_.iterator = std::max_element(deque_model_.items.begin(), deque_model_.items.end());
    ApplyIterator();
}


void MainWindow::on_btn_merge_sort_clicked()
{

    deque_model_.items = MergeSort(deque_model_.items, std::less<std::string>());

    deque_model_.iterator = deque_model_.items.begin();

    ApplyModel();
}


void MainWindow::on_btn_merge_sOrT_clicked()
{
    auto comp =  [](const std::string& str1, const std::string& str2) {
        for (size_t i = 0; i < std::min(str1.size(), str2.size()); ++i) {
            char c1 = std::tolower(static_cast<unsigned char>(str1[i]));
            char c2 = std::tolower(static_cast<unsigned char>(str2[i]));
            if (c1 != c2) {
                return c1 < c2;
            }
        }
        return str1.size() < str2.size();
    };

    deque_model_.items = MergeSort(deque_model_.items, comp);
    deque_model_.iterator = deque_model_.items.begin();

    ApplyModel();
}


void MainWindow::on_btn_unique_clicked()
{
    if(!std::is_sorted(deque_model_.items.begin(), deque_model_.items.end())) {
        return;
    }

    auto it = std::unique(deque_model_.items.begin(), deque_model_.items.end());
    deque_model_.items.erase(it, deque_model_.items.end());
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_reverse_clicked()
{
    std::reverse(deque_model_.items.begin(), deque_model_.items.end());
    ApplyModel();
}


void MainWindow::on_btn_shuffle_clicked()
{
    std::random_device rd;
    std::mt19937 random_gen;
    SetRandomGen(random_gen);
    std::shuffle(deque_model_.items.begin(), deque_model_.items.end(), random_gen);
    ApplyModel();
}

void MainWindow::SetRandomGen(std::mt19937& random_gen)
{
    unsigned seed = 157;
    random_gen.seed(seed);
}

void MainWindow::on_btn_pop_front_clicked()
{
    deque_model_.items.pop_front();
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_push_front_clicked()
{
    QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();
    deque_model_.items.push_front(str);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_lower_bound_clicked()
{
    if(!std::is_sorted(deque_model_.items.begin(), deque_model_.items.end())) {
        return;
    }

    QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();
    auto it = std::lower_bound(deque_model_.items.begin(), deque_model_.items.end(), str);
    deque_model_.iterator = it;
    ApplyModel();
}


void MainWindow::on_btn_upper_bound_clicked()
{
    if(!std::is_sorted(deque_model_.items.begin(), deque_model_.items.end())) {
        return;
    }

    QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();
    auto it = std::upper_bound(deque_model_.items.begin(), deque_model_.items.end(), str);
    deque_model_.iterator = it;
    ApplyModel();
}



