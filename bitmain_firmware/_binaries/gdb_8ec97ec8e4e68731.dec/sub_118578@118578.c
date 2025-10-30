int __fastcall sub_118578(int a1)
{
  int *v2; // r9
  int v3; // r0
  int v4; // r0
  int v5; // r7
  int v6; // r10
  __int64 v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r0
  bool v11; // cc
  unsigned int v12; // lr
  unsigned int v13; // r1
  __int64 v14; // r2
  int v15; // r12
  unsigned int v16; // r4
  int v17; // r4
  __int64 v18; // r0
  int v19; // r5
  int v20; // r0
  __int64 v21; // r0

  v2 = (int *)((int (*)(void))loc_26C048)();
  v3 = sub_26BC70(a1);
  v4 = sub_171258(v3);
  if ( **(_BYTE **)(v4 + 24) != 1 )
    return 0;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = v4;
  v7 = 8 * sub_26BC80(a1);
  v8 = 8 * v5;
  if ( sub_26BCA0(a1) )
    v7 += sub_26BC90(a1);
  v9 = v2[2];
  v10 = -858993459 * ((v2[3] - v9) >> 3);
  v11 = v10 <= 0;
  if ( v10 )
    v11 = v8 <= 0;
  if ( v11 )
  {
LABEL_19:
    sub_94700(
      (int)"dwarf2loc.c",
      2225,
      "%s: Assertion `%s' failed.",
      "value* indirect_pieced_value(value*)",
      "piece != NULL");
    goto LABEL_20;
  }
  v12 = *(_DWORD *)(v9 + 24);
  if ( v7 >= 1 )
  {
    v13 = 0;
    LODWORD(v14) = *(_DWORD *)(v9 + 24);
    v14 = (unsigned int)v14;
    if ( v7 < (unsigned int)v14 )
    {
LABEL_10:
      v16 = v7 - v12 + v8;
      goto LABEL_11;
    }
    v15 = v9 + 40;
    while ( 1 )
    {
      ++v13;
      v7 -= v14;
      if ( v10 <= v13 )
        goto LABEL_19;
      v9 = v15;
      v12 = *(_DWORD *)(v15 + 24);
      if ( v7 < 1 )
        break;
      v14 = *(unsigned int *)(v15 + 24);
      v15 += 40;
      if ( v7 < v12 )
        goto LABEL_10;
    }
  }
LABEL_20:
  v16 = v8 - v12;
LABEL_11:
  if ( *(_DWORD *)v9 != 5 )
    return 0;
  if ( v16 )
    sub_946E0("Invalid use of DW_OP_implicit_pointer");
  v17 = sub_15F7E8("No frame selected.");
  v18 = sub_15ECB4(v17);
  v19 = ((int (__fastcall *)(_DWORD, _DWORD))loc_165BB8)(v18, HIDWORD(v18));
  v20 = sub_26E978(a1);
  v21 = sub_15C190(v20, *(_DWORD *)(v6 + 20), v19);
  return sub_118328(*(_DWORD *)(v9 + 8), v21 + *(_QWORD *)(v9 + 16), v2[1], v17, v6);
}
