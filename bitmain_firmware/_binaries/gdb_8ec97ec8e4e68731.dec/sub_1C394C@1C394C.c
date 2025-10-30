int __fastcall sub_1C394C(int a1, int a2, unsigned int *a3)
{
  int v6; // r0
  int v7; // r2
  int v8; // r1
  char v9; // r4
  int v10; // r6
  int v11; // r8
  int v12; // r4
  int v13; // r9
  unsigned int v14; // r0
  unsigned int v15; // r10
  int result; // r0
  int v17; // r4
  char v18; // r4
  int v19; // r2
  __int64 v20; // r0
  int v21; // r2
  _DWORD v22[2]; // [sp+0h] [bp-8h] BYREF

  v6 = sub_1B7250(a2);
  v7 = *(__int16 *)(a1 + 22);
  if ( v7 < 0 )
  {
    v18 = *(_BYTE *)(a1 + 32);
    v10 = *(_DWORD *)(a1 + 8);
    v12 = v18 & 0xF;
    if ( v7 == -1 )
    {
      sub_94700((int)"parse.c", 461, "Section index is uninitialized");
      goto LABEL_32;
    }
    v11 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 168);
    v9 = *(_BYTE *)(a1 + 32);
    v10 = *(_DWORD *)(a1 + 8);
    v11 = v8 + 12 * v7;
    v12 = v9 & 0xF;
    if ( v11 && (*(_DWORD *)(*(_DWORD *)(v8 + 12 * v7) + 20) & 0x400) != 0 )
    {
      v13 = 1;
      goto LABEL_6;
    }
  }
  v13 = 0;
  v10 += *(_DWORD *)(*(_DWORD *)(a2 + 144) + 4 * v7);
LABEL_6:
  v14 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v6, v10, &dword_4899A0);
  v15 = v14;
  if ( v10 != v14 )
  {
    sub_1B240C(v22, v14);
    if ( !v22[0] || (*(_BYTE *)(v22[0] + 32) & 0xF) != 2 )
    {
      v12 = 1;
LABEL_19:
      v11 = 0;
      goto LABEL_7;
    }
    v19 = *(__int16 *)(v22[0] + 22);
    if ( v19 != -1 )
    {
      if ( *(_DWORD *)(v22[0] + 8) + *(_DWORD *)(*(_DWORD *)(v22[1] + 144) + 4 * v19) == v15 )
        v12 = 2;
      else
        v12 = 1;
      goto LABEL_19;
    }
LABEL_32:
    v20 = sub_94700((int)"parse.c", 475, "Section index is uninitialized");
    return sub_1C3B74(v20, HIDWORD(v20), v21);
  }
LABEL_7:
  if ( dword_489690 )
    v15 = sub_2147DC(v15, v11);
  if ( v13 )
  {
    if ( a3 )
      *a3 = sub_22F1D8(a2, v15);
    return *(_DWORD *)(sub_1780C4(a2) + 88);
  }
  else
  {
    v17 = v12 - 1;
    if ( a3 )
      *a3 = v15;
    switch ( v17 )
    {
      case 0:
      case 6:
      case 7:
        result = *(_DWORD *)(sub_1780C4(a2) + 68);
        break;
      case 1:
        result = *(_DWORD *)(sub_1780C4(a2) + 72);
        break;
      case 2:
        result = *(_DWORD *)(sub_1780C4(a2) + 76);
        break;
      case 3:
      case 4:
      case 8:
      case 9:
        result = *(_DWORD *)(sub_1780C4(a2) + 80);
        break;
      default:
        result = *(_DWORD *)(sub_1780C4(a2) + 84);
        break;
    }
  }
  return result;
}
