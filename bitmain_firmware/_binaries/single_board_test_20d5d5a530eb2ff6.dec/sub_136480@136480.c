int __fastcall sub_136480(int **a1, int a2, int a3, int a4)
{
  bool v6; // zf
  _BOOL4 v8; // r4
  int v9; // r9
  int v10; // r5
  char *v12; // r0
  char *v13; // r10
  char v14; // r3

  if ( a2 )
  {
    if ( a2 < 0 )
      goto LABEL_5;
    v8 = a2 == 1;
    if ( a3 <= 0 )
      v8 = 0;
    if ( v8 )
      goto LABEL_5;
    v9 = (a2 + 7) >> 3;
    v10 = ((_BYTE)a2 - 1) & 7;
    v12 = (char *)CRYPTO_malloc((void *)v9);
    v13 = v12;
    if ( v12 )
    {
      if ( (int)sub_F49BC((int)v12, v9) > 0 )
      {
        if ( a3 < 0 )
        {
          v14 = *v13;
        }
        else if ( a3 )
        {
          if ( v10 )
          {
            v14 = *v13 | (3 << (v10 - 1));
          }
          else
          {
            v14 = 1;
            v13[1] |= 0x80u;
          }
        }
        else
        {
          v14 = (1 << v10) | *v13;
        }
        *v13 = v14 & ~(unsigned __int8)(255 << (v10 + 1));
        if ( a4 )
          v13[v9 - 1] |= 1u;
        v8 = sub_B8AEC(v13, v9, a1) != 0;
      }
    }
    else
    {
      v8 = 0;
      sub_D0048(3, 127, 65, (int)"crypto/bn/bn_rand.c", 41);
    }
    sub_E0758(v13, v9, (size_t)"crypto/bn/bn_rand.c");
    return v8;
  }
  else
  {
    v6 = a4 == 0;
    if ( !a4 )
      v6 = a3 == -1;
    if ( !v6 )
    {
LABEL_5:
      sub_D0048(3, 127, 118, (int)"crypto/bn/bn_rand.c", 93);
      return 0;
    }
    sub_B8930(a1, 0);
    return 1;
  }
}
