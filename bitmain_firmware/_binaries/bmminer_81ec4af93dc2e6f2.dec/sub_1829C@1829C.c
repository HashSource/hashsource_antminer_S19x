int sub_1829C()
{
  int v0; // r4
  int v1; // r0
  int result; // r0
  int v3; // r3
  bool v4; // cc

  LOWORD(v0) = (unsigned __int16)&dword_B0ED8;
  v1 = sub_17674();
  if ( v1 <= 0 )
  {
    HIWORD(v0) = 11;
  }
  else
  {
    HIWORD(v0) = (unsigned int)&dword_B0ED8 >> 16;
    *(_DWORD *)(v0 + 0x28) = 1;
  }
  if ( sub_265EC(v1) > 0 )
    *(_DWORD *)(v0 + 40) = 0;
  result = sub_26DF8();
  v4 = result <= 0;
  if ( result <= 0 )
    result = *(_DWORD *)(v0 + 40);
  else
    v3 = 3;
  if ( !v4 )
  {
    *(_DWORD *)(v0 + 40) = v3;
    return v3;
  }
  return result;
}
