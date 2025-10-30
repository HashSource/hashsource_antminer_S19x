bool __fastcall sub_136630(int *a1, _DWORD *a2, _DWORD *a3, void *a4, size_t n, int ***a6)
{
  int v8; // r0
  int v9; // r6
  int v10; // r0
  char *v11; // r6
  _BYTE *v12; // r9
  size_t v13; // r2
  size_t v14; // r7
  _BOOL4 v15; // r4
  unsigned int v19; // [sp+14h] [bp-1C0h] BYREF
  _BYTE v20[64]; // [sp+18h] [bp-1BCh] BYREF
  _BYTE v21[64]; // [sp+58h] [bp-17Ch] BYREF
  _BYTE v22[96]; // [sp+98h] [bp-13Ch] BYREF
  int v23[55]; // [sp+F8h] [bp-DCh] BYREF

  v8 = sub_B85BC(a2);
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v11 = (char *)((v9 >> 3) + 8);
  v12 = CRYPTO_malloc(v11);
  if ( v12 )
  {
    if ( sub_B8CD4(a3, (int)v22, 96) < 0 )
    {
      sub_D0048(3, 140, 117, (int)"crypto/bn/bn_rand.c", 234);
    }
    else
    {
      v19 = 0;
      if ( v11 )
      {
        while ( sub_F49BC((int)v20, 0x40u) == (_DWORD *)1 )
        {
          sub_1065B8((int)v23);
          sub_106AB8((int)v23, &v19, 4u);
          sub_106AB8((int)v23, v22, 0x60u);
          sub_106AB8((int)v23, a4, n);
          sub_106AB8((int)v23, v20, 0x40u);
          sub_106678(v21, v23);
          v13 = (size_t)&v11[-v19];
          if ( (unsigned int)&v11[-v19] >= 0x40 )
            v13 = 64;
          v14 = v13;
          memcpy(&v12[v19], v21, v13);
          v19 += v14;
          if ( (unsigned int)v11 <= v19 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        if ( sub_B8AEC(v12, (int)v11, a1) )
        {
          v15 = sub_131220(0, a1, a1, a2, a6) == 1;
          goto LABEL_12;
        }
      }
    }
  }
  v15 = 0;
LABEL_12:
  CRYPTO_free(v12);
  sub_E07F8(v22, 0x60u);
  return v15;
}
