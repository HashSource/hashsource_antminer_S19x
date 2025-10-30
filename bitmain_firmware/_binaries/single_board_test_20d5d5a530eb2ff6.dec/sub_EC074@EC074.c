int __fastcall sub_EC074(int a1, int a2, int a3)
{
  size_t v3; // r5
  void *v6; // r0
  void *v8; // r0
  int v9; // r0
  void *v10; // r3
  void *dest; // [sp+Ch] [bp-14h] BYREF
  void *v12; // [sp+10h] [bp-10h] BYREF
  void *v13; // [sp+18h] [bp-8h]

  if ( a3 <= 0 )
    v3 = 16;
  else
    v3 = a3;
  v6 = (void *)sub_AE038(0, v3, 4);
  v12 = v6;
  if ( (int)v6 < 0 )
    return 0;
  v8 = CRYPTO_malloc(v6);
  v13 = v8;
  if ( v8 )
  {
    dest = v8;
    sub_ADE9C((_BYTE **)&dest, 0, v3, 4, 0);
    if ( a2 )
    {
      memcpy(dest, (const void *)a2, v3);
      goto LABEL_9;
    }
    if ( sub_F497C(dest, v3) > 0 )
    {
LABEL_9:
      v9 = sub_11E120(a1 + 12, 366, &v12, 0, 2);
      v10 = v13;
      a2 = v9;
      if ( v9 )
        a2 = 1;
      goto LABEL_11;
    }
    v10 = v13;
  }
  else
  {
    v10 = 0;
    a2 = 0;
  }
LABEL_11:
  CRYPTO_free(v10);
  return a2;
}
