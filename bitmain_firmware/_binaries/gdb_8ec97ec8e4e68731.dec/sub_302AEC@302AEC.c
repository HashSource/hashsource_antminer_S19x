int __fastcall sub_302AEC(int a1, FILE *a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r4
  bool v6; // zf
  int v7; // r2
  int v8; // r2
  int v9; // r3
  int v10; // r12
  int v11; // r0
  int v12; // lr
  int v13; // r6
  int v14; // r4

  v3 = a3[4];
  v4 = a3[3];
  v6 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)(v3 + 28);
  v7 = a3[2];
  if ( !v6 )
    v7 += v3;
  sub_2A7C90(a1, a2, v7);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 2) != 0 )
      v8 = 33;
    else
      v8 = 108;
  }
  else if ( (v4 & 2) != 0 )
  {
    v8 = 103;
  }
  else if ( (v4 & 0x800000) != 0 )
  {
    v8 = 117;
  }
  else
  {
    v8 = 32;
  }
  if ( (v4 & 0x80) != 0 )
    v9 = 119;
  else
    v9 = 32;
  if ( (v4 & 0x800) != 0 )
    v10 = 67;
  else
    v10 = 32;
  if ( (v4 & 0x1000) != 0 )
    v11 = 87;
  else
    v11 = 32;
  if ( (v4 & 0x2000) != 0 )
  {
    v12 = 73;
  }
  else if ( (v4 & 0x400000) != 0 )
  {
    v12 = 105;
  }
  else
  {
    v12 = 32;
  }
  if ( (v4 & 4) != 0 )
  {
    v13 = 100;
  }
  else if ( (v4 & 0x8000) != 0 )
  {
    v13 = 68;
  }
  else
  {
    v13 = 32;
  }
  if ( (v4 & 8) != 0 )
  {
    v14 = 70;
  }
  else if ( (v4 & 0x4000) != 0 )
  {
    v14 = 102;
  }
  else if ( (v4 & 0x10000) != 0 )
  {
    v14 = 79;
  }
  else
  {
    v14 = 32;
  }
  return fprintf(a2, " %c%c%c%c%c%c%c", v8, v9, v10, v11, v12, v13, v14);
}
