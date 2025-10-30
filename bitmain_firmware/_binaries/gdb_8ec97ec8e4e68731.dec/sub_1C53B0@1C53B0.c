int sub_1C53B0()
{
  dword_487C98 = 0;
  dword_487CA0 = 0;
  dword_487C9C = 0;
  sub_53934(
    "expression",
    11,
    (int)&dword_487CD8,
    "Set expression debugging.",
    "Show expression debugging.",
    "When non-zero, the internal representation of expressions will be printed.",
    0,
    (int)sub_1C3644,
    (int **)&dword_474750,
    (int **)&dword_474748);
  return sub_535B8(
           "parser",
           11,
           (int)&dword_487CDC,
           "Set parser debugging.",
           "Show parser debugging.",
           "When non-zero, expression parser tracing will be enabled.",
           0,
           (int)sub_1C3634,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
