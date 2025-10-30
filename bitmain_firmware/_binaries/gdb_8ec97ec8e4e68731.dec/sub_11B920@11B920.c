int __fastcall sub_11B920(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned __int8 *v6; // r4
  int v7; // r0
  int v9; // r0
  __int64 *v10; // r2
  int v11; // [sp+4h] [bp-8h] BYREF

  while ( 1 )
  {
    v3 = a3 + HIDWORD(a3);
    v4 = a1;
    v5 = a2;
    v6 = (unsigned __int8 *)a3;
    v7 = sub_1127BC((unsigned __int8 *)a3, a3 + HIDWORD(a3));
    v11 = v7;
    if ( v7 != -1 )
      return sub_11B814(v4, v5, 0, v7);
    if ( sub_112B8C(v6, v3, &v11) )
      break;
    v9 = sub_92F64(
           11,
           "DWARF-2 expression error: DW_OP_entry_value is supported only for single DW_OP_reg* or for DW_OP_fbreg(*)");
    v10 = *(__int64 **)(v9 + 36);
    a1 = *(_DWORD *)(v9 + 24);
    a3 = *v10;
  }
  return sub_11B814(v4, v5, 1u, v11);
}
