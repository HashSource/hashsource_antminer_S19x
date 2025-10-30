__int64 __fastcall sub_1482C(int a1)
{
  const char *v2; // r6
  int v3; // r7
  const char *v4; // r0

  if ( *(_DWORD *)(a1 + 180) )
    v2 = "Listen and drop";
  else
    v2 = "Listen normally";
  v3 = *(_DWORD *)(a1 + 20);
  v4 = (const char *)sub_6C47C(a1 + 24);
  return sub_64E00(6, "%s on %d %s %s", v2, v3, (const char *)(a1 + 108), v4);
}
