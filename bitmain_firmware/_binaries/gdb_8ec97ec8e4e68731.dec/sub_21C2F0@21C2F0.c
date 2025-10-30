int *__fastcall sub_21C2F0(int *a1, int a2, int a3, const char *a4, int a5)
{
  _DWORD *v9; // r4
  int v10; // r6
  int v11; // r5
  int v12; // r0
  int v13; // r11
  int v14; // r4
  char *v15; // r6
  char *v16; // r0
  int v18; // r5
  const char *v19; // r11
  const char *v20; // r4
  const char *v21; // r0
  _DWORD *v22; // r0

  if ( (unsigned int)dword_48970C <= 1 )
  {
    v9 = *(_DWORD **)(a2 + 20);
    if ( v9 )
      goto LABEL_3;
LABEL_16:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
  v18 = *(_DWORD *)sub_242FC8(a1);
  v19 = (const char *)sub_1B87CC(a2);
  v20 = "STATIC_BLOCK";
  if ( !a3 )
    v20 = "GLOBAL_BLOCK";
  v21 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
  v12 = sub_2594B0(v18, "lookup_symbol_in_objfile_symtabs (%s, %s, %s, %s)", v19, v20, a4, v21);
  v9 = *(_DWORD **)(a2 + 20);
  if ( !v9 )
  {
LABEL_14:
    if ( (unsigned int)dword_48970C > 1 )
    {
      v22 = (_DWORD *)sub_242FC8(v12);
      sub_2594B0(*v22, " = NULL\n");
    }
    goto LABEL_16;
  }
LABEL_3:
  v10 = a3 + 2;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9[8] + 4 * v10);
    v12 = sub_C2C34(v11, a4, a5);
    v13 = v12;
    if ( v12 )
      break;
    v9 = (_DWORD *)*v9;
    if ( !v9 )
      goto LABEL_14;
  }
  if ( (unsigned int)dword_48970C > 1 )
  {
    v14 = *(_DWORD *)sub_242FC8(v12);
    v15 = sub_98EEC(v13);
    v16 = sub_98EEC(v11);
    sub_2594B0(v14, " = %s (block %s)\n", v15, v16);
  }
  if ( (*(_BYTE *)(v13 + 33) & 1) != 0 )
    v13 = ((int (__fastcall *)(int, int))loc_21C1E0)(v13, a2);
  *a1 = v13;
  a1[1] = v11;
  return a1;
}
