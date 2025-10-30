int __fastcall sub_CFF88(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r8
  unsigned int v7; // r7
  bool v8; // zf
  unsigned int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int *v13; // r3
  int v14; // r4
  int *i; // r0
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r1
  int v20; // r3
  bool v21; // zf
  int result; // r0
  _BOOL4 v23; // r5
  __int64 v24; // r0
  int v25; // r0
  int v26; // [sp+18h] [bp-28h]
  int v27; // [sp+18h] [bp-28h]
  _BYTE v28[36]; // [sp+1Ch] [bp-24h] BYREF

  v4 = sub_CFD40(*(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12));
  v5 = *(_DWORD *)(a1 + 12);
  v6 = v4;
  if ( !v4 )
    v6 = *(_DWORD *)(a1 + 88);
  v7 = *(_DWORD *)(a2 + 20);
  v8 = v5 == 26;
  if ( v5 != 26 )
    v8 = v5 == 3;
  v9 = v5 - 6;
  v10 = v8;
  if ( v9 <= 3 )
    v11 = v10 | 1;
  else
    v11 = v10;
  if ( !v11 )
    v7 = sub_CA074(v6, *(_DWORD *)(a2 + 20));
  v12 = (**(int (__fastcall ***)(int))(a1 + 4))(a1);
  v13 = *(int **)(a1 + 28);
  v14 = v12;
  for ( i = (int *)(a1 + 28); v13; v13 = (int *)*v13 )
  {
    if ( v13[13] > v7 )
      break;
    i = v13;
  }
  *(_DWORD *)v14 = v13;
  v16 = *(_DWORD *)(a2 + 20);
  *i = v14;
  *(_DWORD *)(v14 + 52) = v7;
  *(_DWORD *)(v14 + 68) = v16;
  v17 = *(_DWORD *)a2;
  *(_DWORD *)(v14 + 48) = *(_DWORD *)a2;
  *(_DWORD *)(v14 + 76) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(v14 + 80) = *(_DWORD *)(a2 + 36);
  if ( !v17 )
  {
    v24 = sub_94700(
            (int)"breakpoint.c",
            8682,
            "%s: Assertion `%s' failed.",
            "bp_location* add_location_to_breakpoint(breakpoint*, const symtab_and_line*)",
            "loc->pspace != NULL");
    v25 = ((int (__fastcall *)(int, _DWORD))loc_1CD290)(v26, HIDWORD(v24));
    sub_338FFC(v25);
  }
  v18 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v14 + 44) = v6;
  *(_DWORD *)(v14 + 64) = v18;
  *(_DWORD *)(v14 + 228) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v14 + 232) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v14 + 236) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 28) )
    v19 = 1;
  else
    v19 = *(unsigned __int8 *)(a2 + 29);
  ((void (__fastcall *)(int, int))loc_CA0D0)(v14, v19);
  v20 = *(_DWORD *)(*(_DWORD *)(v14 + 16) + 12);
  v21 = v20 == 6;
  if ( v20 != 6 )
    v21 = v20 == 26;
  if ( v21 )
    return v14;
  v27 = dword_487D2C;
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v28);
  sub_1CD664(*(_DWORD *)(v14 + 48));
  v23 = sub_CFED4(*(_DWORD *)(v14 + 44), *(_DWORD *)(v14 + 52));
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v28);
  ((void (__fastcall *)(int))loc_1CD290)(v27);
  result = v14;
  if ( v23 )
    *(_BYTE *)(v14 + 40) = 1;
  return result;
}
