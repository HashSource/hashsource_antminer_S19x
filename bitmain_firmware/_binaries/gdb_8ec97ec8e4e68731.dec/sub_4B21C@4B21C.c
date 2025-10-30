_DWORD *__fastcall sub_4B21C(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r12
  int v4; // r1
  int v5; // r2
  bool v6; // zf
  int v7; // r3
  int v9; // r0
  _DWORD v10[5]; // [sp+0h] [bp-14h] BYREF

  if ( !dword_4726BC && ps_getpid_0(&dword_4878EC) != a1 )
  {
    dword_4726C4 = -1;
    v9 = ps_getpid_0(&dword_4878EC);
    sub_4B21C(v9);
  }
  v2 = (_DWORD *)sub_93094(1, 0x30u);
  sub_98F48(v10, a1, a1, 0);
  v3 = (_DWORD *)dword_4726BC;
  v4 = v10[1];
  v5 = v10[2];
  v6 = dword_4726BC == 0;
  v7 = dword_4726C4 + 1;
  if ( !dword_4726BC )
    dword_4726BC = (int)v2;
  ++dword_4726C4;
  v2[1] = v10[0];
  v2[2] = v4;
  v2[3] = v5;
  v2[7] = v7;
  if ( !v6 )
  {
    while ( *v3 )
      v3 = (_DWORD *)*v3;
    *v3 = v2;
  }
  return v2;
}
