bool __fastcall sub_1C38C(const char *a1, int a2)
{
  int v2; // r3

  v2 = dword_BA3D8;
  if ( dword_BA3D8 )
    v2 = 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 )
    return 0;
  dword_BA3D8 = (int)sub_1BF44(a1, a2);
  return dword_BA3D8 != 0;
}
