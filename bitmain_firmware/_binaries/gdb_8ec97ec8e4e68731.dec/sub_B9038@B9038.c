bool __fastcall sub_B9038(int a1, int a2)
{
  return !strcmp(*(const char **)a1, *(const char **)a2) && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12);
}
