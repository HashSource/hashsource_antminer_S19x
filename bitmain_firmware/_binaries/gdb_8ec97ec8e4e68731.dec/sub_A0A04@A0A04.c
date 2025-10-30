bool __fastcall sub_A0A04(int a1)
{
  char *v1; // r2
  int v2; // r3

  v1 = *(char **)(sub_A0870(a1) + 24);
  v2 = *v1;
  if ( v2 == 2 )
    return 1;
  if ( v2 == 1 )
    return **(_BYTE **)(sub_A0870(*((_DWORD *)v1 + 5)) + 24) == 2;
  return 0;
}
