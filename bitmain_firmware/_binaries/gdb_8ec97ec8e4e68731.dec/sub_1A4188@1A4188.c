void __fastcall sub_1A4188(const char *a1)
{
  int *v2; // r0
  int v3; // r4
  _DWORD *v4; // r0
  const char *v5; // [sp+4h] [bp-70h] BYREF
  _BYTE v6[16]; // [sp+8h] [bp-6Ch] BYREF
  int v7; // [sp+18h] [bp-5Ch]

  if ( _xstat64(3, a1, v6) < 0 )
  {
    v2 = _errno_location();
    v3 = *v2;
    v4 = (_DWORD *)sub_242FB4(v2);
    sub_2594B0(*v4, "Warning: ");
    sub_259504(a1, v3);
  }
  else if ( (v7 & 0xF000) != 0x4000 )
  {
    sub_946B0("%s is not a directory.", a1);
  }
  if ( dword_487A34 )
    free((void *)dword_487A34);
  sub_984A4((int *)&v5, (int)a1);
  dword_487A34 = (int)v5;
  if ( *v5 != 47 )
  {
    sub_985D4(&v5, v5);
    if ( dword_487A34 )
      free((void *)dword_487A34);
    dword_487A34 = (int)v5;
  }
}
