int __fastcall sub_297D10(int a1, const char *a2, int a3)
{
  _DWORD *v6; // r6
  int v7; // r8
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r0
  size_t v11; // r0
  char *v12; // r0
  char *v13; // r0
  int v14; // r3

  if ( a1 < 0 || dword_490158 <= a1 )
    return 0;
  v6 = sub_93028(0xCu);
  v7 = *(_DWORD *)(dword_48BB28 + 4 * a1);
  v8 = strlen(a2);
  v9 = (char *)sub_93028(v8 + 1);
  v10 = strcpy(v9, a2);
  v6[2] = a3;
  *v6 = v10;
  v11 = strlen(*(const char **)(v7 + 4));
  v12 = (char *)sub_93028(v11 + 1);
  v13 = strcpy(v12, *(const char **)(v7 + 4));
  v14 = dword_48BB28;
  v6[1] = v13;
  *(_DWORD *)(v14 + 4 * a1) = v6;
  return v7;
}
