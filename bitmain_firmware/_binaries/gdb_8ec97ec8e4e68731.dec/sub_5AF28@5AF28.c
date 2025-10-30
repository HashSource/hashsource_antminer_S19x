int __fastcall sub_5AF28(int result, int a2, __int64 a3)
{
  __int64 v3; // r0

  if ( a2 <= 0 )
  {
    v3 = sub_94700(
           "cli/cli-utils.c",
           210,
           "%s: Assertion `%s' failed.",
           "void number_or_range_parser::setup_range(int, int, const char*)",
           "start_value > 0");
    return sub_5AF7C(v3, HIDWORD(v3));
  }
  else
  {
    *(_DWORD *)(result + 8) = a2 - 1;
    *(_QWORD *)(result + 12) = a3;
    *(_BYTE *)(result + 20) = 1;
  }
  return result;
}
