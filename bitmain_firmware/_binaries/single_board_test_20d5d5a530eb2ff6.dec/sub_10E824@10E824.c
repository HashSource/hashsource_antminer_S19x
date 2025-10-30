int __fastcall sub_10E824(_DWORD *a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // t0
  int v10; // r4
  int v11; // r6
  bool v12; // cc
  unsigned int v13; // r1
  _DWORD v15[53]; // [sp+0h] [bp+0h] BYREF

  if ( a1 )
  {
    v5 = *a3;
    v6 = a3[1];
    v9 = a3 + 2;
    v7 = a3[2];
    v8 = v9[1];
    v10 = 0;
    v15[7] = a2;
    v15[1] = v5;
    v15[2] = v6;
    v15[3] = v7;
    v15[4] = v8;
    while ( 1 )
    {
      v12 = v10 < sub_10C010((int)a1);
      v13 = v10++;
      if ( !v12 )
        break;
      v11 = sub_10C01C(a1, v13);
      if ( !sub_10E738(v11, (int)v15) )
        return v11;
    }
  }
  return 0;
}
