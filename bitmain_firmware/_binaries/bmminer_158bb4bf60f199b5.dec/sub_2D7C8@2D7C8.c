int __fastcall sub_2D7C8(int result, char a2, char a3, int a4)
{
  int v4; // r4
  int v5; // r12

  v4 = result;
  if ( result )
  {
    *(_DWORD *)result = 0;
    *(_BYTE *)result = 65;
    *(_BYTE *)(result + 1) = 9;
    v5 = dword_A0D68;
    *(_DWORD *)(result + 4) = 0;
    *(_BYTE *)(result + 8) = 0;
    LOBYTE(v5) = *(_BYTE *)(v5 + 12954);
    *(_BYTE *)(result + 7) = a4;
    *(_BYTE *)(result + 3) = a3;
    *(_BYTE *)(result + 4) = HIBYTE(a4);
    *(_BYTE *)(result + 5) = BYTE2(a4);
    *(_BYTE *)(result + 6) = BYTE1(a4);
    *(_BYTE *)(result + 2) = v5 * a2;
    result = sub_51554(result, 64);
    *(_BYTE *)(v4 + 8) = *(_BYTE *)(v4 + 8) & 0xE0 | result & 0x1F;
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    return sub_2BC3C();
  }
  return result;
}
