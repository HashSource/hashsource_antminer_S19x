char *sub_296C40()
{
  size_t v0; // r0
  char *v1; // r0
  char **v2; // r5
  char *result; // r0
  int v4; // r2
  int v5; // r3

  dword_48BB24 = (int)sub_93028(0xCu);
  v0 = strlen((const char *)dword_48AAD4);
  v1 = (char *)sub_93028(v0 + 1);
  v2 = (char **)dword_48BB24;
  result = strcpy(v1, (const char *)dword_48AAD4);
  v4 = dword_48BB24;
  v5 = dword_48B6E0;
  *v2 = result;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = v5;
  return result;
}
