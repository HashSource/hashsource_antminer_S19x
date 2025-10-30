int __fastcall sub_C090C(int a1, int a2, int a3, void *a4, size_t n, int a6)
{
  int v9; // r0
  void *v10; // r5
  int v11; // r4
  int v12; // r6
  const void *v14; // r0
  int v15; // r0
  size_t *v16; // [sp+4h] [bp-Ch] BYREF
  void *v17; // [sp+8h] [bp-8h] BYREF
  void *s2; // [sp+Ch] [bp-4h] BYREF

  v17 = a4;
  s2 = 0;
  v16 = (size_t *)sub_C07CC();
  if ( !v16 )
    return -1;
  if ( sub_C07B4((int *)&v16, &v17, n) )
  {
    v9 = sub_C07C0(v16, (_BYTE **)&s2);
    if ( n == v9 )
    {
      v10 = s2;
      v14 = a4;
      v11 = n;
      v12 = -1;
      if ( !memcmp(v14, s2, n) )
      {
        v15 = sub_C1778(a2, a3, v16, a6);
        v10 = s2;
        v12 = v15;
      }
    }
    else
    {
      v10 = s2;
      v11 = v9;
      v12 = -1;
    }
  }
  else
  {
    v11 = -1;
    v10 = s2;
    v12 = -1;
  }
  sub_E0758((int)v10, v11, (size_t)"crypto/dsa/dsa_asn1.c");
  sub_C0804((int **)v16);
  return v12;
}
