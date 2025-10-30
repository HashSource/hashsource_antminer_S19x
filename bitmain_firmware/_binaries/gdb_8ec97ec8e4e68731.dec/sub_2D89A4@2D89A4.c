int __fastcall sub_2D89A4(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int result; // r0
  int v12; // r1
  int v13; // r3
  bool v14; // zf
  __int64 v15; // r2
  int v16; // r3
  int v17; // [sp-10h] [bp-10h]
  int v18; // [sp-Ch] [bp-Ch]

  if ( *(_DWORD *)(***(_DWORD ***)a2 + 4) == *(_DWORD *)(a1 + 4) )
    return 1;
  v5 = *(_DWORD **)(a2 + 12);
  v17 = v2;
  v18 = v3;
  v8 = v5[3] - 8;
  if ( v5[4] )
  {
    switch ( v5[3] )
    {
      case 8:
        v12 = 13;
        break;
      case 0xC:
        v12 = 12;
        break;
      case 0x10:
        v12 = 11;
        break;
      case 0x18:
        v12 = 10;
        break;
      case 0x20:
        v12 = 9;
        break;
      case 0x40:
        v12 = 8;
        break;
      default:
        goto LABEL_8;
    }
    v10 = sub_301758(a1, v12);
    v13 = *(_DWORD *)(v10 + 48);
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 12) + 48) != v13 )
    {
      v14 = v13 == 0;
      v15 = *(_QWORD *)(a2 + 4);
      if ( v14 )
        v16 = HIDWORD(v15) - v15;
      else
        v16 = HIDWORD(v15) + v15;
      *(_DWORD *)(a2 + 8) = v16;
    }
LABEL_16:
    *(_DWORD *)(a2 + 12) = v10;
    return 1;
  }
  else
  {
    switch ( v5[3] )
    {
      case 8:
        v9 = 7;
        goto LABEL_6;
      case 0xE:
        v9 = 6;
        goto LABEL_6;
      case 0x10:
        v9 = 5;
        goto LABEL_6;
      case 0x1A:
        v9 = 3;
        goto LABEL_6;
      case 0x20:
        v9 = 2;
        goto LABEL_6;
      case 0x40:
        v9 = 1;
LABEL_6:
        v10 = sub_301758(a1, v9);
        if ( v10 )
          goto LABEL_16;
        v5 = *(_DWORD **)(a2 + 12);
LABEL_8:
        sub_2A6A5C("%B: unsupported relocation type %s", a1, v5[8], v8, v17, v18, v4);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        result = 0;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
