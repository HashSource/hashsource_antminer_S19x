int __fastcall sub_BCBBC(int *a1, unsigned __int8 **a2, int a3)
{
  unsigned int v3; // r4
  unsigned __int8 *v5; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r6
  int v11; // r0
  unsigned int v12; // lr
  int v13; // r1
  int v14; // r3
  unsigned int v15; // r3
  _BOOL4 v16; // r2
  int v17; // r2
  int v18; // r3
  _BOOL4 v19; // r1
  unsigned int v20; // r4
  int v21; // r0
  int v22; // r8
  int v24; // r2
  int v25; // r2

  v3 = a3 - 2;
  if ( (unsigned int)(a3 - 2) > 0xFFFD )
  {
    v25 = 264;
    goto LABEL_35;
  }
  v5 = *a2;
  v8 = **a2;
  v9 = v5[1];
  *a2 = v5 + 2;
  if ( v3 != (v9 | (v8 << 8)) )
  {
    v25 = 270;
LABEL_35:
    sub_D0048(50, 111, 105, "crypto/ct/ct_oct.c", v25);
    return 0;
  }
  if ( !a1 || (v10 = *a1) == 0 )
  {
    v10 = sub_10BFCC(v5 + 2);
    if ( !v10 )
      return 0;
    if ( !v3 )
    {
LABEL_26:
      if ( !a1 )
        return v10;
      goto LABEL_27;
    }
LABEL_9:
    if ( v3 <= 1 )
    {
LABEL_29:
      v24 = 291;
    }
    else
    {
      v12 = a3 - 4;
      v13 = **a2;
      v14 = (*a2)[1];
      *a2 += 2;
      v15 = v14 | (v13 << 8);
      v16 = v15 == 0;
      if ( a3 - 4 < v15 )
        v16 = 1;
      if ( !v16 )
      {
        do
        {
          v20 = v12 - v15;
          v21 = sub_BC7C8(0, a2, v15);
          v22 = v21;
          if ( !v21 )
            goto LABEL_21;
          if ( !sub_10BD3C(v10, v21) )
          {
            SCT_free(v22);
            goto LABEL_21;
          }
          v12 = v20 - 2;
          if ( !v20 )
            goto LABEL_26;
          if ( v20 == 1 )
            goto LABEL_29;
          v17 = **a2;
          v18 = (*a2)[1];
          *a2 += 2;
          v15 = v18 | (v17 << 8);
          v19 = v15 == 0;
          if ( v15 > v12 )
            v19 = 1;
        }
        while ( !v19 );
      }
      v24 = 298;
    }
    sub_D0048(50, 111, 105, "crypto/ct/ct_oct.c", v24);
LABEL_21:
    if ( !a1 || !*a1 )
      sub_BD014(v10);
    return 0;
  }
  while ( 1 )
  {
    v11 = sub_10BD80(v10);
    if ( !v11 )
      break;
    SCT_free(v11);
  }
  if ( v3 )
    goto LABEL_9;
LABEL_27:
  if ( *a1 )
    return v10;
  *a1 = v10;
  return v10;
}
