__int64 __fastcall sub_14A54(int a1)
{
  const char *v2; // r7
  int v3; // r6
  const char *v4; // r0

  if ( *(_DWORD *)(a1 + 180) )
    v2 = "Listen and drop";
  else
    v2 = "Listen normally";
  v3 = *(_DWORD *)(a1 + 20);
  v4 = (const char *)sub_6D454(a1 + 24);
  return sub_65D40(6, "%s on %d %s %s", v2, v3, (const char *)(a1 + 108), v4);
}
