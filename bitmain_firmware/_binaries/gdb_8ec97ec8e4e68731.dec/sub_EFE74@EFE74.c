int __fastcall sub_EFE74(int result, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r4

  if ( !*(_BYTE *)(result + 36) )
  {
    v8 = result;
    result = sub_25A4C0(*(_DWORD *)(*(_DWORD *)(result + 28) - 4), a6, a7);
    if ( a4 != 2 )
      return sub_25A4FC(32, *(_DWORD *)(*(_DWORD *)(v8 + 28) - 4));
  }
  return result;
}
