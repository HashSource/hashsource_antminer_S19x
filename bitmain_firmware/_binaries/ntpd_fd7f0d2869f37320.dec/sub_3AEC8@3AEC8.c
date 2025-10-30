int __fastcall sub_3AEC8(double a1)
{
  unsigned int v1; // r6
  int v2; // r7
  int v3; // r11
  int v4; // r12
  int v5; // r4
  int v6; // r0
  int v7; // lr
  int v8; // r0
  int v9; // lr
  int v10; // r4
  int v11; // r0
  int v12; // r1
  __int64 v13; // r2
  int v14; // r10
  double v15; // d0
  __int64 v16; // r4
  __int64 v17; // r0
  int (__fastcall *v18)(_DWORD, int, int); // r3
  unsigned int v20; // [sp+Ch] [bp-18h]
  int v21; // [sp+14h] [bp-10h]

  v1 = (unsigned __int16)*(_WORD *)LODWORD(a1);
  if ( v1 == 2 )
  {
    v20 = bswap32(*(_DWORD *)(LODWORD(a1) + 4));
    if ( HIWORD(v20) << 16 == 2139029504 )
    {
      v2 = HIDWORD(a1);
      LODWORD(a1) = sub_31F34((unsigned __int16 *)LODWORD(a1), 0, 0, -1, 0, 0);
      v21 = LODWORD(a1);
      if ( LODWORD(a1) )
      {
        v3 = *(_DWORD *)(LODWORD(a1) + 84);
        if ( v3 )
        {
          *(_BYTE *)v2 = 8;
          v4 = *(_DWORD *)(v3 + 188);
          v5 = *(_DWORD *)(v3 + 204);
          *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 192);
          v6 = *(_DWORD *)(v3 + 200);
          *(_WORD *)(v2 + 2) = 63;
          v7 = *(_DWORD *)(v3 + 196);
          *(_DWORD *)(v2 + 20) = v6;
          v8 = *(_DWORD *)(v3 + 212);
          *(_DWORD *)(v2 + 16) = v7;
          *(_DWORD *)(v2 + 24) = v5;
          v9 = *(_DWORD *)(v3 + 208);
          v10 = *(_DWORD *)(v3 + 216);
          *(_DWORD *)(v2 + 32) = v8;
          v11 = *(_DWORD *)(v3 + 224);
          v12 = *(_DWORD *)(v3 + 228);
          *(_DWORD *)(v2 + 8) = v4;
          *(_DWORD *)(v2 + 28) = v9;
          *(_DWORD *)(v2 + 4) = -4;
          *(_DWORD *)(v2 + 36) = v10;
          *(_DWORD *)(v2 + 72) = v11;
          *(_DWORD *)(v2 + 76) = v12;
          LODWORD(v13) = *(unsigned __int8 *)(v2 + 1);
          a1 = *(double *)(v3 + 232);
          if ( (unsigned int)v13 > 2 )
            v3 += 264;
          *(double *)(v2 + 80) = a1;
          if ( (unsigned int)v13 > 2 )
          {
            v14 = v2;
            do
            {
              v15 = *(double *)v3;
              v3 += 8;
              LODWORD(a1) = 32;
              HIDWORD(v16) = 0;
              ++v1;
              v14 += 8;
              if ( v15 >= 0.0 )
              {
                LODWORD(v16) = 0;
              }
              else
              {
                v15 = -v15;
                LODWORD(v16) = 1;
              }
              ldexp(a1, v13);
              v17 = sub_8D558(LODWORD(v15), HIDWORD(v15));
              v13 = -v16;
              *(_QWORD *)&a1 = v17 ^ -v16;
              *(_DWORD *)(v14 + 84) = v16 + LODWORD(a1);
              *(_DWORD *)(v14 + 80) = (unsigned __int64)(v16 + *(_QWORD *)&a1) >> 32;
            }
            while ( *(unsigned __int8 *)(v2 + 1) > v1 );
          }
          v18 = (int (__fastcall *)(_DWORD, int, int))*((_DWORD *)*(&refclock_conf + BYTE1(v20)) + 5);
          if ( v18 )
            LODWORD(a1) = v18((unsigned __int8)v20, v2, v21);
        }
      }
    }
  }
  return LODWORD(a1);
}
