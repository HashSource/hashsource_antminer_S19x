int sub_2372EC()
{
  int v0; // r0

  dword_48A4B4 = (int)sub_16EBB8((int)sub_234F48);
  sub_533F8(
    "tdesc",
    11,
    (int)sub_234F00,
    (int)"Set target description specific variables.",
    &dword_48A4BC,
    (int)"set tdesc ",
    0,
    (int **)&dword_47475C);
  sub_533F8(
    "tdesc",
    11,
    (int)sub_234F30,
    (int)"Show target description specific variables.",
    &dword_48A4C0,
    (int)"show tdesc ",
    0,
    (int **)&dword_47474C);
  sub_533F8(
    "tdesc",
    11,
    (int)sub_234ED0,
    (int)"Unset target description specific variables.",
    &dword_48A4B8,
    (int)"unset tdesc ",
    0,
    (int **)&dword_474794);
  sub_53620(
    "filename",
    10,
    (int)&dword_48A4D0,
    "Set the file to read for an XML target description",
    "Show the file to read for an XML target description",
    "When set, GDB will read the target description from a local\nfile instead of querying the remote target.",
    (int)sub_235F44,
    (int)&loc_234E6C,
    (int **)&dword_48A4BC,
    (int **)&dword_48A4C0);
  sub_53274(
    "filename",
    10,
    (int)sub_235ECC,
    (int)"Unset the file to read for an XML target description.  When unset,\n"
         "GDB will read the description from the target.",
    (int **)&dword_48A4B8);
  sub_53274(
    "c-tdesc",
    11,
    (int)sub_236624,
    (int)"Print the current target description as a C source file.",
    (int **)&dword_474784);
  v0 = sub_53274(
         "xml-descriptions",
         11,
         (int)sub_235438,
         (int)"Check the target descriptions created in GDB equal the descriptions\n"
              "created from XML files in the directory.\n"
              "The parameter is the directory name.",
         (int **)&dword_474780);
  return sub_5324C(v0, 1010944);
}
