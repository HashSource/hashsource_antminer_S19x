int **__fastcall sub_130CCC(int ***a1, int **a2)
{
  int **v2; // r5
  int **v3; // r3
  int v5; // r2
  int v6; // r3
  int **v8; // r7
  _DWORD *v9; // r0
  bool v10; // zf
  _DWORD *v11; // r6
  _DWORD *v12; // r7
  _DWORD *v13; // r0
  int **v14; // r2
  int *v15; // r3
  int v16; // r3
  int v17; // r0

  v2 = a1[9];
  if ( !v2 )
  {
    if ( a1[10] )
      return v2;
    v3 = a1[3];
    if ( v3 == a1[4] )
    {
      v8 = a1[11];
      v9 = CRYPTO_malloc((void *)0x148);
      v2 = (int **)v9;
      if ( v9 )
      {
        v10 = ((unsigned __int8)v8 & 8) == 0;
        v11 = v9;
        v12 = v9 + 80;
        if ( v10 )
        {
          do
          {
            v13 = v11;
            v11 += 5;
            sub_B8210(v13);
          }
          while ( v11 != v12 );
        }
        else
        {
          do
          {
            sub_B8210(v11);
            v17 = (int)v11;
            v11 += 5;
            sub_B87B8(v17, 8);
          }
          while ( v11 != v12 );
        }
        v14 = *a1;
        v15 = (int *)a1[2];
        v2[81] = 0;
        v2[80] = v15;
        if ( v14 )
        {
          v15[81] = (int)v2;
          a1[2] = v2;
          a1[1] = v2;
        }
        else
        {
          a1[2] = v2;
          a1[1] = v2;
          *a1 = v2;
        }
        v16 = (int)a1[3] + 1;
        a1[4] += 4;
        a1[3] = (int **)v16;
LABEL_11:
        sub_B8930(v2, 0);
        v6 = (int)a1[8] + 1;
        v2[4] = (int *)((unsigned int)v2[4] & 0xFFFFFFFB);
        a1[8] = (int **)v6;
        return v2;
      }
      sub_D0048(3, 147, 65, (int)"crypto/bn/bn_ctx.c", 319);
    }
    else
    {
      if ( v3 )
      {
        v5 = (unsigned int)a1[3] & 0xF;
        if ( ((unsigned __int8)v3 & 0xF) != 0 )
          v2 = a1[1];
        else
          a2 = a1[1];
        if ( ((unsigned __int8)v3 & 0xF) == 0 )
        {
          v2 = (int **)a2[81];
          a1[1] = v2;
        }
      }
      else
      {
        v2 = *a1;
        v5 = 0;
        a1[1] = *a1;
      }
      a1[3] = (int **)((char *)v3 + 1);
      v2 += 5 * v5;
      if ( v2 )
        goto LABEL_11;
    }
    a1[10] = (int **)1;
    v2 = 0;
    sub_D0048(3, 116, 109, (int)"crypto/bn/bn_ctx.c", 227);
    return v2;
  }
  return 0;
}
