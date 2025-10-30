int __fastcall sub_D6138(int a1, int a2, int a3, unsigned int a4)
{
  int v5; // r2
  unsigned int v8; // r4
  unsigned int v9; // r5
  char v10; // r3
  int v11; // r11
  int v12; // r10
  int v13; // r0
  char v14; // r1
  int v15; // r0
  unsigned int v16; // r3
  unsigned int v17; // r1
  unsigned int v18; // r2
  _BOOL4 v19; // r3
  unsigned int v21; // [sp+18h] [bp-14h]
  unsigned int v22; // [sp+1Ch] [bp-10h]
  char v23[4]; // [sp+20h] [bp-Ch] BYREF
  char v24[8]; // [sp+24h] [bp-8h] BYREF

  if ( a4 >= 0x8000000 )
    v5 = 0x8000000;
  else
    v5 = a4;
  v22 = a4;
  v21 = v5;
  if ( a4 )
  {
    do
    {
      if ( 8 * v21 )
      {
        v8 = 0;
        do
        {
          v9 = v8 >> 3;
          if ( (((int)*(unsigned __int8 *)(a3 + (v8 >> 3)) >> (~(_BYTE)v8 & 7)) & 1) != 0 )
            v10 = 0x80;
          else
            v10 = 0;
          v23[0] = v10;
          v11 = sub_D8934(a1);
          v12 = sub_D8AC0(a1);
          v13 = sub_D8924(a1);
          sub_13C2F0(v23, v24, 1, 1, v11, v12, v13);
          v14 = v8 & 7;
          v15 = 128 >> (v8++ & 7);
          *(_BYTE *)(a2 + v9) = ((v24[0] & 0x80) >> v14) | *(_BYTE *)(a2 + v9) & ~(_BYTE)v15;
        }
        while ( v8 != 8 * v21 );
      }
      a3 += v21;
      a2 += v21;
      v16 = v22 - v21;
      v17 = v21;
      v18 = v22 - v21;
      if ( v21 >= v22 - v21 )
        v17 = v22 - v21;
      v22 -= v21;
      v21 = v17;
      v19 = v16 != 0;
      if ( v17 > v18 )
        v19 = 0;
    }
    while ( v19 );
  }
  return 1;
}
