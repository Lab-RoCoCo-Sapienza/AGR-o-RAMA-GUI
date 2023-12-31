#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QFileDialog>
#include <QWindow>
#include <QUrl>
#include <QGroupBox>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QScrollArea>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QQmlProperty>
#include <QtWidgets>
#include <QPixmap>
#include <QPalette>
#include <yaml-cpp/yaml.h>

#define GUI_SUB_PATH "gui"
#define CSV_NAME "mapping.csv"
#define YAML_PARAMS_NAME "params.yaml"
#define YAML_SAVE_NAME "save.yaml"

class Settings : public QWidget
{
    Q_OBJECT
public:
    Settings(QWidget *parent = nullptr);

    // PROPERTIES
    inline static QUrl photo_path;
    inline static QUrl project_path;
    inline static QUrl output_path;
    inline static QString api_key;

    // ADVANCED PROPERTIES

    inline static QString run_name;
    inline static QString project_crs;
    inline static bool subdivide_task;
    inline static bool use_cuda;

    inline static bool enabled_align;
    inline static int downscale_align;
    inline static bool adaptive_align;
    inline static bool keypoints_align;
    inline static bool reset_align;
    inline static bool genPre_align;
    inline static bool refPre_align;
    inline static QString preMode_align;

    inline static bool enable_USGS;
    inline static double recPerc_USGS;
    inline static double recAbs_USGS;
    inline static double projPerc_USGS;
    inline static double projAbs_USGS;
    inline static double reprojPerc_USGS;
    inline static double reprojAbs_USGS;

    inline static bool enable_opt;
    inline static bool adaptive_opt;

    inline static bool enable_cloud;
    inline static double downscale_cloud;
    inline static QString filter_cloud;
    inline static bool reuse_cloud;
    inline static bool keep_cloud;
    inline static int maxneighbors_cloud;
    inline static bool classify_cloud;
    inline static bool export_cloud;
    inline static QString classes_cloud;

    inline static double angle_classify;
    inline static double distance_classify;
    inline static double cell_classify;

    inline static bool enable_DEM;
    inline static bool classify_DEM;
    inline static QString type_DEM;
    inline static bool export_DEM;
    inline static bool big_DEM;
    inline static bool tiled_DEM;
    inline static int nodata_DEM;
    inline static bool overviews_DEM;

    inline static bool enable_ortho;
    inline static QString surface_ortho;
    inline static QString path_ortho;
    inline static QString crs_ortho;
    inline static QString blending_ortho;
    inline static bool holes_ortho;
    inline static bool seamlines_ortho;
    inline static bool export_ortho;
    inline static bool big_ortho;
    inline static bool tiled_ortho;
    inline static int nodata_ortho;
    inline static bool overviews_ortho;

    inline static QString guiSubDir;
    inline static QString csvName;
    inline static QString yamlParamsName;
    inline static QString yamlSaveName;

public slots:
    static void setUse_cuda(bool newUse_cuda);
    static bool getUse_cuda();
    static QString getProject_path();
    static QString getYamlParamsName();
    static QString getGuiSubDir();
    static QString getYamlSaveName();
    static QUrl getOutputPath();
    static void dumpToYaml(QString path, float tileSize = -1.f);
    static QString pathJoin(std::vector<QString> paths);
};

#endif // SETTINGS_H
