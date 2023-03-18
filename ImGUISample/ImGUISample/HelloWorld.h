#pragma once;

#include "imgui.h"
#include "imgui_impl_dx9.h"
#include "imgui_impl_win32.h"
#include <vector>
#include <string>
#include <variant>
#include <variant>

using namespace std;

std::vector<std::variant<int, float, char>> GetExampleVector();
