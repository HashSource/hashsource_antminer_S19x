_DWORD *__fastcall sub_292428(int a1)
{
  int v2; // r8
  int v3; // r7
  int v4; // r6
  _DWORD *v5; // r4
  char *v6; // r0
  size_t v7; // r0
  char *v8; // r0

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = sub_93028(0x14u);
  v5[4] = v2;
  v5[3] = 0;
  v6 = *(char **)(a1 + 12);
  v5[1] = v3;
  v5[2] = v4;
  *v5 = 0;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = (char *)sub_93028(v7 + 1);
    v6 = strcpy(v8, *(const char **)(a1 + 12));
  }
  v5[3] = v6;
  return v5;
}
