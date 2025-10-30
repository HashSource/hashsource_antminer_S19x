bool __fastcall sub_A3BBC(int a1, int a2)
{
  int v4; // r0

  v4 = strcmp(*(const char **)a1, *(const char **)a2);
  if ( v4 < 0 )
    return 1;
  if ( v4 )
    return 0;
  return *(_DWORD *)(a1 + 4) < *(_DWORD *)(a2 + 4);
}
