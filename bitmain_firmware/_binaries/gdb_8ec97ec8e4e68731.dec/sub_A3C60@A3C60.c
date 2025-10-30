bool __fastcall sub_A3C60(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) && strcmp(*(const char **)a1, *(const char **)a2) == 0;
}
