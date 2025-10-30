int __fastcall sub_16F904(int result, int a2)
{
  __int64 v2; // r0

  if ( !a2 )
  {
    sub_94700(
      (int)"gdbtypes.c",
      2842,
      "%s: Assertion `%s' failed.",
      "int verify_floatformat(int, const floatformat*)",
      "floatformat != NULL");
    goto LABEL_8;
  }
  if ( result == -1 )
    result = *(_DWORD *)(a2 + 4);
  if ( result < 0 )
    goto LABEL_9;
  if ( *(_DWORD *)(a2 + 4) > (unsigned int)result )
  {
LABEL_8:
    sub_94700(
      (int)"gdbtypes.c",
      2848,
      "%s: Assertion `%s' failed.",
      "int verify_floatformat(int, const floatformat*)",
      "bit >= floatformat->totalsize");
LABEL_9:
    v2 = sub_94700(
           (int)"gdbtypes.c",
           2847,
           "%s: Assertion `%s' failed.",
           "int verify_floatformat(int, const floatformat*)",
           "bit >= 0");
    return sub_16F9BC(v2, HIDWORD(v2));
  }
  return result;
}
