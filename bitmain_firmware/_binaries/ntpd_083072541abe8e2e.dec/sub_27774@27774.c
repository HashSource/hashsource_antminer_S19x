int __fastcall sub_27774(int a1)
{
  int v1; // r1
  int v3; // r7
  const char *v4; // r3
  _DWORD *v5; // r0
  char v7[256]; // [sp+Ch] [bp-108h] BYREF

  v1 = *(_DWORD *)(a1 + 136);
  if ( (v1 & 0x20) != 0 )
  {
    v3 = 34013184;
    v4 = "iff";
  }
  else if ( (v1 & 0x40) != 0 )
  {
    v3 = 34078720;
    v4 = "gq";
  }
  else
  {
    if ( (v1 & 0x80) == 0 )
    {
LABEL_9:
      v3 = 0x2000000;
      sub_64E00(5, "crypto_ident: no identity parameters found for group %s", *(const char **)(a1 + 80));
      return v3;
    }
    v3 = 34144256;
    v4 = "mv";
  }
  sub_6C054(v7, 256, "ntpkey_%spar_%s", v4, *(const char **)(a1 + 80));
  v5 = sub_26D98(v7, 0, a1 + 16);
  *(_DWORD *)(a1 + 172) = v5;
  if ( !v5 )
    goto LABEL_9;
  return v3;
}
