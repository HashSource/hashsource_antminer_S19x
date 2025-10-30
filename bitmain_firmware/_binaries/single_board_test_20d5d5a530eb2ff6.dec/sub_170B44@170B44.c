void **__fastcall sub_170B44(int a1, _DWORD *a2, void **a3)
{
  int v4; // r4
  int v5; // r0
  bool v6; // cc
  unsigned int v7; // r1
  void **v9; // [sp+4h] [bp+0h] BYREF
  char v10[84]; // [sp+8h] [bp+4h] BYREF

  v9 = a3;
  v4 = 0;
  while ( 1 )
  {
    v6 = v4 < sub_10C010((int)a2);
    v7 = v4++;
    if ( !v6 )
      break;
    v5 = sub_10C01C(a2, v7);
    sub_127D0C(v10, 80, v5);
    sub_121F9C(0, v10, &v9);
  }
  return v9;
}
