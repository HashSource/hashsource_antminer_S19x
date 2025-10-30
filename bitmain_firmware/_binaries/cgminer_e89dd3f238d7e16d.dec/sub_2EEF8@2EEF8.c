int __fastcall sub_2EEF8(int a1, char *a2)
{
  if ( (unsigned __int8)sub_21EF8(a2, (char **)(a1 + 600), (char **)(a1 + 584)) != 1 )
    return 0;
  if ( strncasecmp(a2, "stratum+tcp://", 0xEu) )
    return 0;
  *(_DWORD *)(a1 + 164) = strdup(a2);
  *(_BYTE *)(a1 + 640) = 1;
  *(_DWORD *)(a1 + 576) = *(_DWORD *)(a1 + 600);
  return 1;
}
