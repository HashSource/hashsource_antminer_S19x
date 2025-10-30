void __fastcall sub_1B5634(int a1, int a2)
{
  const char *v3; // r11
  int v4; // r9
  size_t v5; // r7
  char *v6; // r0
  void *v7; // r8
  char *v8; // r5
  int v9; // r10
  char *v10; // r0
  void *v11; // r5
  int v12; // r3

  if ( a1 )
  {
    v3 = *(const char **)a1;
    v4 = *(_DWORD *)(a1 + 4);
    v5 = strlen((const char *)dword_487B4C) + v4;
    v6 = (char *)sub_93028(v5 + 2);
    v7 = (void *)dword_487B4C;
    v8 = v6;
    v9 = (int)v6;
    strcpy(v6, (const char *)dword_487B4C);
    strncat(v8, v3, v4);
    free(v7);
    dword_487B4C = (int)v8;
    if ( !a2 )
    {
      v8[v5] = 0;
      return;
    }
    goto LABEL_6;
  }
  if ( a2 )
  {
    v5 = strlen((const char *)dword_487B4C);
    v10 = (char *)sub_93028(v5 + 2);
    v11 = (void *)dword_487B4C;
    v9 = (int)v10;
    strcpy(v10, (const char *)dword_487B4C);
    free(v11);
    dword_487B4C = v9;
LABEL_6:
    v12 = dword_487B48;
    *(_BYTE *)(v9 + v5) = 58;
    *(_BYTE *)(v9 + v5 + 1) = 0;
    dword_487B48 = v12 + 1;
    return;
  }
  ++dword_487B48;
}
