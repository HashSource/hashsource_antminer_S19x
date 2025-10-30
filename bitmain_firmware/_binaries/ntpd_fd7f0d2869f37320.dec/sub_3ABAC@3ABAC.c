int __fastcall sub_3ABAC(__int64 a1, int a2)
{
  unsigned int v3; // r9
  int v4; // r8
  int v5; // r3
  int v6; // r2
  char v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // lr
  double v11; // d16
  double v12; // d16
  char v13; // r1
  int v14; // r7
  int v15; // r1
  int v16; // r2
  int (__fastcall *v17)(_DWORD, int, int); // r12

  if ( *(_WORD *)a1 == 2 )
  {
    v3 = bswap32(*(_DWORD *)(a1 + 4));
    if ( HIWORD(v3) << 16 == 2139029504 )
    {
      v4 = HIDWORD(a1);
      LODWORD(a1) = sub_31F34((unsigned __int16 *)a1, 0, 0, -1, 0, 0);
      v5 = a1;
      if ( (_DWORD)a1 )
      {
        v6 = *(_DWORD *)(a1 + 84);
        if ( !v6 )
          sub_6FC54("ntp_refclock.c", 1052, 2, "peer->procptr != ((void *)0)");
        if ( v4 )
        {
          BYTE4(a1) = *(_BYTE *)(v4 + 2);
          if ( (a1 & 0x100000000LL) != 0 )
          {
            a1 = *(_QWORD *)(v4 + 40);
            *(_QWORD *)(v6 + 744) = a1;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x200000000LL) != 0 )
          {
            a1 = *(_QWORD *)(v4 + 48);
            *(_QWORD *)(v6 + 752) = a1;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x400000000LL) != 0 )
          {
            v7 = *(_BYTE *)(v4 + 56);
            *(_BYTE *)(v6 + 760) = v7;
            *(_BYTE *)(v5 + 93) = v7;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x800000000LL) != 0 )
          {
            HIDWORD(a1) = *(_DWORD *)(v4 + 60);
            *(_DWORD *)(v6 + 764) = HIDWORD(a1);
            *(_DWORD *)(v5 + 112) = HIDWORD(a1);
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x1000000000LL) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v6 + 768) & 0xFE;
            *(_BYTE *)(v6 + 768) = a1;
            *(_BYTE *)(v6 + 768) = a1 | *(_BYTE *)(v4 + 1) & 1;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x2000000000LL) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v6 + 768) & 0xFD;
            *(_BYTE *)(v6 + 768) = a1;
            *(_BYTE *)(v6 + 768) = a1 | *(_BYTE *)(v4 + 1) & 2;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x4000000000LL) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v6 + 768) & 0xFB;
            *(_BYTE *)(v6 + 768) = a1;
            *(_BYTE *)(v6 + 768) = a1 | *(_BYTE *)(v4 + 1) & 4;
            BYTE4(a1) = *(_BYTE *)(v4 + 2);
          }
          if ( (a1 & 0x8000000000LL) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v6 + 768) & 0xF7;
            *(_BYTE *)(v6 + 768) = a1;
            *(_BYTE *)(v6 + 768) = a1 | *(_BYTE *)(v4 + 1) & 8;
          }
        }
        if ( a2 )
        {
          v8 = *(unsigned __int8 *)(v6 + 760);
          v9 = *(_DWORD *)(v6 + 764);
          *(_BYTE *)(a2 + 2) = 12;
          v10 = v6 + 56;
          v11 = *(double *)(v6 + 744);
          *(_DWORD *)(a2 + 60) = v9;
          *(_DWORD *)(a2 + 56) = v8;
          *(double *)(a2 + 40) = v11;
          if ( v11 != 0.0 )
            *(_BYTE *)(a2 + 2) = 13;
          v12 = *(double *)(v6 + 752);
          *(double *)(a2 + 48) = v12;
          if ( v12 != 0.0 )
            *(_BYTE *)(a2 + 2) |= 2u;
          v13 = *(_BYTE *)(v6 + 768);
          *(_BYTE *)(a2 + 1) = v13;
          if ( (v13 & 1) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x10u;
          if ( (v13 & 2) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x20u;
          if ( (v13 & 4) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x40u;
          if ( (v13 & 8) != 0 )
            *(_BYTE *)(a2 + 2) = ~((unsigned int)~(*(unsigned __int8 *)(a2 + 2) << 25) >> 25);
          v14 = *(_DWORD *)(v6 + 780);
          v15 = current_time - *(_DWORD *)(v6 + 772);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 776);
          LODWORD(a1) = *(_DWORD *)(v6 + 784);
          *(_DWORD *)(a2 + 28) = v15;
          HIDWORD(a1) = *(_DWORD *)(v6 + 788);
          *(_DWORD *)(a2 + 16) = v14;
          *(_QWORD *)(a2 + 20) = a1;
          *(_BYTE *)(a2 + 65) = *(_BYTE *)(v6 + 42);
          *(_BYTE *)(a2 + 64) = *(_BYTE *)(v6 + 41);
          *(_BYTE *)a2 = *(_BYTE *)(v6 + 43);
          HIDWORD(a1) = *(_DWORD *)(v6 + 44);
          v16 = *(_DWORD *)(v6 + 184);
          *(_DWORD *)(a2 + 8) = v10;
          *(_DWORD *)(a2 + 32) = HIDWORD(a1);
          *(_WORD *)(a2 + 4) = v16;
        }
        v17 = (int (__fastcall *)(_DWORD, int, int))*((_DWORD *)*(&refclock_conf + BYTE1(v3)) + 3);
        if ( v17 )
          LODWORD(a1) = v17((unsigned __int8)v3, v4, a2);
      }
    }
  }
  return a1;
}
