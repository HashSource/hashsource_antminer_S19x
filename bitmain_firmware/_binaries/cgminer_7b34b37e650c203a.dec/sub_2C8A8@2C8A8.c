int __fastcall sub_2C8A8(int a1, const char *a2)
{
  int v4; // r6
  char *v5; // r0
  int v6; // r3

  v4 = sub_23CD8(a2, (_DWORD *)(a1 + 600), (char **)(a1 + 584));
  if ( v4 )
  {
    if ( !strncasecmp(a2, "stratum+tcp://", 0xEu) )
    {
      v5 = _strdup(a2);
      v6 = *(_DWORD *)(a1 + 600);
      *(_DWORD *)(a1 + 164) = v5;
      *(_BYTE *)(a1 + 640) = 1;
      *(_DWORD *)(a1 + 576) = v6;
      return v4;
    }
    return 0;
  }
  return v4;
}
