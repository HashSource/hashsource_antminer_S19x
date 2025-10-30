int __fastcall sub_17FF1C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  char *v7; // r4
  int v8; // r0
  int v9; // r4

  v1 = sub_183688(a1);
  if ( *(_DWORD *)(v1 + 44)
    && (v4 = sub_183688(v1),
        v5 = *(_DWORD *)(v4 + 44),
        v6 = sub_183688(v4),
        v7 = (char *)sub_17FCE4(v5, *(const char ***)(v6 + 48)),
        v1 = sub_17FBA4(v7),
        v7) )
  {
    free(v7);
    v2 = sub_183688(v8);
    if ( !*(_DWORD *)(v2 + 40) )
      goto LABEL_6;
  }
  else
  {
    v2 = sub_183688(v1);
    if ( !*(_DWORD *)(v2 + 40) )
    {
LABEL_6:
      v9 = sub_183688(v2);
      v2 = sub_327254("");
      *(_DWORD *)(v9 + 40) = v2;
    }
  }
  return *(_DWORD *)(sub_183688(v2) + 40);
}
