int __fastcall sub_1CE978(int a1, int a2, int a3)
{
  int v6; // r9
  const char *v7; // r1
  const char *v8; // r0
  int v9; // r0
  int v10; // r0
  char *v11; // r2
  int v12; // r5
  int v13; // r3
  int v14; // r2
  int v15; // r2

  v6 = sub_1B7250(a1);
  if ( *(_BYTE *)(a2 + 54) )
    LOWORD(v7) = -7340;
  else
    LOWORD(v7) = -7308;
  HIWORD(v7) = 60;
  sub_25A418(a3, v7, *(_DWORD *)(a2 + 4));
  sub_25A418(a3, "(object ");
  sub_25A44C(a2, a3);
  sub_25A418(a3, ")\n\n");
  v8 = (const char *)sub_1B87A8(a1);
  sub_2594B0(a3, "  Read from object file %s (", v8);
  sub_25A44C(a1, a3);
  sub_2594B0(a3, ")\n");
  if ( *(_BYTE *)(a2 + 52) )
  {
    sub_25A418(a3, "  Full symtab was read (at ");
    sub_25A44C(*(_DWORD *)(a2 + 56), a3);
    sub_25A418(a3, " by function at ");
    sub_25A44C(*(_DWORD *)(a2 + 60), a3);
    sub_25A418(a3, ")\n");
  }
  sub_25A418(a3, "  Symbols cover text addresses ");
  v9 = sub_25AC8C(v6, *(_DWORD *)(a2 + 16));
  sub_25A6BC(v9, a3);
  sub_25A418(a3, (const char *)&word_3C1464);
  v10 = sub_25AC8C(v6, *(_DWORD *)(a2 + 20));
  sub_25A6BC(v10, a3);
  sub_25A418(a3, (const char *)&word_356638);
  v11 = "yes";
  if ( !*(_BYTE *)(a2 + 53) )
    v11 = "no";
  sub_25A418(a3, "  Address map supported - %s.\n", v11);
  sub_25A418(a3, "  Depends on %d other partial symtabs.\n", *(_DWORD *)(a2 + 32));
  if ( *(int *)(a2 + 32) > 0 )
  {
    v12 = 0;
    do
    {
      sub_25A418(a3, "    %d ", v12);
      sub_25A44C(*(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v12), a3);
      v13 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v12++);
      sub_25A418(a3, " %s\n", *(const char **)(v13 + 4));
    }
    while ( *(_DWORD *)(a2 + 32) > v12 );
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    sub_25A418(a3, "  Shared partial symtab with user ");
    sub_25A44C(*(_DWORD *)(a2 + 24), a3);
    sub_25A418(a3, (const char *)&word_356638);
  }
  v14 = *(_DWORD *)(a2 + 40);
  if ( v14 > 0 )
    sub_1CE684(v6, *(_DWORD *)(a1 + 108) + 4 * *(_DWORD *)(a2 + 36), v14, "Global", a3);
  v15 = *(_DWORD *)(a2 + 48);
  if ( v15 > 0 )
    sub_1CE684(v6, *(_DWORD *)(a1 + 120) + 4 * *(_DWORD *)(a2 + 44), v15, "Static", a3);
  return sub_25A418(a3, (const char *)&word_356638);
}
