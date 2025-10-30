int __fastcall sub_1C339C(int a1, int a2, int (__fastcall *a3)(int, int), int a4)
{
  int v4; // r0
  int v5; // r12
  int v6; // r6
  int v9; // r4
  int result; // r0
  int v11; // r5
  int v12; // r4
  int v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r0
  __int64 v17; // r8
  __int64 i; // r4
  int v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r3
  int v24; // r0
  __int64 v25; // r0

  v4 = a1 + 16;
  v5 = *(_DWORD *)(v4 + 16 * a2);
  v6 = v4 + 16 * a2;
  if ( v5 > 96 )
  {
    v25 = sub_94700(
            (int)"parse.c",
            1734,
            "%s: Assertion `%s' failed.",
            "int operator_check_standard(expression*, int, int (*)(objfile*, void*), void*)",
            "elts[pos].opcode < OP_EXTENDED0");
    return sub_1C3634(v25, HIDWORD(v25));
  }
  else
  {
    switch ( v5 )
    {
      case 29:
        v17 = *(_QWORD *)(v6 + 32);
        if ( v17 < 1 )
          goto LABEL_12;
        for ( i = 0; i != v17; ++i )
        {
          v19 = *(_DWORD *)(*(_DWORD *)(v6 + 48) + 24);
          if ( (*(_BYTE *)(v19 + 2) & 0x10) != 0 )
          {
            v20 = *(_DWORD *)(v19 + 16);
            if ( v20 )
            {
              if ( a3(v20, a4) )
                return 1;
            }
          }
          v6 += 16;
        }
        return 0;
      case 32:
      case 38:
      case 39:
      case 49:
      case 52:
      case 56:
      case 75:
      case 76:
      case 86:
      case 88:
        v14 = *(_DWORD *)(v6 + 16);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 + 24);
          if ( (*(_BYTE *)(v15 + 2) & 0x10) != 0 )
          {
            v16 = *(_DWORD *)(v15 + 16);
            if ( v16 )
            {
              if ( a3(v16, a4) )
                return 1;
            }
          }
        }
        goto LABEL_12;
      case 40:
        v11 = *(_DWORD *)(v6 + 32);
        v12 = *(_DWORD *)(v6 + 16);
        v13 = sub_22099C(v11);
        if ( !a3(v13, a4) )
        {
          v21 = sub_21CBC4(v12);
          v22 = *(_DWORD *)(v11 + 24);
          v9 = v21;
          if ( !v22 )
            goto LABEL_4;
          v23 = *(_DWORD *)(v22 + 24);
          if ( (*(_BYTE *)(v23 + 2) & 0x10) == 0 )
            goto LABEL_4;
          v24 = *(_DWORD *)(v23 + 16);
          if ( !v24 || !a3(v24, a4) )
            goto LABEL_4;
        }
        return 1;
      case 42:
        v9 = *(_DWORD *)(v6 + 16);
LABEL_4:
        if ( !v9 )
          goto LABEL_12;
        result = a3(v9, a4) != 0;
        break;
      default:
LABEL_12:
        result = 0;
        break;
    }
  }
  return result;
}
