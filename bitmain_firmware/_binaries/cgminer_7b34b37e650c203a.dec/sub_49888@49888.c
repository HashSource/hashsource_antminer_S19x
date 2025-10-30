int __fastcall sub_49888(int result, int a2, int a3, int a4, char a5, char *format, __gnuc_va_list arg)
{
  int v7; // r4

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
