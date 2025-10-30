int __fastcall sub_1A3F0C(int result, int *a2, int *a3)
{
  _DWORD *v3; // r8
  int v6; // r2
  int v7; // r3
  char *v8; // r9
  _BYTE v9[104]; // [sp+0h] [bp-D4h] BYREF
  _BYTE s[108]; // [sp+68h] [bp-6Ch] BYREF

  v3 = (_DWORD *)result;
  if ( !dword_487A24 )
  {
    v8 = getenv("HOME");
    memset(v9, 0, sizeof(v9));
    memset(s, 0, 0x68u);
    if ( v8 )
    {
      dword_487A28 = (int)sub_93140("%s/%s", v8, ".gdbinit");
      if ( _xstat64(3, dword_487A28, v9) )
      {
        if ( dword_487A28 )
          free((void *)dword_487A28);
        dword_487A28 = 0;
      }
    }
    result = _xstat64(3, ".gdbinit", s);
    if ( !result && (!dword_487A28 || (result = memcmp(v9, s, 0x68u)) != 0) )
      dword_487A2C = (int)".gdbinit";
    dword_487A24 = 1;
  }
  v6 = dword_487A28;
  v7 = dword_487A2C;
  *v3 = 0;
  *a2 = v6;
  *a3 = v7;
  return result;
}
