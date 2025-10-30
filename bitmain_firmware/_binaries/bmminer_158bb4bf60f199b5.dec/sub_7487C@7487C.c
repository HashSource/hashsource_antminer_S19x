int __fastcall sub_7487C(int result, int a2, int a3, int a4, char *format, __gnuc_va_list arg)
{
  int v6; // r4

  v6 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(result + 92) )
    {
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result = vsnprintf((char *)(result + 92), 0xA0u, format, arg);
      *(_BYTE *)(v6 + 251) = 0;
    }
  }
  return result;
}
