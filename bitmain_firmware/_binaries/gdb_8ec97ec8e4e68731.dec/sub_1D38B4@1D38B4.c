int __fastcall sub_1D38B4(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r6
  int v9; // r8
  const char *v10; // r0

  result = sub_230020(a2, a3, a4);
  v8 = result;
  if ( result )
  {
    if ( dword_487D4C )
    {
      v9 = *(_DWORD *)sub_242FC8(result);
      v10 = (const char *)sub_25AC8C(a1, a2);
      sub_2594B0(v9, "record: error reading memory at addr %s len = %ld.\n\n", v10, a4);
      return v8;
    }
  }
  return result;
}
