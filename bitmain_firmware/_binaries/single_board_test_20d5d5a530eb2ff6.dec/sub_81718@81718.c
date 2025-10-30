int __fastcall sub_81718(int result, int a2)
{
  *(_WORD *)a2 = *(_DWORD *)result;
  *(_BYTE *)(a2 + 2) = *(_WORD *)(result + 2);
  *(_BYTE *)(a2 + 3) = *(_BYTE *)(result + 3);
  *(_WORD *)(a2 + 4) = *(_DWORD *)(result + 4);
  *(_BYTE *)(a2 + 6) = *(_WORD *)(result + 6);
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(result + 7);
  *(_WORD *)(a2 + 8) = *(_DWORD *)(result + 8);
  *(_BYTE *)(a2 + 10) = *(_WORD *)(result + 10);
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(result + 11);
  *(_WORD *)(a2 + 12) = *(_DWORD *)(result + 12);
  *(_BYTE *)(a2 + 14) = *(_WORD *)(result + 14);
  *(_BYTE *)(a2 + 15) = *(_BYTE *)(result + 15);
  return result;
}
