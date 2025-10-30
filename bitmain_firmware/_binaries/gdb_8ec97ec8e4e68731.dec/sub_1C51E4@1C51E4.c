int __fastcall sub_1C51E4(unsigned int *a1, int a2, int *a3)
{
  int v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r6
  int v11; // r1
  int v12; // r6
  int v13; // r7
  int v14; // r1
  int v15; // r1
  unsigned int v16; // r1
  int v17; // r3
  int v18; // r5
  int v19; // r9
  int v20; // r1
  bool v21; // cc

  if ( *a3 <= 0 )
  {
    v12 = 15;
    v13 = 0;
    v11 = 5;
  }
  else
  {
    v6 = a3[1];
    v7 = 0;
    v8 = v6 + 12 * *a3;
    do
    {
      v9 = *(_DWORD *)(v6 + 8);
      v6 += 12;
      v7 += ((unsigned int)(v9 + 15) >> 4) + 1;
    }
    while ( v8 != v6 );
    v10 = 16 * v7;
    v11 = v7 + 5;
    v12 = v10 + 15;
    v13 = v12 >> 31;
  }
  sub_1C4EA8(a1, v11);
  sub_1C37BC((int *)a1, 50);
  sub_1C3898((int *)a1, v14, v12, v13);
  sub_1C3898((int *)a1, v15, a2, a2 >> 31);
  if ( *a3 > 0 )
  {
    v17 = a3[1];
    v18 = 0;
    v19 = 0;
    do
    {
      ++v19;
      sub_1C3898((int *)a1, v16, *(_DWORD *)(v17 + v18 + 8), *(int *)(v17 + v18 + 8) >> 31);
      memcpy((void *)(a1[1] + 16 * (a1[2] + 1)), *(const void **)(a3[1] + v18 + 4), *(_DWORD *)(a3[1] + v18 + 8));
      v17 = a3[1];
      v20 = v17 + v18;
      v18 += 12;
      v21 = *a3 <= v19;
      v16 = *(_DWORD *)(v20 + 8) + 15;
      a1[2] += v16 >> 4;
    }
    while ( !v21 );
  }
  sub_1C3898((int *)a1, v16, v12, v13);
  return sub_1C37BC((int *)a1, 50);
}
