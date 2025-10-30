int __fastcall sub_10D9B8(__int64 a1, int a2, int a3, _DWORD *a4, int a5)
{
  char v6; // r4
  _DWORD *v7; // r8
  int v8; // r7
  int v9; // r1
  int v10; // r1
  int v11; // r2
  int result; // r0
  int v13; // r2
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r2
  int v19; // r2
  __int64 v20; // r0
  int v21; // [sp+4h] [bp-10h]
  _DWORD v22[3]; // [sp+8h] [bp-Ch] BYREF

  if ( (a1 & 0x8000000000LL) != 0 )
  {
LABEL_38:
    v20 = sub_94700((int)"dwarf2-frame.c", 1539, "Unsupported encoding: DW_EH_PE_indirect");
    return sub_10DCB0(v20, HIDWORD(v20));
  }
  else
  {
    v6 = BYTE4(a1);
    HIDWORD(a1) = BYTE4(a1) & 0x70;
    v7 = (_DWORD *)a1;
    v8 = a3;
    *a4 = 0;
    if ( HIDWORD(a1) == 32 )
    {
      a5 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      if ( HIDWORD(a1) <= 0x20 )
        goto LABEL_8;
      if ( HIDWORD(a1) == 64 )
        goto LABEL_11;
      if ( HIDWORD(a1) == 80 )
        goto LABEL_17;
      if ( HIDWORD(a1) != 48 )
      {
        while ( 1 )
        {
          a1 = sub_94700((int)"dwarf2-frame.c", 1572, "Invalid or unsupported encoding");
LABEL_8:
          if ( !HIDWORD(a1) )
          {
            a5 = 0;
            goto LABEL_11;
          }
          if ( HIDWORD(a1) == 16 )
          {
            a5 = v8 - *(_DWORD *)(a1 + 8) + *(_DWORD *)(*(_DWORD *)(a1 + 16) + 28);
            goto LABEL_11;
          }
        }
      }
      a5 = *(_DWORD *)(a1 + 20);
    }
LABEL_11:
    while ( (v6 & 7) == 0 )
    {
      switch ( a2 )
      {
        case 4:
          LOBYTE(a2) = 3;
LABEL_31:
          v6 |= a2;
          if ( sub_2A78D4(*v7) )
            v6 |= 8u;
          goto LABEL_12;
        case 8:
          LOBYTE(a2) = 4;
          goto LABEL_31;
        case 2:
          goto LABEL_31;
      }
      LODWORD(a1) = sub_94700((int)"dwarf2-frame.c", 1523, "Unsupported address size");
LABEL_17:
      v21 = a2;
      sub_347924(a3 - *(_DWORD *)(a1 + 8), a2);
      a5 = v9;
      a2 = v21;
      if ( v9 )
      {
        v10 = v21 - v9;
        a5 = 0;
        *a4 = v10;
        v8 += v10;
      }
    }
LABEL_12:
    switch ( v6 & 0xF )
    {
      case 1:
        v15 = sub_11257C(v8, v8 + 10, v22);
        goto LABEL_25;
      case 2:
        v19 = *(_DWORD *)(*v7 + 4);
        *a4 += 2;
        return a5 + (*(int (__fastcall **)(int))(v19 + 52))(v8);
      case 3:
        v18 = *(_DWORD *)(*v7 + 4);
        *a4 += 4;
        return a5 + (*(int (__fastcall **)(int))(v18 + 40))(v8);
      case 4:
        v17 = *(_DWORD *)(*v7 + 4);
        *a4 += 8;
        return a5 + (*(int (__fastcall **)(int))(v17 + 28))(v8);
      case 9:
        v15 = sub_112620(v8, v8 + 10, v22);
LABEL_25:
        v16 = v22[0];
        *a4 += v15 - v8;
        result = a5 + v16;
        break;
      case 0xA:
        v14 = *(_DWORD *)(*v7 + 4);
        *a4 += 2;
        result = (*(int (__fastcall **)(int))(v14 + 56))(v8) + a5;
        break;
      case 0xB:
        v13 = *(_DWORD *)(*v7 + 4);
        *a4 += 4;
        result = (*(int (__fastcall **)(int))(v13 + 44))(v8) + a5;
        break;
      case 0xC:
        v11 = *(_DWORD *)(*v7 + 4);
        *a4 += 8;
        result = a5 + (*(int (__fastcall **)(int))(v11 + 32))(v8);
        break;
      default:
        sub_94700((int)"dwarf2-frame.c", 1620, "Invalid or unsupported encoding");
        goto LABEL_38;
    }
  }
  return result;
}
