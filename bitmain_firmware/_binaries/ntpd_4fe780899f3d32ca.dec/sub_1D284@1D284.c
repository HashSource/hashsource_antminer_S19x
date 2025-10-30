int __fastcall sub_1D284(int *a1, int *a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v8; // [sp+4h] [bp-8h]

  v4 = *a1;
  v5 = *a2;
  if ( dword_B93E8 )
  {
    v6 = dword_B93EC;
  }
  else
  {
    v6 = sub_68A44(&ntpdOptions, v4, v5);
    v4 = *a1;
    v5 = *a2;
    dword_B93EC = v6;
  }
  *a1 = v4 - v6;
  *a2 = v5 + 4 * v6;
  dword_B93E8 = 1;
  return v8;
}
