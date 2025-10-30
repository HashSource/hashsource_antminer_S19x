int __fastcall sub_11F77C(int a1, _DWORD *a2, int a3)
{
  int v4; // r4
  _DWORD *v5; // r5
  bool v6; // cc
  unsigned int v7; // r1
  _BYTE v10[80]; // [sp+8h] [bp-50h] BYREF
  char v11[80]; // [sp+58h] [bp+0h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v6 = v4 < sub_10C010((int)a2);
    v7 = v4++;
    if ( !v6 )
      break;
    v5 = (_DWORD *)sub_10C01C(a2, v7);
    sub_127D0C(v10, 80, *v5);
    sub_127D0C(v11, 80, v5[1]);
    sub_121F9C((int)v10, v11);
  }
  return a3;
}
