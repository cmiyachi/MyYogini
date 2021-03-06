// Copyright (C) 2018-2019 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <gflags/gflags.h>
#include <iostream>

/// @brief Message for help argument
static const char help_message[] = "Print a usage message.";

/// @brief Message for video argument
static const char video_message[] = "Required. Path to a video. Default value is \"cam\" to work with camera.";
static const char compare_message[] = "Required. Path to a photo to compare to. ";
static const char pose_message[] = "Required. Yoga pose. ";
static const char output_message[] = "Optional. Path to the output directory. ";
/// @brief Message for model argument
static const char human_pose_estimation_model_message[] = "Required. Path to the Human Pose Estimation model (.xml) file.";

/// @brief Message for assigning Human Pose Estimation inference to device
static const char target_device_message[] = "Optional. Specify the target device for Human Pose Estimation "\
                                            "(the list of available devices is shown below). Default value is CPU. " \
                                            "Use \"-d HETERO:<comma-separated_devices_list>\" format to specify HETERO plugin. " \
                                            "The application looks for a suitable plugin for the specified device.";

/// @brief Message for performance counter
static const char performance_counter_message[] = "Optional. Enable per-layer performance report.";

/// @brief Message for not showing processed video
static const char no_show_processed_video[] = "Optional. Do not show processed video.";

/// @brief Message for not showing text on frame
static const char no_text_message[] = "Optional. Do not show text on frame.";
/// @brief Message for raw output
static const char raw_output_message[] = "Optional. Output inference results as raw values.";

/// @brief Defines flag for showing help message <br>
DEFINE_bool(h, false, help_message);

/// @brief Defines parameter for setting video file <br>
/// It is a required parameter
DEFINE_string(i, "cam", video_message);

/// @brief Defines parameter for setting video file <br> to compare to
/// It is a required parameter
DEFINE_string(c, "", compare_message);

/// @brief Defines parameter for setting video file <br> to compare to
/// It is a required parameter
DEFINE_string(p, "", pose_message);
/// @brief Defines parameter for human pose estimation model file <br>
/// It is a required parameter
DEFINE_string(m, "", human_pose_estimation_model_message);

/// @brief Defines parameter for the target device to infer on <br>
/// It is an optional parameter
DEFINE_string(d, "CPU", target_device_message);

/// @brief Defines parameter for the output file <br>
/// It is an optional parameter
DEFINE_string(o, "result", no_show_processed_video);

/// @brief Defines flag for per-layer performance report <br>
/// It is an optional parameter
DEFINE_bool(pc, false, performance_counter_message);

/// @brief Defines flag for disabling processed video showing <br>
/// It is an optional parameter
DEFINE_bool(no_show, false, no_show_processed_video);

/// @brief Defines flag to output raw results <br>
/// It is an optional parameter
DEFINE_bool(r, false, raw_output_message);

/// @brief Defines flag for displaying text <br>
/// It is an optional parameter
DEFINE_bool(no_text, false, no_text_message);
/**
* @brief This function shows a help message
*/
static void showUsage() {
    std::cout << std::endl;
    std::cout << "my_yogini [OPTION]" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << std::endl;
    std::cout << "    -h                         " << help_message << std::endl;
    std::cout << "    -i \"<path>\"                " << video_message << std::endl;
    std::cout << "    -c \"<path>\"                " << compare_message << std::endl;
    std::cout << "    -p \"<pose>\"                " << pose_message << std::endl;
    std::cout << "    -m \"<path>\"                " << human_pose_estimation_model_message << std::endl;
    std::cout << "    -o \"<path>\"                " << output_message << std::endl;
    std::cout << "    -d \"<device>\"              " << target_device_message << std::endl;
    std::cout << "    -pc                        " << performance_counter_message << std::endl;
    std::cout << "    -no_show                   " << no_show_processed_video << std::endl;
    std::cout << "    -no_text                  " <<  no_text_message << std::endl;
    std::cout << "    -r                         " << raw_output_message << std::endl;
}
