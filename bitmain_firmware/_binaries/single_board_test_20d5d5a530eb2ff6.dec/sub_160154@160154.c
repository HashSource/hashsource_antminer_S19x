int __fastcall sub_160154(int a1, int *a2)
{
  int v3; // r3
  _DWORD *v4; // r6
  int v6; // r0
  size_t v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r3

  v3 = a2[22];
  v4 = a2 + 6;
  v6 = v3 + 1;
  *((_BYTE *)a2 + v3 + 24) = 0x80;
  if ( (unsigned int)(v3 + 1) > 0x38 )
  {
    memset((char *)v4 + v6, 0, 63 - v3);
    sub_15FB1C(a2, v4, 1);
    v7 = 56;
    v6 = 0;
  }
  else
  {
    v7 = 55 - v3;
  }
  memset((char *)v4 + v6, 0, v7);
  v8 = a2[4];
  v9 = a2[5];
  *((_BYTE *)a2 + 80) = v8;
  *((_BYTE *)a2 + 84) = v9;
  *((_BYTE *)a2 + 81) = BYTE1(v8);
  *((_BYTE *)a2 + 82) = BYTE2(v8);
  *((_BYTE *)a2 + 83) = HIBYTE(v8);
  *((_BYTE *)a2 + 85) = BYTE1(v9);
  *((_BYTE *)a2 + 87) = HIBYTE(v9);
  *((_BYTE *)a2 + 86) = BYTE2(v9);
  sub_15FB1C(a2, v4, 1);
  a2[22] = 0;
  sub_E07F8(v4, 0x40u);
  v10 = *a2;
  *(_WORD *)a1 = *a2;
  *(_BYTE *)(a1 + 2) = BYTE2(v10);
  *(_BYTE *)(a1 + 3) = HIBYTE(v10);
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 8) = a2[2];
  *(_DWORD *)(a1 + 12) = a2[3];
  return 1;
}
