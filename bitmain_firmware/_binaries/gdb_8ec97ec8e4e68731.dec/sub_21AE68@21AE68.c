int __fastcall sub_21AE68(int result, int a2, int a3)
{
  char v3; // r3
  char v4; // r3

  v3 = *(_BYTE *)(result + 20);
  if ( (v3 & 0x1F) == 0xE )
  {
    if ( a2 )
      v4 = v3 | 0x20;
    else
      v4 = v3 & 0xDF;
    if ( a2 )
      *(_DWORD *)(result + 16) = a2;
    else
      *(_DWORD *)(result + 16) = a3;
    *(_BYTE *)(result + 20) = v4;
  }
  else
  {
    *(_DWORD *)(result + 16) = a2;
  }
  return result;
}
