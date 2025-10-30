int __fastcall sub_134010(void **a1, int a2, int a3, int *a4)
{
  int v7; // r4
  int v8; // r4

  if ( a1 != (void **)a2 && !sub_B89E4((int)a1, a2) )
    return 0;
  while ( 1 )
  {
    if ( a3 <= 0 )
      return 1;
    v7 = sub_B85BC(a4);
    v8 = v7 - sub_B85BC(a1);
    if ( v8 < 0 )
      break;
    if ( v8 > a3 )
    {
      v8 = a3;
LABEL_13:
      if ( !sub_BA5F8(a1, (int *)a1, v8) )
        return 0;
      a3 -= v8;
      goto LABEL_9;
    }
    if ( v8 )
      goto LABEL_13;
    if ( !sub_BA234((int **)a1, (int **)a1) )
      return 0;
    --a3;
LABEL_9:
    if ( sub_B8354((int *)a1, a4) >= 0 && !BN_sub((int *)a1, (int *)a1, a4) )
      return 0;
  }
  sub_D0048(3, 119, 110, (int)"crypto/bn/bn_mod.c", 294);
  return 0;
}
