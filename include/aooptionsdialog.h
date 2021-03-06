#ifndef AOOPTIONSDIALOG_H
#define AOOPTIONSDIALOG_H

#include "aoapplication.h"
#include "bass.h"

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include <QDirIterator>
#include <QTextStream>

class AOOptionsDialog: public QDialog
{
    Q_OBJECT
public:
    explicit AOOptionsDialog(QWidget *parent = nullptr, AOApplication *p_ao_app = nullptr);

private:
    AOApplication *ao_app;

    QVBoxLayout *ui_vertical_layout;
    QTabWidget *ui_settings_tabs;

    QWidget *ui_gameplay_tab;
    QWidget *ui_form_layout_widget;
    QFormLayout *ui_gameplay_form;
    QLabel *ui_theme_label;
    QComboBox *ui_theme_combobox;
    QFrame *ui_theme_log_divider;
    QLabel *ui_downwards_lbl;
    QCheckBox *ui_downwards_cb;
    QLabel *ui_length_lbl;
    QSpinBox *ui_length_spinbox;
    QFrame *ui_log_names_divider;
    QLineEdit *ui_username_textbox;
    QLabel *ui_username_lbl;
    QLabel *ui_showname_lbl;
    QCheckBox *ui_showname_cb;
    QFrame *ui_net_divider;
    QLabel *ui_ms_lbl;
    QLineEdit *ui_ms_textbox;
    QLabel *ui_discord_lbl;
    QCheckBox *ui_discord_cb;

    QWidget *ui_callwords_tab;
    QWidget *ui_callwords_widget;
    QVBoxLayout *ui_callwords_layout;
    QPlainTextEdit *ui_callwords_textbox;
    QLabel *ui_callwords_explain_lbl;
    QCheckBox *ui_callwords_char_textbox;

    QWidget *ui_audio_tab;
    QWidget *ui_audio_widget;
    QFormLayout *ui_audio_layout;
    QLabel *ui_audio_device_lbl;
    QComboBox *ui_audio_device_combobox;
    QFrame *ui_audio_volume_divider;
    QSpinBox *ui_music_volume_spinbox;
    QLabel *ui_music_volume_lbl;
    QSpinBox *ui_sfx_volume_spinbox;
    QSpinBox *ui_blips_volume_spinbox;
    QLabel *ui_sfx_volume_lbl;
    QLabel *ui_blips_volume_lbl;
    QFrame *ui_volume_blip_divider;
    QSpinBox *ui_bliprate_spinbox;
    QLabel *ui_bliprate_lbl;
    QCheckBox *ui_blank_blips_cb;
    QLabel *ui_blank_blips_lbl;
    QDialogButtonBox *ui_settings_buttons;

    QWidget *ui_casing_tab;
    QWidget *ui_casing_widget;
    QFormLayout *ui_casing_layout;
    QLabel *ui_casing_supported_lbl;
    QLabel *ui_casing_enabled_lbl;
    QCheckBox *ui_casing_enabled_cb;
    QLabel *ui_casing_def_lbl;
    QCheckBox *ui_casing_def_cb;
    QLabel *ui_casing_pro_lbl;
    QCheckBox *ui_casing_pro_cb;
    QLabel *ui_casing_jud_lbl;
    QCheckBox *ui_casing_jud_cb;
    QLabel *ui_casing_jur_lbl;
    QCheckBox *ui_casing_jur_cb;
    QLabel *ui_casing_steno_lbl;
    QCheckBox *ui_casing_steno_cb;
    QLabel *ui_casing_cm_lbl;
    QCheckBox *ui_casing_cm_cb;
    QLabel *ui_casing_cm_cases_lbl;
    QLineEdit *ui_casing_cm_cases_textbox;

    bool needs_default_audiodev();

signals:

public slots:
    void save_pressed();
    void discard_pressed();
};

#endif // AOOPTIONSDIALOG_H
