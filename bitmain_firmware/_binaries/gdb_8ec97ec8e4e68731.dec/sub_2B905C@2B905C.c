int __fastcall sub_2B905C(int a1, const char *a2)
{
  int v5; // r0
  char v6; // r2

  if ( sub_2AD864(a1, a2) )
    return 1;
  v5 = sub_2ADB48(a1, a2, (const char *)&loc_104118 + 3);
  if ( !v5 )
    return 0;
  v6 = *(_BYTE *)(v5 + 24);
  *(_DWORD *)(v5 + 64) = 2;
  *(_BYTE *)(v5 + 24) = v6 | 8;
  return 1;
}
