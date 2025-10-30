int sub_2349A8()
{
  int result; // r0

  sub_535B8(
    "stack-cache",
    4,
    (int)&dword_46DCCC,
    "Set cache use for stack access.",
    "Show cache use for stack access.",
    "When on, use the target memory cache for all stack access, regardless of any\n"
    "configured memory regions.  This improves remote performance significantly.\n"
    "By default, caching for stack access is on.",
    (int)sub_2348E4,
    (int)sub_234844,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "code-cache",
    4,
    (int)&dword_46DCC4,
    "Set cache use for code segment access.",
    "Show cache use for code segment access.",
    "When on, use the target memory cache for all code segment accesses,\n"
    "regardless of any configured memory regions.  This improves remote\n"
    "performance significantly.  By default, caching for code segment\n"
    "access is on.",
    (int)sub_2348B8,
    (int)sub_234834,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  result = sub_1CD154(0, (int)sub_23482C);
  dword_48A290 = result;
  return result;
}
