int __fastcall sub_55870(int a1)
{
  int v1; // r5
  int v3; // r4
  double v4; // d8
  int v5; // r3
  double *v6; // r6
  int v7; // r0
  double v8; // r0
  double v9; // d0
  int result; // r0

  v1 = **(_DWORD **)(a1 + 84);
  v3 = v1 + 2300;
  v4 = 2.0;
  if ( *(_DWORD *)(v1 + 4328) )
    *(_DWORD *)(v1 + 52) = 1;
  *(_BYTE *)(a1 + 91) = 3;
  *(_DWORD *)(v1 + 4332) = 0;
  *(_DWORD *)(v1 + 4328) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 2116) = 127;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 2128) = 8;
  memset((void *)(v1 + 2200), 0, 0x438u);
  v5 = 127;
  v6 = (double *)&unk_99AA8;
  while ( 1 )
  {
    *(_DWORD *)(v3 - 100) = v5;
    *(_DWORD *)(v3 - 4) = 256;
    sub_6C054(v3, 5, "WV%.0f", v4);
    v7 = v3 + 104;
    *(_DWORD *)(v3 + 100) = 512;
    v3 += 216;
    LODWORD(v8) = sub_6C054(v7, 5, "WH%.0f", v4);
    if ( v3 == v1 + 3380 )
      break;
    v9 = *v6++;
    floor(v8);
    v5 = *(_DWORD *)(v1 + 2116);
    v4 = v9;
  }
  *(_DWORD *)(v1 + 3284) = 2;
  result = sub_556C0(a1);
  *(_DWORD *)(v1 + 3288) = *(_DWORD *)(v1 + 3284);
  return result;
}
