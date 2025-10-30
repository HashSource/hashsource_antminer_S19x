char *__fastcall sub_133380(_DWORD *a1, int a2, unsigned int *a3)
{
  int v5; // r5
  int v6; // r7
  char v7; // r1
  unsigned int v8; // r9
  unsigned int v9; // r4
  int v10; // r0
  char *v11; // r6
  unsigned int v12; // r11
  char v13; // r1
  int v14; // r2
  int v15; // r1
  bool v16; // lr
  void *v18; // r0
  char *result; // r0
  int v20; // r2
  char v21; // [sp+8h] [bp-1Ch]
  char *v22; // [sp+10h] [bp-14h]

  if ( sub_B85B0((int)a1) )
  {
    result = (char *)CRYPTO_malloc((void *)1);
    if ( result )
    {
      *result = 0;
      *a3 = 1;
      return result;
    }
    v20 = 33;
    goto LABEL_43;
  }
  if ( (unsigned int)(a2 - 1) > 6 )
  {
    sub_D0048(3, 142, 68, (int)"crypto/bn/bn_intern.c", 43);
    v18 = 0;
    goto LABEL_34;
  }
  v5 = 1 << a2;
  v6 = 2 * (1 << a2);
  if ( sub_B8720((int)a1) )
    v7 = -1;
  else
    v7 = 1;
  v21 = v7;
  if ( !*a1 || !a1[1] )
  {
    sub_D0048(3, 142, 68, (int)"crypto/bn/bn_intern.c", 55);
    v18 = 0;
LABEL_34:
    CRYPTO_free(v18);
    return 0;
  }
  v8 = sub_B85BC(a1);
  v22 = (char *)CRYPTO_malloc((void *)(v8 + 1));
  if ( !v22 )
  {
    v20 = 66;
LABEL_43:
    sub_D0048(3, 142, 65, (int)"crypto/bn/bn_intern.c", v20);
    v18 = 0;
    goto LABEL_34;
  }
  v9 = a2 + 1;
  v10 = *(_DWORD *)*a1 & (v6 - 1);
  v11 = v22 - 1;
  v12 = 0;
  while ( v10 )
  {
    v13 = v10 & 1;
    if ( (v10 & 1) == 0 )
      goto LABEL_13;
    if ( (v10 & v5) == 0 )
    {
      v15 = v10;
LABEL_31:
      if ( v15 <= -v5 )
        goto LABEL_32;
      goto LABEL_20;
    }
    if ( v8 > v9 )
    {
      v15 = v10 - v6;
      goto LABEL_31;
    }
    v15 = v10 & ((v6 - 1) >> 1);
LABEL_20:
    if ( v5 <= v15 || (v15 & 1) == 0 )
    {
LABEL_32:
      v14 = 101;
      goto LABEL_33;
    }
    v10 -= v15;
    v16 = v6 != v10 && v10 != 0;
    if ( v5 != v10 && v16 )
    {
      v14 = 113;
      goto LABEL_33;
    }
    v13 = v15 * v21;
LABEL_13:
    *++v11 = v13;
    ++v12;
    v10 = (v10 >> 1) + sub_B83F0(a1, v9++) * v5;
    if ( v6 < v10 )
    {
      v14 = 124;
LABEL_33:
      sub_D0048(3, 142, 68, (int)"crypto/bn/bn_intern.c", v14);
      v18 = v22;
      goto LABEL_34;
    }
  }
  if ( v8 > v9 )
  {
    v13 = 0;
    goto LABEL_13;
  }
  if ( v12 > v8 + 1 )
  {
    v14 = 130;
    goto LABEL_33;
  }
  *a3 = v12;
  return v22;
}
