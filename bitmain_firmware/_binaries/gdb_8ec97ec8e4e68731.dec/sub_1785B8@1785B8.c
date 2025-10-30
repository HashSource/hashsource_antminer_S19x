int sub_1785B8()
{
  dword_4877F4 = (int)sub_16EBC0((int)sub_177490);
  dword_487828 = sub_1B6AEC(dword_4877F4);
  sub_53934(
    "overload",
    -1,
    (int)&dword_4877F8,
    "Set debugging of C++ overloading.",
    "Show debugging of C++ overloading.",
    "When enabled, ranking of the functions is displayed.",
    0,
    (int)sub_16F88C,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_535B8(
    "opaque-type-resolution",
    4,
    (int)&dword_46D4B0,
    "Set resolution of opaque struct/class/union types (if set before loading symbols).",
    "Show resolution of opaque struct/class/union types (if set before loading symbols).",
    0,
    0,
    (int)sub_16F87C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_535B8(
           "type",
           4,
           (int)&dword_46D4B4,
           "Set strict type checking.",
           "Show strict type checking.",
           0,
           0,
           (int)sub_16F86C,
           (int **)&dword_474774,
           (int **)&dword_474770);
}
