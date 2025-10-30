int __fastcall sub_FBBE4(void *a1, int a2, unsigned __int8 *a3, int a4, int a5)
{
  int v5; // r3
  unsigned __int8 *v6; // r1
  size_t v7; // r4
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r2
  int v13; // r4
  int v14; // t1
  int v15; // r2

  if ( a5 != a4 || (v5 = *a3, (unsigned int)(v5 - 106) > 1) )
  {
    sub_D0048(4, 128, 137, (int)"crypto/rsa/rsa_x931.c", 61);
    return -1;
  }
  if ( v5 == 107 )
  {
    v9 = a5 - 3;
    if ( a5 - 3 > 0 )
    {
      v10 = a3[1];
      v6 = a3 + 2;
      if ( v10 != 186 )
      {
        if ( v10 != 187 )
        {
LABEL_19:
          v15 = 72;
          goto LABEL_20;
        }
        v11 = a5 - 3;
        v12 = 0;
        while ( ++v12 != v9 )
        {
          v14 = *v6++;
          v13 = v14;
          if ( v14 == 186 )
          {
            v11 = v12;
            break;
          }
          if ( v13 != 187 )
            goto LABEL_19;
        }
        v7 = v9 - v11;
        if ( v11 )
          goto LABEL_6;
      }
    }
    v15 = 80;
LABEL_20:
    sub_D0048(4, 128, 138, (int)"crypto/rsa/rsa_x931.c", v15);
    return -1;
  }
  v6 = a3 + 1;
  v7 = a5 - 2;
LABEL_6:
  if ( v6[v7] == 204 )
  {
    memcpy(a1, v6, v7);
    return v7;
  }
  else
  {
    sub_D0048(4, 128, 139, (int)"crypto/rsa/rsa_x931.c", 89);
    return -1;
  }
}
