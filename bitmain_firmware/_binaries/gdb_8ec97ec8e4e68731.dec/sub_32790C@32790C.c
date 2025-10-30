int __fastcall sub_32790C(int result, int a2, _DWORD *a3)
{
  char v3; // lr
  char v4; // r5
  int v5; // r12
  int v6; // r6
  bool v7; // cc
  _WORD *v8; // lr
  int v9; // r3
  _WORD *v10; // r12
  int v11; // r3
  int v12; // r3

  v3 = *(_BYTE *)(result + 8);
  v4 = v3 & 0x80;
  if ( *(_WORD *)(result + 10) || *(_DWORD *)result != 1 || (*(_BYTE *)(result + 8) & 0x70) != 0 )
  {
    *(_BYTE *)(result + 8) = 0;
    v5 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(result + 4) = 0;
    *(_WORD *)(result + 10) = 0;
    *(_DWORD *)result = 1;
    switch ( v5 )
    {
      case 0:
        if ( v3 < 0 )
          goto LABEL_5;
        goto LABEL_12;
      case 5:
      case 7:
        goto LABEL_5;
      case 6:
        if ( v3 < 0 )
          goto LABEL_12;
LABEL_5:
        v6 = *(_DWORD *)a2;
        v7 = *(_DWORD *)a2 <= 3;
        *(_DWORD *)result = *(_DWORD *)a2;
        v8 = (_WORD *)(result + 10);
        if ( v7 )
        {
          v9 = v6;
        }
        else
        {
          v10 = (_WORD *)(result + 10);
          v9 = v6;
          do
          {
            v9 -= 3;
            *v10++ = 999;
            v8 = v10;
          }
          while ( v9 > 3 );
        }
        *v8 = dword_438D00[v9] - 1;
        *(_BYTE *)(result + 8) = 0;
        v11 = *(_DWORD *)(a2 + 4);
        *(_BYTE *)(result + 8) = v4;
        *(_DWORD *)(result + 4) = v11 - v6 + 1;
        break;
      default:
LABEL_12:
        *(_BYTE *)(result + 8) = v4 | 0x40;
        break;
    }
    *a3 |= 0xA20u;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 4);
    if ( *(_BYTE *)(a2 + 24) )
      v12 -= *(_DWORD *)a2 - 1;
    if ( *(_DWORD *)(result + 4) > v12 )
    {
      *(_DWORD *)(result + 4) = v12;
      *a3 |= 0x400u;
    }
  }
  return result;
}
