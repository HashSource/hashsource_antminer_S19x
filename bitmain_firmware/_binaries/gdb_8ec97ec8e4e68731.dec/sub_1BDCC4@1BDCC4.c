int __fastcall sub_1BDCC4(int result, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  int v8; // r3
  int v9; // r5
  int v10; // r4
  int savedregs_24; // [sp+28h] [bp+0h]
  int savedregs_28; // [sp+2Ch] [bp+4h]

  savedregs_24 = result;
  savedregs_28 = a2;
  if ( a6 )
  {
    v8 = (int)&dword_487C2C;
    v9 = result;
    v10 = dword_487C38;
    if ( dword_487C38 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v10 + 8);
        if ( v8 == a6
          && (*(_DWORD *)(v10 + 4) == v9
           || v9 == (*(int (__fastcall **)(int, _DWORD))(v9 + 36))(v9, *(_DWORD *)(v10 + 4))) )
        {
          return (*(int (__fastcall **)(int, int, int, int, int, unsigned int, int, int))(v10 + 12))(
                   savedregs_24,
                   savedregs_28,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8);
        }
        v10 = *(_DWORD *)v10;
        if ( !v10 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( a6 > 0x13 )
        a2 = 41136;
      else
        v8 = 40748;
      if ( a6 > 0x13 )
        HIWORD(a2) = 60;
      else
        HIWORD(v8) = 60;
      if ( a6 <= 0x13 )
        a2 = *(_DWORD *)(v8 + 8 * a6);
      return sub_946B0(
               "A handler for the OS ABI \"%s\" is not built into this configuration\n"
               "of GDB.  Attempting to continue with the default %s settings.\n",
               a2,
               *(_DWORD *)(v9 + 24),
               v8);
    }
  }
  return result;
}
