int __fastcall sub_C72B4(int a1, int a2)
{
  char *v3; // r2
  char *v5; // r3
  const char *v6; // r2

  v3 = "tcatch";
  if ( *(_DWORD *)(a1 + 20) )
    v3 = "catch";
  v5 = "load";
  if ( !*(_BYTE *)(a1 + 136) )
    v5 = "unload";
  sub_2594B0(a2, "%s %s", v3, v5);
  v6 = *(const char **)(a1 + 140);
  if ( v6 )
    sub_2594B0(a2, " %s", v6);
  return sub_2594B0(a2, (const char *)&word_356638);
}
