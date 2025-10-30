void __fastcall sub_F032C(int a1, const char *a2, int a3, int a4, int a5, const char *a6)
{
  int v8; // r5
  char *v9; // r6
  char *v10; // r0
  int v11; // r3
  char *v12; // r8
  size_t v13; // r0
  size_t v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int v18; // [sp+14h] [bp-8h]

  v8 = a3 + *(_DWORD *)a5;
  if ( a2 && *a2 )
    v9 = (char *)sub_327254(a2);
  else
    v9 = sub_93140("#%d", a4);
  v10 = sub_93140("%s!%s", a6, v9);
  v11 = *(_DWORD *)(a5 + 12);
  v12 = v10;
  if ( !v11 && dword_4789A8 )
  {
    v17 = (_DWORD *)sub_242FC8(v10);
    sub_2594B0(
      *v17,
      "Unknown section type for \"%s\" for entry \"%s\" in dll \"%s\"\n",
      *(const char **)(a5 + 20),
      a2,
      a6);
    v11 = *(_DWORD *)(a5 + 12);
  }
  v18 = v11;
  v13 = strlen(v12);
  sub_1B25B4(a1, v12, v13, 1, v8, v18, *(_DWORD *)(a5 + 16));
  v14 = strlen(v9);
  v15 = sub_1B25B4(a1, v9, v14, 1, v8, *(_DWORD *)(a5 + 12), *(_DWORD *)(a5 + 16));
  if ( (unsigned int)dword_4789A8 > 1 )
  {
    v16 = (_DWORD *)sub_242FC8(v15);
    sub_2594B0(*v16, "Adding exported symbol \"%s\" in dll \"%s\"\n", a2, a6);
  }
  free(v12);
  free(v9);
}
