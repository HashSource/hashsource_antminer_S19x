int __fastcall sub_1C52C(const char *a1, int a2)
{
  _DWORD *v3; // r2
  int v4; // r1

  if ( !a1 )
    return 0;
  v3 = sub_1BF44(a1, a2);
  if ( !v3 )
    return 0;
  v4 = dword_BA3D8;
  dword_BA3D8 = (int)v3;
  *v3 = v4;
  return 1;
}
