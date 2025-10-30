void __fastcall sub_246150(int a1, int a2, int a3, int a4)
{
  size_t v6; // r0
  _BYTE *v7; // r5
  size_t v8; // r0
  FILE *v9; // r6
  int v10; // r7
  int v11; // r3
  char *v12; // r0
  FILE *v13; // r5
  int v14; // r6
  char *v15; // r0

  if ( *(_DWORD *)a2 )
  {
    v6 = strlen(*(const char **)a2);
    v7 = sub_93028(2 * v6 + 1);
    v8 = strlen(*(const char **)a2);
    sub_99420(*(_DWORD *)a2, v7, v8);
    v9 = *(FILE **)(a1 + 4);
    v10 = *(_DWORD *)(a2 + 4);
    v12 = sub_989F0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, v11);
    fprintf(v9, "tsv %x:%s:%x:%s\n", v10, v12, *(_DWORD *)(a2 + 16), v7);
    if ( *(_DWORD *)a2 )
      free(v7);
  }
  else
  {
    v13 = *(FILE **)(a1 + 4);
    v14 = *(_DWORD *)(a2 + 4);
    v15 = sub_989F0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, a4);
    fprintf(v13, "tsv %x:%s:%x:%s\n", v14, v15, *(_DWORD *)(a2 + 16), "");
  }
}
