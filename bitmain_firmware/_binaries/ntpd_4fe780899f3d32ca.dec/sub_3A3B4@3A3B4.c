int __fastcall sub_3A3B4(__int64 a1, int a2, int a3)
{
  unsigned int v4; // r9
  int v5; // r8
  int v6; // r3
  int v7; // r2
  char v8; // r1
  __int64 v9; // r0
  int v10; // r12
  double v11; // d7
  double v12; // d7
  char v13; // r1
  int v14; // r7
  int v15; // r1
  int v16; // lr
  int v17; // r2

  if ( *(_WORD *)a1 == 2 )
  {
    v4 = bswap32(*(_DWORD *)(a1 + 4));
    if ( HIWORD(v4) << 16 == 2139029504 )
    {
      v5 = HIDWORD(a1);
      LODWORD(a1) = sub_31A44((unsigned __int16 *)a1, 0, 0, -1, 0, 0);
      v6 = a1;
      if ( (_DWORD)a1 )
      {
        v7 = *(_DWORD *)(a1 + 84);
        if ( !v7 )
          sub_6ECC0("ntp_refclock.c", 1052, 2, "peer->procptr != ((void *)0)");
        if ( v5 )
        {
          v8 = *(_BYTE *)(v5 + 2);
          if ( (v8 & 1) != 0 )
            *(_QWORD *)(v7 + 744) = *(_QWORD *)(v5 + 40);
          if ( (v8 & 2) != 0 )
            *(_QWORD *)(v7 + 752) = *(_QWORD *)(v5 + 48);
          if ( (v8 & 4) != 0 )
          {
            LODWORD(a1) = *(unsigned __int8 *)(v5 + 56);
            *(_BYTE *)(v7 + 760) = a1;
            *(_BYTE *)(v6 + 93) = a1;
          }
          if ( (v8 & 8) != 0 )
          {
            LODWORD(a1) = *(_DWORD *)(v5 + 60);
            *(_DWORD *)(v7 + 764) = a1;
            *(_DWORD *)(v6 + 112) = a1;
          }
          if ( (v8 & 0x10) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v7 + 768) & 0xFE | *(_BYTE *)(v5 + 1) & 1;
            *(_BYTE *)(v7 + 768) = a1;
          }
          if ( (v8 & 0x20) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v7 + 768) & 0xFD | *(_BYTE *)(v5 + 1) & 2;
            *(_BYTE *)(v7 + 768) = a1;
          }
          if ( (v8 & 0x40) != 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v7 + 768) & 0xFB | *(_BYTE *)(v5 + 1) & 4;
            *(_BYTE *)(v7 + 768) = a1;
          }
          if ( v8 < 0 )
          {
            LODWORD(a1) = *(_BYTE *)(v5 + 1) & 8;
            *(_BYTE *)(v7 + 768) = *(_BYTE *)(v7 + 768) & 0xF7 | a1;
          }
        }
        if ( a2 )
        {
          LODWORD(v9) = *(unsigned __int8 *)(v7 + 760);
          HIDWORD(v9) = *(_DWORD *)(v7 + 764);
          *(_BYTE *)(a2 + 2) = 12;
          v10 = v7 + 56;
          v11 = *(double *)(v7 + 744);
          *(_QWORD *)(a2 + 56) = v9;
          *(double *)(a2 + 40) = v11;
          if ( v11 != 0.0 )
            *(_BYTE *)(a2 + 2) = 13;
          v12 = *(double *)(v7 + 752);
          *(double *)(a2 + 48) = v12;
          if ( v12 != 0.0 )
            *(_BYTE *)(a2 + 2) |= 2u;
          v13 = *(_BYTE *)(v7 + 768);
          *(_BYTE *)(a2 + 1) = v13;
          if ( (v13 & 1) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x10u;
          if ( (v13 & 2) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x20u;
          if ( (v13 & 4) != 0 )
            *(_BYTE *)(a2 + 2) |= 0x40u;
          if ( (v13 & 8) != 0 )
            *(_BYTE *)(a2 + 2) = ~((unsigned int)~(*(unsigned __int8 *)(a2 + 2) << 25) >> 25);
          v14 = *(_DWORD *)(v7 + 772);
          v15 = current_time;
          v16 = *(_DWORD *)(v7 + 780);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(v7 + 776);
          LODWORD(a1) = *(_DWORD *)(v7 + 784);
          *(_DWORD *)(a2 + 28) = v15 - v14;
          HIDWORD(a1) = *(_DWORD *)(v7 + 788);
          *(_DWORD *)(a2 + 16) = v16;
          *(_QWORD *)(a2 + 20) = a1;
          *(_BYTE *)(a2 + 65) = *(_BYTE *)(v7 + 42);
          *(_BYTE *)(a2 + 64) = *(_BYTE *)(v7 + 41);
          *(_BYTE *)a2 = *(_BYTE *)(v7 + 43);
          HIDWORD(a1) = *(_DWORD *)(v7 + 44);
          v17 = *(_DWORD *)(v7 + 184);
          *(_DWORD *)(a2 + 8) = v10;
          *(_DWORD *)(a2 + 32) = HIDWORD(a1);
          *(_WORD *)(a2 + 4) = v17;
        }
        if ( *((_DWORD *)*(&refclock_conf + BYTE1(v4)) + 3) )
          LODWORD(a1) = (*((int (__fastcall **)(_DWORD, int, int, int))*(&refclock_conf + BYTE1(v4)) + 3))(
                          (unsigned __int8)v4,
                          v5,
                          a2,
                          v6);
      }
    }
  }
  return a1;
}
