int __fastcall sub_81764(int result, _BYTE *a2)
{
  *a2 = *(_BYTE *)(result + 3);
  a2[1] = *(_WORD *)(result + 2);
  a2[2] = BYTE1(*(_DWORD *)result);
  a2[3] = *(_DWORD *)result;
  a2[4] = *(_BYTE *)(result + 7);
  a2[5] = *(_WORD *)(result + 6);
  a2[6] = BYTE1(*(_DWORD *)(result + 4));
  a2[7] = *(_DWORD *)(result + 4);
  a2[8] = *(_BYTE *)(result + 11);
  a2[9] = *(_WORD *)(result + 10);
  a2[10] = BYTE1(*(_DWORD *)(result + 8));
  a2[11] = *(_DWORD *)(result + 8);
  a2[12] = *(_BYTE *)(result + 15);
  a2[13] = *(_WORD *)(result + 14);
  a2[14] = BYTE1(*(_DWORD *)(result + 12));
  a2[15] = *(_DWORD *)(result + 12);
  a2[16] = *(_BYTE *)(result + 19);
  a2[17] = *(_WORD *)(result + 18);
  a2[18] = BYTE1(*(_DWORD *)(result + 16));
  a2[19] = *(_DWORD *)(result + 16);
  return result;
}
