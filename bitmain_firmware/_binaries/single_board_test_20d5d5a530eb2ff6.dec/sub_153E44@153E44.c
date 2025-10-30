void *__fastcall sub_153E44(int a1, int *a2)
{
  int *v2; // r4
  int *v4; // r12
  int *v5; // r6
  int v6; // r0
  int v7; // r1
  int *v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v13[3]; // [sp+0h] [bp-110h] BYREF
  _BYTE v14[55]; // [sp+110h] [bp+0h] BYREF
  char v15; // [sp+147h] [bp+37h]
  _BYTE v16[56]; // [sp+148h] [bp+38h] BYREF

  v2 = a2;
  v4 = a2 + 12;
  v5 = (int *)v14;
  do
  {
    v6 = *v2;
    v2 += 4;
    v7 = *(v2 - 3);
    v8 = v5;
    v9 = *(v2 - 2);
    v5 += 4;
    v10 = *(v2 - 1);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v9;
    v8[3] = v10;
  }
  while ( v2 != v4 );
  v11 = v2[1];
  *v5 = *v2;
  v5[1] = v11;
  v14[0] &= 0xFCu;
  v15 |= 0x80u;
  sub_157850(v16, v14);
  sub_157ACC(v16, v16);
  sub_151860(v13, (int)curve448_precomputed_base, (int)v16);
  sub_153DB4(a1, v13);
  return sub_153C44(v13);
}
