int __fastcall sub_2B2A6C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int result; // r0
  unsigned int v4; // r12
  int v5; // r4
  int v6; // r2
  int v7; // r5
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // lr
  unsigned int v12; // r3
  int v13; // r8
  int v14; // r7
  unsigned int v15; // r6

  v2 = (_DWORD *)a1[6];
  if ( v2 != (_DWORD *)*a2 )
    return 1;
  v4 = a1[9];
  if ( v4 <= 0x11 )
    return 1;
  v5 = a1[7];
  v6 = *(_DWORD *)(a1[3] + 56) + a1[4] + *(_DWORD *)(*(_DWORD *)(a1[3] + 60) + 28);
  v7 = v2[37];
  v8 = v5 + v2[14] + *(_DWORD *)(v2[15] + 28);
  if ( v4 == 21 )
  {
    v12 = v8 & 0xFFFFFFFC;
    if ( ((v6 ^ v12) & 0xFFFFF000) != 0 )
    {
      v10 = v6 - v12;
      v11 = v10 - 4;
      v13 = -268376064;
LABEL_11:
      if ( (unsigned int)(v10 + 16777212) > 0x1FFFFFE )
      {
        sub_2A6A5C("%B: error: Cortex-A8 erratum stub out of range (input file too large)", v7);
        return 0;
      }
      else
      {
        v14 = a2[1];
        v15 = (~((unsigned __int16)(v11 >> 24) ^ (unsigned __int16)(v11 >> 23)) << 13) & 0x2000
            | (16 * v11) & 0x3FF0000
            | ((unsigned int)v11 >> 1) & 0x7FF
            | v13
            | (v11 >> 24 << 26) & 0x4000000
            | (~((unsigned __int16)(v11 >> 24) ^ (unsigned __int16)(v11 >> 22)) << 11) & 0x800;
        (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(v7 + 4) + 60))(HIWORD(v15), v14 + v5);
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(v7 + 4) + 60))((unsigned __int16)v15, v14 + v5 + 2);
        return 1;
      }
    }
LABEL_9:
    sub_2A6A5C("%B: error: Cortex-A8 erratum stub is allocated in unsafe location", v7);
    return 0;
  }
  v9 = v8 ^ v6;
  v10 = v6 - v8;
  v11 = v10 - 4;
  if ( (v9 & 0xFFFFF000) == 0 )
    goto LABEL_9;
  switch ( v4 )
  {
    case 0x12u:
    case 0x13u:
      v13 = -268398592;
      goto LABEL_11;
    case 0x14u:
      v13 = -268382208;
      goto LABEL_11;
    default:
      sub_2A6BBC("elf32-arm.c", 17544);
      result = 0;
      break;
  }
  return result;
}
