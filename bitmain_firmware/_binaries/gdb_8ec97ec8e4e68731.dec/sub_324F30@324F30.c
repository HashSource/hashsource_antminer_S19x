int __fastcall sub_324F30(int *a1, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r8
  void *v9; // r0
  int v10; // r3
  int v11; // r6
  int v12; // r5
  int v13; // r7
  int v14; // r3
  int v15; // r1
  int v16; // r2

  v4 = a1[7];
  if ( a1[11] == v4 )
    return 1;
  v9 = sub_93050((void *)a1[9], 4 * v4);
  v10 = *a1;
  a1[9] = (int)v9;
  if ( (v10 & 1) != 0 )
    a1[10] = (int)sub_93050((void *)a1[10], 16 * a1[7]);
  v11 = a1[11];
  if ( v11 < a1[7] )
  {
    v12 = 4 * v11;
    v13 = 16 * v11;
    v5 = 1;
    do
    {
      v14 = a1[10];
      ++v11;
      if ( v14 )
        v14 += v13;
      v15 = *(_DWORD *)(a1[8] + v12);
      v16 = a1[9] + v12;
      v12 += 4;
      v13 += 16;
      if ( (*(int (__fastcall **)(int *, int, int, int, int, int, int))(a1[17] + 16))(a1, v15, v16, v14, a2, a3, a4) < 0 )
        v5 = 0;
    }
    while ( v11 < a1[7] );
  }
  else
  {
    v5 = 1;
  }
  a1[11] = v11;
  return v5;
}
