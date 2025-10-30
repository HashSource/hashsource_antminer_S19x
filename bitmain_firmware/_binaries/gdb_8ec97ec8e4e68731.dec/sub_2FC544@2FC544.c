int __fastcall sub_2FC544(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r3
  __int64 v4; // r2
  int v5; // r3
  __int64 v6; // r2
  int v7; // r3
  int v8; // r2

  v2 = (_DWORD *)result;
  switch ( *(_BYTE *)(a2 + 12) )
  {
    case 0:
      LODWORD(v4) = *(_DWORD *)(result + 16);
      HIDWORD(v4) = *(_DWORD *)(result + 12);
      if ( (_DWORD)v4 )
      {
        if ( (v4 & 0x80000000000LL) == 0 )
          return sub_2A6BBC("linker.c", 2209);
      }
      else
      {
        HIDWORD(v4) |= 0x800u;
        *(_QWORD *)(result + 8) = v4;
        *(_DWORD *)(result + 16) = &off_470950;
      }
      return result;
    case 1:
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 16) = &off_4708A8;
      return result;
    case 2:
      v5 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = v5 | 0x80;
      *(_DWORD *)(result + 16) = &off_4708A8;
      return result;
    case 3:
      v6 = *(_QWORD *)(a2 + 20);
      *(_DWORD *)(result + 16) = v6;
      *(_DWORD *)(result + 8) = HIDWORD(v6);
      return result;
    case 4:
      v7 = *(_DWORD *)(result + 12);
      v8 = *(_DWORD *)(a2 + 24);
      result = *(_DWORD *)(a2 + 20);
      v2[3] = v7 | 0x80;
      v2[4] = result;
      v2[2] = v8;
      return result;
    case 5:
      v3 = *(_DWORD *)(result + 16);
      *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 24);
      if ( !v3 )
        goto LABEL_6;
      if ( (*(_DWORD *)(v3 + 20) & 0x1000) == 0 )
      {
        if ( (char **)v3 != &off_4708A8 )
          result = sub_2A6BBC("linker.c", 2242);
LABEL_6:
        v2[4] = &off_470800;
      }
      return result;
    case 6:
    case 7:
      return result;
    default:
      sub_2A6BF0((int)"linker.c", 2202, (int)"set_symbol_from_hash");
  }
}
