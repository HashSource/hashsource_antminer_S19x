int sub_102598()
{
  sub_535B8(
    "static-members",
    4,
    (int)&unk_46DE94,
    "Set printing of C++ static members.",
    "Show printing of C++ static members.",
    0,
    0,
    (int)sub_101168,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "vtbl",
    4,
    (int)&unk_46DE68,
    "Set printing of C++ virtual function tables.",
    "Show printing of C++ virtual function tables.",
    0,
    0,
    (int)sub_101158,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535B8(
    "object",
    4,
    (int)&unk_46DE74,
    "Set printing of object's derived type based on vtable info.",
    "Show printing of object's derived type based on vtable info.",
    0,
    0,
    (int)sub_101148,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  obstack_begin(&stru_47B1DC, 128, 0, (void *(*)(int))sub_93028, sub_101178);
  obstack_begin((struct obstack *)&unk_47B1B0, 128, 0, (void *(*)(int))sub_93028, sub_101178);
  return obstack_begin(&stru_47B208, 128, 0, (void *(*)(int))sub_93028, sub_101178);
}
