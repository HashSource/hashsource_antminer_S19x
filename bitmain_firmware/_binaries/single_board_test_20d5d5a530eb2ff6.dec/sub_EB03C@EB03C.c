char **__fastcall sub_EB03C(char *a1, int a2)
{
  char *v3; // r0
  int v4; // r0
  int v5; // r6
  void *v6; // r0
  void *v7; // r9
  void *v8; // r0
  void *v9; // r5
  int v10; // r4
  int v12; // [sp+8h] [bp-Ch] BYREF
  void *v13; // [sp+Ch] [bp-8h] BYREF

  if ( !a2 )
  {
    v3 = sub_EAFD0((int)a1);
    if ( v3 )
      return sub_EAA20((unsigned int)v3);
    v3 = sub_EAF68((int)a1);
    if ( v3 )
      return sub_EAA20((unsigned int)v3);
  }
  v4 = sub_1279C8(0, 0, a1);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  v6 = (void *)sub_AE038(0, v4, 6);
  v7 = v6;
  if ( (int)v6 < 0 )
    return 0;
  v8 = CRYPTO_malloc(v6);
  v9 = v8;
  if ( v8 )
  {
    v12 = (int)v8;
    sub_ADE9C((_BYTE **)&v12, 0, v5, 6, 0);
    sub_1279C8(v12, v5, a1);
    v13 = v9;
    v10 = sub_128020(0, &v13, v7);
    CRYPTO_free(v9);
    return (char **)v10;
  }
  else
  {
    sub_D0048(8, 108, 65, (int)"crypto/objects/obj_dat.c", 381);
    return 0;
  }
}
