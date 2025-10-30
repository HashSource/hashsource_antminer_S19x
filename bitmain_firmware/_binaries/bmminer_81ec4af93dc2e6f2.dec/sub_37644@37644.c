size_t __fastcall sub_37644(int a1, int a2)
{
  int v3; // r4
  char *v4; // r6
  size_t v5; // r4
  char *v6; // r6
  size_t v7; // r5

  v3 = *(_DWORD *)(a1 + 1572) + 1848 + 32 * *(_DWORD *)(a1 + 1708);
  v4 = _strdup((const char *)(a2 + v3));
  v5 = v3 + 1 + strlen(v4);
  free(v4);
  v6 = _strdup((const char *)(a2 + v5));
  v7 = strlen(v6);
  free(v6);
  return v7 + 17 + v5;
}
