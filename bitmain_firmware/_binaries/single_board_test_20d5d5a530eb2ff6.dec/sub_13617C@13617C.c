int __fastcall sub_13617C(int a1, int **a2, int *a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r7
  int v9; // r7
  int v11; // r6
  int v12; // r6
  int v13; // r9

  v6 = sub_B85BC(a3);
  v7 = v6;
  if ( v6 == 1 )
  {
    v9 = 1;
    sub_B8930(a2, 0);
    return v9;
  }
  if ( !sub_B83F0(a3, v6 - 2) )
  {
    v9 = sub_B83F0(a3, v7 - 3);
    if ( !v9 )
    {
      v12 = v7 + 1;
      v13 = 100;
      while ( 1 )
      {
        if ( v12 )
        {
          if ( v12 < 0 )
          {
            sub_D0048(3, 127, 118, (int)"crypto/bn/bn_rand.c", 93);
            return v9;
          }
          if ( !sub_13602C(a1, a2, v12, -1, 0) )
            return 0;
        }
        else
        {
          sub_B8930(a2, 0);
        }
        if ( sub_B8354((int *)a2, a3) >= 0
          && (!BN_sub((int *)a2, (int *)a2, a3) || sub_B8354((int *)a2, a3) >= 0 && !BN_sub((int *)a2, (int *)a2, a3)) )
        {
          return 0;
        }
        if ( !--v13 )
          break;
        if ( sub_B8354((int *)a2, a3) < 0 )
          return 1;
      }
      sub_D0048(3, 138, 113, (int)"crypto/bn/bn_rand.c", 153);
      return v9;
    }
  }
  if ( !v7 )
  {
    v11 = 100;
    while ( 1 )
    {
      sub_B8930(a2, 0);
      if ( !--v11 )
        break;
      if ( sub_B8354((int *)a2, a3) < 0 )
        return 1;
    }
LABEL_32:
    v9 = 0;
    sub_D0048(3, 138, 113, (int)"crypto/bn/bn_rand.c", 166);
    return v9;
  }
  if ( v7 < 0 )
  {
    sub_D0048(3, 127, 118, (int)"crypto/bn/bn_rand.c", 93);
  }
  else
  {
    v8 = 100;
    while ( sub_13602C(a1, a2, v7, -1, 0) )
    {
      if ( !--v8 )
        goto LABEL_32;
      if ( sub_B8354((int *)a2, a3) < 0 )
        return 1;
    }
  }
  return 0;
}
