int sub_74820(int result, int a2, int a3, int a4, char *format, ...)
{
  int v5; // r4
  va_list va; // [sp+1Ch] [bp+10h] BYREF

  va_start(va, format);
  v5 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(result + 92) )
    {
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result = vsnprintf((char *)(result + 92), 0xA0u, format, va);
      *(_BYTE *)(v5 + 251) = 0;
    }
  }
  return result;
}
