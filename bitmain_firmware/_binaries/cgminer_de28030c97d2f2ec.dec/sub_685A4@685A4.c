int __fastcall sub_685A4(int result, int a2, int a3, int a4, char a5, char *format, __gnuc_va_list arg)
{
  int v7; // [sp+Ch] [bp-8h]

  v7 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(result + 92) )
    {
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result = vsnprintf((char *)(result + 92), 0x9Fu, format, arg);
      *(_BYTE *)(v7 + 250) = 0;
      *(_BYTE *)(v7 + 251) = a5;
    }
  }
  return result;
}
