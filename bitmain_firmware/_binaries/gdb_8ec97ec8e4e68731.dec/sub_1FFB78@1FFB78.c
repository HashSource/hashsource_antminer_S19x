int sub_1FFB78()
{
  int v0; // r0
  int v1; // r0

  sub_533F8(
    "skip",
    6,
    (int)&loc_1FF0AC,
    (int)"Ignore a function while stepping.\n"
         "\n"
         "Usage: skip [FUNCTION-NAME]\n"
         "       skip [<file-spec>] [<function-spec>]\n"
         "If no arguments are given, ignore the current function.\n"
         "\n"
         "<file-spec> is one of:\n"
         "       -fi|-file FILE-NAME\n"
         "       -gfi|-gfile GLOB-FILE-PATTERN\n"
         "<function-spec> is one of:\n"
         "       -fu|-function FUNCTION-NAME\n"
         "       -rfu|-rfunction FUNCTION-NAME-REGULAR-EXPRESSION",
    &dword_48939C,
    (int)"skip ",
    1,
    (int **)&dword_474744);
  v0 = sub_53274(
         "file",
         6,
         (int)sub_1FF670,
         (int)"Ignore a file while stepping.\n"
              "Usage: skip file [FILE-NAME]\n"
              "If no filename is given, ignore the current file.",
         &dword_48939C);
  sub_5324C(v0, 1010944);
  v1 = sub_53274(
         "function",
         6,
         (int)sub_1FF09C,
         (int)"Ignore a function while stepping.\n"
              "Usage: skip function [FUNCTION-NAME]\n"
              "If no function name is given, skip the current function.",
         &dword_48939C);
  sub_5324C(v1, (int)sub_F7428);
  sub_53274(
    "enable",
    6,
    (int)sub_1FE4D4,
    (int)"Enable skip entries.  You can specify numbers (e.g. \"skip enable 1 3\"), ranges (e.g. \"skip enable 4-8\"), or"
         " both (e.g. \"skip enable 1 3 4-8\").\n"
         "\n"
         "If you don't specify any numbers or ranges, we'll enable all skip entries.\n"
         "\n"
         "Usage: skip enable [NUMBERS AND/OR RANGES]",
    &dword_48939C);
  sub_53274(
    "disable",
    6,
    (int)sub_1FE468,
    (int)"Disable skip entries.  You can specify numbers (e.g. \"skip disable 1 3\"), ranges (e.g. \"skip disable 4-8\"),"
         " or both (e.g. \"skip disable 1 3 4-8\").\n"
         "\n"
         "If you don't specify any numbers or ranges, we'll disable all skip entries.\n"
         "\n"
         "Usage: skip disable [NUMBERS AND/OR RANGES]",
    &dword_48939C);
  sub_53274(
    "delete",
    6,
    (int)sub_1FE540,
    (int)"Delete skip entries.  You can specify numbers (e.g. \"skip delete 1 3\"), ranges (e.g. \"skip delete 4-8\"), or"
         " both (e.g. \"skip delete 1 3 4-8\").\n"
         "\n"
         "If you don't specify any numbers or ranges, we'll delete all skip entries.\n"
         "\n"
         "Usage: skip delete [NUMBERS AND/OR RANGES]",
    &dword_48939C);
  return sub_5398C(
           "skip",
           (int)sub_1FE61C,
           (int)"Display the status of skips.  You can specify numbers (e.g. \"skip info 1 3\"), ranges (e.g. \"skip info"
                " 4-8\"), or both (e.g. \"skip info 1 3 4-8\").\n"
                "\n"
                "If you don't specify any numbers or ranges, we'll show all skips.\n"
                "\n"
                "Usage: skip info [NUMBERS AND/OR RANGES]\n"
                "The \"Type\" column indicates one of:\n"
                "\tfile        - ignored file\n"
                "\tfunction    - ignored function");
}
