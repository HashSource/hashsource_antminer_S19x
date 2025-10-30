int __fastcall sub_2B40F8(int a1, int a2)
{
  int result; // r0
  char v3; // r1

  if ( a1 || (result = sub_2AAEC8(a2, 108)) != 0 )
  {
    result = sub_2DBE24();
    if ( result )
    {
      v3 = *(_BYTE *)(result + 93);
      *(_DWORD *)(result + 72) = 0;
      *(_BYTE *)(result + 92) = 0;
      *(_DWORD *)(result + 76) = 0;
      *(_BYTE *)(result + 93) = v3 & 0xFE;
      *(_DWORD *)(result + 80) = 0;
      *(_DWORD *)(result + 84) = 0;
      *(_DWORD *)(result + 100) = 0;
      *(_DWORD *)(result + 104) = 0;
      *(_DWORD *)(result + 96) = -1;
      *(_DWORD *)(result + 88) = -1;
    }
  }
  return result;
}
