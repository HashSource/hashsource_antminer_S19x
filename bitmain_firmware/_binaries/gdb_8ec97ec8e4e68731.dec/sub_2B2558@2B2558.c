int __fastcall sub_2B2558(int a1)
{
  _DWORD *v1; // r8
  unsigned int v2; // r3
  unsigned int v3; // r1
  char v4; // r12
  char v5; // r10
  char v6; // r9
  int v7; // lr
  char v8; // r0
  int v9; // r12
  unsigned int v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r11
  int v13; // r4
  unsigned int v14; // r9
  _BYTE *v15; // r0
  _BYTE *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // t1
  char v19; // r1
  unsigned int v22; // [sp+Ch] [bp-40h]
  _BYTE v23[3]; // [sp+14h] [bp-38h] BYREF
  _BYTE v24[53]; // [sp+17h] [bp-35h] BYREF

  v1 = **(_DWORD ***)(a1 + 160);
  if ( !v1 )
    return 1;
  while ( 1 )
  {
    v2 = v1[2];
    v3 = v1[1];
    v4 = a0123456789abcd_2[HIWORD(v2) & 0xF];
    v5 = a0123456789abcd_2[(v2 >> 20) & 0xF];
    v23[2] = a0123456789abcd_2[HIBYTE(v2) & 0xF];
    v6 = a0123456789abcd_2[(v2 >> 8) & 0xF];
    v7 = (unsigned __int16)v2 >> 12;
    v8 = a0123456789abcd_2[v2 & 0xF];
    v24[1] = v4;
    v9 = (unsigned __int8)v2 >> 4;
    LOBYTE(v2) = a0123456789abcd_2[v2 >> 28];
    LOBYTE(v7) = a0123456789abcd_2[v7];
    LOBYTE(v9) = a0123456789abcd_2[v9];
    v22 = v3;
    v24[5] = v8;
    v23[1] = v2;
    v23[0] = 64;
    v24[0] = v5;
    v24[3] = v6;
    v24[2] = v7;
    v24[4] = v9;
    v24[6] = 13;
    v24[7] = 10;
    sub_2A8884((int)v23, 11, a1);
    v10 = v1[3];
    if ( v10 )
      break;
LABEL_13:
    v1 = (_DWORD *)*v1;
    if ( !v1 )
      return 1;
  }
  v11 = v22;
  v12 = 0;
  while ( 1 )
  {
    v13 = v10 - v12;
    if ( v10 - v12 >= 0x10 )
      v13 = 16;
    v14 = v11 + v13;
    if ( v11 + v13 > v11 )
    {
      v16 = v24;
      v17 = v11 - 1;
      do
      {
        v18 = *(unsigned __int8 *)++v17;
        v16 += 3;
        *(v16 - 4) = 32;
        v19 = a0123456789abcd_2[v18 & 0xF];
        *(v16 - 6) = a0123456789abcd_2[v18 >> 4];
        *(v16 - 5) = v19;
      }
      while ( v14 - 1 != v17 );
      v15 = &v23[3 * v13];
    }
    else
    {
      v15 = v23;
    }
    v15[1] = 10;
    *v15 = 13;
    if ( v15 + 2 - v23 != sub_2A8884((int)v23, v15 + 2 - v23, a1) )
      return 0;
    v10 = v1[3];
    v12 += v13;
    v11 = v14;
    if ( v10 <= v12 )
      goto LABEL_13;
  }
}
