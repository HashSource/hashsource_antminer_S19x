int __fastcall sub_57010(int a1)
{
  int v2; // r11
  _DWORD *v3; // r4
  double *v4; // r6
  int v5; // r5
  double v6; // r0
  int i; // r2
  double v8; // d0
  int v9; // r3
  int v11; // [sp+14h] [bp-8h]

  v2 = **(_DWORD **)(a1 + 84);
  v3 = (_DWORD *)v2;
  v4 = (double *)&unk_9B070;
  if ( *(_DWORD *)(v2 + 4328) )
    *(_DWORD *)(v2 + 52) = 1;
  *(_BYTE *)(a1 + 91) = 3;
  *(_DWORD *)(v2 + 4332) = 0;
  v5 = 0;
  *(_DWORD *)(v2 + 4328) = 0;
  *(_DWORD *)(v2 + 2116) = 127;
  *(_DWORD *)(v2 + 2128) = 8;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  LODWORD(v6) = memset((void *)(v2 + 2200), 0, 0x438u);
  for ( i = 127; ; i = *(_DWORD *)(v2 + 2116) )
  {
    v3[550] = i;
    ++v5;
    v3[574] = 256;
    v8 = *v4++;
    floor(v6);
    sub_6D00C(v3 + 575, 5, "WV%.0f", v9, v8);
    v3[600] = 512;
    v6 = COERCE_DOUBLE(sub_6D00C(v3 + 601, 5, "WH%.0f", v8));
    v3 += 54;
    if ( v5 == 5 )
      break;
  }
  *(_DWORD *)(v2 + 3284) = 2;
  sub_56E54(a1);
  *(_DWORD *)(v2 + 3288) = *(_DWORD *)(v2 + 3284);
  return v11;
}
