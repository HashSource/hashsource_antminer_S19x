bool __fastcall sub_2AEE00(int a1)
{
  unsigned int v2; // r11
  int v3; // r10
  unsigned int v4; // r6
  unsigned int v5; // r5
  int v6; // r7
  unsigned int v7; // r8
  unsigned int v8; // r2
  int v9; // r4
  _BOOL4 result; // r0
  unsigned int v11; // r3
  char v12; // r0
  unsigned int v13; // r12
  char v14; // r1
  int v15; // r3
  unsigned int v16; // lr
  _DWORD *v17; // [sp+10h] [bp-14h]
  __int16 v18; // [sp+1Ch] [bp-8h] BYREF
  char v19; // [sp+1Eh] [bp-6h]
  char v20; // [sp+1Fh] [bp-5h]

  v17 = **(_DWORD ***)(a1 + 160);
  if ( v17 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = v17[3];
      v5 = v17[2];
      v6 = v17[1];
      if ( v4 )
      {
        v7 = v3 + v2;
        do
        {
          if ( v4 >= 0x10 )
            v9 = 16;
          else
            v9 = v4;
          if ( v7 + 0xFFFF < v5 )
          {
            if ( v5 <= (unsigned int)&loc_FFFFC + 3 )
            {
              if ( v2 )
                sub_2A6BBC("ihex.c", 800);
              v3 = v5 & 0xF0000;
              v18 = (v5 & 0xF0000) >> 12;
              if ( !sub_2AECD4(a1, 2, 0, 2, (int)&v18) )
                return 0;
            }
            else
            {
              if ( v3 )
              {
                v18 = 0;
                if ( !sub_2AECD4(a1, 2, 0, 2, (int)&v18) )
                  return 0;
              }
              v2 = v5 & 0xFFFF0000;
              if ( (v5 & 0xFFFF0000) + 0xFFFF < v5 )
              {
                sub_2A6A5C("%B: address %#Lx out of range for Intel Hex file", a1, v5);
                ((void (__fastcall *)(int))loc_2A6C48)(17);
                return 0;
              }
              LOBYTE(v18) = (v5 & 0xFFFF0000) >> 24;
              HIBYTE(v18) = (v5 & 0xFFFF0000) >> 16;
              if ( !sub_2AECD4(a1, 2, 0, 4, (int)&v18) )
                return 0;
              v3 = 0;
            }
            v7 = v3 + v2;
          }
          v8 = v5 - v7;
          if ( v9 + v5 - v7 >= 0x10000 )
            v9 = 0x10000 - v8;
          result = sub_2AECD4(a1, v9, v8, 0, v6);
          if ( !result )
            return result;
          v4 -= v9;
          v5 += v9;
          v6 += v9;
        }
        while ( v4 );
      }
      v17 = (_DWORD *)*v17;
    }
    while ( v17 );
  }
  v11 = *(_DWORD *)(a1 + 116);
  if ( !v11 )
    return sub_2AECD4(a1, 0, 0, 1, 0);
  v12 = *(_DWORD *)(a1 + 116);
  if ( v11 >= 0x100000 )
  {
    v16 = HIBYTE(v11);
    v19 = BYTE1(*(_DWORD *)(a1 + 116));
    v13 = HIWORD(v11);
    v15 = 5;
    v20 = v12;
    LOBYTE(v18) = v16;
  }
  else
  {
    LOBYTE(v13) = 0;
    v19 = BYTE1(*(_DWORD *)(a1 + 116));
    v14 = (v11 >> 12) & 0xF0;
    v15 = 3;
    LOBYTE(v18) = v14;
    v20 = v12;
  }
  HIBYTE(v18) = v13;
  return sub_2AECD4(a1, 4, 0, v15, (int)&v18) && sub_2AECD4(a1, 0, 0, 1, 0);
}
