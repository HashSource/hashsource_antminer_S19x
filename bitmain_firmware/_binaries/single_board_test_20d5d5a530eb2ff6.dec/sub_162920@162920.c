char *__fastcall sub_162920(const char *a1, int a2, _DWORD *a3, int *a4)
{
  int v4; // r5
  int v8; // r4
  int v9; // r6
  int v10; // r0
  _BYTE *v12; // r0
  _BYTE *v13; // r6
  _BYTE *v14; // r4
  int v15; // r9
  unsigned int v16; // r12
  int v17; // r0
  __int16 v18; // r1
  _BYTE *v19; // r0
  int v20; // [sp+Ch] [bp-10h]
  unsigned int v21[2]; // [sp+14h] [bp-8h] BYREF

  v4 = a2;
  v21[0] = 0;
  if ( a2 == -1 )
    v4 = strlen(a1);
  if ( v4 > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = sub_12B614((unsigned __int8 *)&a1[v8], v4 - v8, v21);
      if ( v10 < 0 )
        return sub_1625A8(a1, v4, a3, a4);
      if ( v21[0] > (unsigned int)&locret_10FFFE )
        return 0;
      v8 += v10;
      if ( v21[0] < 0x10000 )
        v9 += 2;
      else
        v9 += 4;
    }
    while ( v4 > v8 );
    v20 = v9 + 2;
    v12 = CRYPTO_malloc((void *)(v9 + 2));
    v13 = v12;
    if ( v12 )
    {
      v14 = v12;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v17 = sub_12B614((unsigned __int8 *)&a1[v15], v4 - v15, v21);
          v18 = v21[0];
          if ( v21[0] < 0x10000 )
            break;
          v16 = ((v21[0] - 0x10000) >> 10) + 55296;
          v15 += v17;
          v21[0] -= 0x10000;
          v14[3] = v18;
          v14[1] = v16;
          v14[2] = (unsigned __int16)((v18 & 0x3FF) - 9216) >> 8;
          v14 += 4;
          *(v14 - 4) = BYTE1(v16);
          if ( v4 <= v15 )
            goto LABEL_18;
        }
        *v14 = BYTE1(v21[0]);
        v15 += v17;
        v14[1] = v21[0];
        v14 += 2;
      }
      while ( v4 > v15 );
      goto LABEL_18;
    }
LABEL_26:
    sub_D0048(35, 129, 65, (int)"crypto/pkcs12/p12_utl.c", 118);
    return 0;
  }
  v19 = CRYPTO_malloc((void *)2);
  v13 = v19;
  if ( !v19 )
    goto LABEL_26;
  v14 = v19;
  v20 = 2;
LABEL_18:
  *v14 = 0;
  v14[1] = 0;
  if ( a4 )
    *a4 = v20;
  if ( a3 )
    *a3 = v13;
  return v13;
}
