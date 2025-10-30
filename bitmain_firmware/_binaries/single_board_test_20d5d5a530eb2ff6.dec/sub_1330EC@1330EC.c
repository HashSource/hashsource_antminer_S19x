int __fastcall sub_1330EC(int a1, int a2, int *a3, int ***a4)
{
  void **v4; // r5
  int ***v6; // r4
  int v7; // r4
  int ***v9; // r0
  int v10; // [sp+8h] [bp-10h]
  int *v11; // [sp+Ch] [bp-Ch]
  int v12; // [sp+14h] [bp-4h] BYREF

  v4 = 0;
  v6 = a4;
  v12 = 0;
  if ( a4 || (v11 = a3, v10 = a2, v9 = (int ***)sub_130B08(), a2 = v10, v6 = v9, a3 = v11, (v4 = (void **)v9) != 0) )
  {
    v7 = sub_132AB4(a1, a2, a3, v6, &v12);
    if ( v12 )
      sub_D0048(3, 110, 108, (int)"crypto/bn/bn_gcd.c", 532);
    sub_130B5C(v4);
    return v7;
  }
  else
  {
    sub_D0048(3, 110, 65, (int)"crypto/bn/bn_gcd.c", 525);
    return 0;
  }
}
