bool __fastcall sub_12B140(size_t *a1, char *s)
{
  _BOOL4 v4; // r5
  void *v6; // r0
  char *v7; // r0
  size_t n; // [sp+4h] [bp-3Ch] BYREF
  int v9; // [sp+8h] [bp-38h]
  char *v10; // [sp+Ch] [bp-34h]
  int v11; // [sp+10h] [bp-30h]
  _DWORD v12[11]; // [sp+14h] [bp-2Ch] BYREF

  n = strlen(s);
  v10 = s;
  v11 = 256;
  v9 = 23;
  if ( !sub_12B10C((int)&n) )
  {
    v9 = 24;
    if ( !sub_12B10C((int)&n) )
      return 0;
  }
  if ( !a1 )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( v9 == 24 )
  {
    if ( sub_12AAA0(v12, (int *)&n) )
    {
      if ( (unsigned int)(v12[5] - 50) > 0x63 )
        goto LABEL_4;
      v6 = (void *)(n - 1);
      n -= 2;
      v7 = (char *)sub_E0740(v6);
      v10 = v7;
      if ( v7 )
      {
        memcpy(v7, s + 2, n);
        v9 = 23;
        goto LABEL_4;
      }
    }
    return 0;
  }
LABEL_4:
  v4 = sub_AE140(a1, (int *)&n) != 0;
LABEL_5:
  if ( s != v10 )
    CRYPTO_free(v10);
  return v4;
}
