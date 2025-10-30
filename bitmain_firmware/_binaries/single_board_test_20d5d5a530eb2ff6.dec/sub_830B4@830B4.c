int __fastcall sub_830B4(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r6
  int v5; // r0
  int v6; // r3
  int v7; // [sp+Ch] [bp-4h] BYREF

  v7 = 0;
  v1 = sub_A276C(a1);
  if ( !v1 )
    goto LABEL_8;
  v2 = (_DWORD *)v1;
  if ( (*(_WORD *)(v1 + 8) & 3) == 2 )
  {
    v5 = EVP_PKEY_new();
    v6 = v5;
    v7 = v5;
    if ( v5 )
    {
      if ( sub_D9CD4(v5, *v2) )
        return v7;
      v6 = v7;
    }
    sub_DA240(v6);
    return 0;
  }
  v3 = sub_DB6A8(408, 0);
  if ( v3 )
  {
    if ( sub_DAF00() > 0 && sub_DB77C(v3, 408, 6, 4097, *v2, 0) > 0 && sub_DAF48(v3, &v7) <= 0 )
    {
      sub_DA240(v7);
      v7 = 0;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  sub_DB4BC(v3);
  return v7;
}
