char **__fastcall sub_127E94(int *a1, char **a2, signed int a3)
{
  bool v3; // cc
  char *v4; // r4
  char *v8; // r0
  char *v9; // r2
  char *v10; // r3
  int v11; // t1
  int v12; // r2
  void **v14; // r4
  void *v15; // r8
  char *v16; // r9
  char *v17; // r5
  char **v18; // r4
  char v19[8]; // [sp+8h] [bp-18h] BYREF
  int v20; // [sp+10h] [bp-10h]
  signed int v21; // [sp+14h] [bp-Ch]
  char *v22; // [sp+18h] [bp-8h]
  int v23; // [sp+1Ch] [bp-4h]

  v3 = (int)a2 <= 0;
  if ( a2 )
    v3 = a3 <= 0;
  if ( v3 || (v4 = *a2) == 0 || v4[a3 - 1] < 0 )
  {
    v12 = 254;
LABEL_13:
    sub_D0048(13, 196, 216, (int)"crypto/asn1/a_object.c", v12);
    return 0;
  }
  else
  {
    v20 = 0;
    v23 = 0;
    v22 = v4;
    v21 = a3;
    v8 = sub_EAC84((int)v19);
    v9 = v4 - 1;
    v10 = v8;
    if ( v8 )
    {
      v18 = sub_EAA20((unsigned int)v8);
      if ( a1 )
      {
        ASN1_OBJECT_free(*a1);
        *a1 = (int)v18;
      }
      *a2 += a3;
      return v18;
    }
    do
    {
      v11 = (unsigned __int8)*++v9;
      if ( v11 == 128 && (!v10 || *(v9 - 1) >= 0) )
      {
        v12 = 284;
        goto LABEL_13;
      }
      ++v10;
    }
    while ( a3 > (int)v10 );
    if ( !a1 || (v14 = (void **)*a1) == 0 || ((unsigned int)v14[5] & 1) == 0 )
    {
      v14 = (void **)sub_127DE0();
      if ( !v14 )
        return 0;
    }
    v15 = v14[4];
    v16 = *a2;
    v14[4] = 0;
    if ( !v15 || a3 > (int)v14[3] )
    {
      v14[3] = 0;
      CRYPTO_free(v15);
      v15 = CRYPTO_malloc((void *)a3);
      if ( !v15 )
      {
        sub_D0048(13, 196, 65, (int)"crypto/asn1/a_object.c", 332);
        if ( !a1 || v14 != (void **)*a1 )
          ASN1_OBJECT_free((int)v14);
        return 0;
      }
      v14[5] = (void *)((unsigned int)v14[5] | 8);
    }
    memcpy(v15, v16, a3);
    if ( ((unsigned int)v14[5] & 4) != 0 )
    {
      CRYPTO_free(*v14);
      CRYPTO_free(v14[1]);
      v14[5] = (void *)((unsigned int)v14[5] & 0xFFFFFFFB);
    }
    v14[3] = (void *)a3;
    v14[4] = v15;
    v17 = &v16[a3];
    *v14 = 0;
    v14[1] = 0;
    if ( a1 )
      *a1 = (int)v14;
    *a2 = v17;
    return (char **)v14;
  }
}
