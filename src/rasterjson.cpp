#include "rasterjson.h"

RasterJson::RasterJson(QWidget *parent) : QWidget(parent)
{
    name=QString(JSON_NAME);
    json_string = QString(R"({
    "raster_function_arguments": {
        "raster": {
            "raster_function_arguments": {
                "weights": {
                    "name": "weights",
                    "is_raster": false,
                    "type": "Raster_function_variable"
                },
                "pansharpen_type": {
                    "pansharpen_type": "mean",
                    "name": "pansharpen_type",
                    "is_raster": false,
                    "type": "Raster_function_variable"
                },
                "pan_raster": {
                    "raster_function_arguments": {
                        "z_factor": {
                            "double": 1,
                            "name": "z_factor",
                            "is_raster": false,
                            "type": "Raster_function_variable"
                        },
                        "slope_type": {
                            "raster_slope_type": "none",
                            "name": "slope_type",
                            "is_raster": false,
                            "type": "Raster_function_variable"
                        },
                        "azimuth": {
                            "double": 315,
                            "name": "azimuth",
                            "is_raster": false,
                            "type": "Raster_function_variable"
                        },
                        "altitude": {
                            "double": 45,
                            "name": "altitude",
                            "is_raster": false,
                            "type": "Raster_function_variable"
                        },
                        "type": "Raster_function_arguments",
                        "raster": {
                            "name": "raster",
                            "is_raster": true,
                            "type": "Raster_function_variable"
                        },
                        "nbits": {
                            "name": "nbits",
                            "is_raster": false,
                            "int": 8,
                            "type": "Raster_function_variable"
                        }
                    },
                    "raster_function": {
                        "description": "Add hillshade effect to the input raster",
                        "name": "Hillshade_function",
                        "type": "Hillshade_function"
                    },
                    "variable_name": "pan_raster",
                    "name": "hillshade_function_template",
                    "type": "Raster_function_template"
                },
                "type": "Raster_function_arguments",
                "raster": {
                    "raster_function_arguments": {
                        "raster": {
                            "raster_function_arguments": {
                                "resizable": {
                                    "bool": false,
                                    "name": "resizable",
                                    "is_raster": false,
                                    "type": "Raster_function_variable"
                                },
                                "min_value": {
                                    "name": "min_value",
                                    "is_raster": false,
                                    "int": 323,
                                    "type": "Raster_function_variable"
                                },
                                "color_ramp": {
                                    "color_ramp": {
                                        "ramps": [{
                                            "to_color": [0, 255, 0],
                                            "from_color": [0, 191, 191],
                                            "num_colors": 72,
                                            "algorithmic_type": "hsv",
                                            "color_ramp_type": "algorithmic",
                                            "type": "Algorithmic_color_ramp"
                                        }, {
                                            "to_color": [255, 255, 0],
                                            "from_color": [0, 255, 0],
                                            "num_colors": 72,
                                            "algorithmic_type": "hsv",
                                            "color_ramp_type": "algorithmic",
                                            "type": "Algorithmic_color_ramp"
                                        }, {
                                            "to_color": [255, 127, 0],
                                            "from_color": [255, 255, 0],
                                            "num_colors": 72,
                                            "algorithmic_type": "hsv",
                                            "color_ramp_type": "algorithmic",
                                            "type": "Algorithmic_color_ramp"
                                        }, {
                                            "to_color": [191, 127, 63],
                                            "from_color": [255, 127, 0],
                                            "num_colors": 72,
                                            "algorithmic_type": "hsv",
                                            "color_ramp_type": "algorithmic",
                                            "type": "Algorithmic_color_ramp"
                                        }, {
                                            "to_color": [20, 20, 20],
                                            "from_color": [191, 127, 63],
                                            "num_colors": 76,
                                            "algorithmic_type": "hsv",
                                            "color_ramp_type": "algorithmic",
                                            "type": "Algorithmic_color_ramp"
                                        }],
                                        "custom_colors": [28, 107, 160],
                                        "color_ramp_name": "elevation",
                                        "custom_values": [0],
                                        "color_ramp_type": "multipart",
                                        "type": "Multipart_color_ramp"
                                    },
                                    "name": "color_ramp",
                                    "is_raster": false,
                                    "type": "Raster_function_variable"
                                },
                                "raster": {
                                    "raster_function_arguments": {
                                        "stretch_type": {
                                            "raster_stretch_type": "minimum_maximum",
                                            "name": "stretch_type",
                                            "is_raster": false,
                                            "type": "Raster_function_variable"
                                        },
                                        "min_values": {
                                            "double_array": [323.42590332031],
                                            "name": "min_values",
                                            "is_raster": false,
                                            "type": "Raster_function_variable"
                                        },
                                        "max_values": {
                                            "double_array": [686.29626464844],
                                            "name": "max_values",
                                            "is_raster": false,
                                            "type": "Raster_function_variable"
                                        },
                                        "estimate_stats": {
                                            "bool": false,
                                            "name": "estimate_stats",
                                            "is_raster": false,
                                            "type": "Raster_function_variable"
                                        },
                                        "raster": {
                                            "name": "raster",
                                            "is_raster": true,
                                            "type": "Raster_function_variable"
                                        },
                                        "type": "Raster_function_arguments"
                                    },
                                    "raster_function": {
                                        "description": "Stretch input pixel values to a given output value range.",
                                        "name": "Stretch_function",
                                        "type": "Stretch_function"
                                    },
                                    "variable_name": "raster",
                                    "name": "stretch_function_template",
                                    "type": "Raster_function_template"
                                },
                                "type": "Raster_function_arguments"
                            },
                            "raster_function": {
                                "description": "Set a color ramp on the input raster.",
                                "name": "Color_ramp_function",
                                "type": "Color_ramp_function"
                            },
                            "variable_name": "raster",
                            "name": "color_ramp_function_template",
                            "type": "Raster_function_template"
                        },
                        "type": "Raster_function_arguments"
                    },
                    "raster_function": {
                        "description": "Convert a colormap raster to multiband raster.",
                        "name": "Colormap_to_RGB_function",
                        "type": "Colormap_to_RGB_function"
                    },
                    "variable_name": "raster",
                    "name": "colormap_to_rgb_function_template",
                    "type": "Raster_function_template"
                },
                "mode": {
                    "pansharpen_function_mode": "blend",
                    "name": "mode",
                    "is_raster": false,
                    "type": "Raster_function_variable"
                }
            },
            "raster_function": {
                "description": "Apply pan-sharpening to the input raster",
                "name": "Pansharpen_function",
                "type": "Pansharpen_function"
            },
            "variable_name": "raster",
            "name": "pansharpen_function_template",
            "type": "Raster_function_template"
        },
        "type": "Raster_function_arguments"
    },
    "raster_function": {
        "description": "Blend a color image with a grayscale image, such as hillshade, to produce hillshade effect on the color image",
        "name": "Blend_function",
        "type": "Blend_function"
    },
    "variable_name": "blend_function_template",
    "name": "blend_function_template",
    "type": "Raster_function_template"
})");
}

void RasterJson::writeJSON()
{
    QFile file(name);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)){
        QTextStream stream(&file);
        stream << json_string;
        file.close();
    }
}
