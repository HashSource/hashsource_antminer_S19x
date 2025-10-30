int sub_45F04()
{
  int v0; // r8
  int i; // r4
  _DWORD *v3; // r7
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r10
  int v8; // r6
  int v9; // r3
  int v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r9
  int v14; // r3
  int v15; // r3
  int v16; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      LOWORD(v3) = (unsigned __int16)&dword_B3048;
      LOWORD(v4) = (unsigned __int16)&dword_B308C;
      if ( dword_B3C70 == 3 )
      {
        HIWORD(v4) = (unsigned int)&dword_B308C >> 16;
        v11 = 0;
        do
        {
          HIWORD(v3) = (unsigned int)&dword_B3048 >> 16;
          *v3 = 8;
          sub_27CC4(0xFFFF);
          usleep(0x186A0u);
          sub_38DD8(i, 0);
          v12 = sub_27024(i);
          v13 = v12;
          if ( *v4 > 3u )
          {
            snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", i, v12, v11);
            sub_3B6AC(3, s, 0, v15);
          }
          ++v11;
          if ( v13 == sub_26A44() )
            break;
          sub_546A0(i);
          sub_3E0F0();
          sub_54728(i);
          sub_3E0F0();
        }
        while ( v11 != 3 );
      }
      else
      {
        HIWORD(v4) = (unsigned int)&dword_B308C >> 16;
        v5 = 0;
        do
        {
          sub_546A0(i);
          sleep(3u);
          sub_21F14((unsigned __int8)i);
          sub_3E0F0();
          if ( byte_B6F08 )
          {
            if ( *v4 > 3u )
            {
              snprintf(s, 0x800u, "pic enabled for chain %d, press anykey to continue...", i);
              sub_3B6AC(3, s, 0, v14);
            }
            IO_getc((_IO_FILE *)stdin);
          }
          sub_54728(i);
          sub_3E0F0();
          sub_546A0(i);
          sub_3E0F0();
          sub_54728(i);
          sub_3E0F0();
          HIWORD(v3) = (unsigned int)&dword_B3048 >> 16;
          *v3 = 8;
          sub_27CC4(0xFFFF);
          usleep(0x186A0u);
          sub_38DD8(i, 0);
          v6 = sub_27024(i);
          v7 = v6;
          if ( *v4 > 3u )
          {
            snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", i, v6, v5);
            sub_3B6AC(3, s, 0, v9);
          }
          ++v5;
          if ( v7 == sub_26A44() )
            break;
          sub_546A0(i);
          sub_3E0F0();
          sub_21F18((unsigned __int8)i);
        }
        while ( v5 != 3 );
      }
      v8 = sub_27024(i);
      if ( sub_26A44() != v8 )
      {
        if ( *v4 > 3u )
        {
          snprintf(s, 0x800u, "Chain %d only find %d asic, will power off hash board %d\n", i, v8, i);
          sub_3B6AC(3, s, 0, v16);
        }
        v0 |= 1 << i;
      }
    }
  }
  if ( v0 )
  {
    sub_481F0(1, v0);
    sub_458A0(0xCu, "asic number is not correct");
    if ( dword_B3C70 )
    {
      if ( dword_B3C70 == 3 )
      {
        v10 = 0;
        if ( sub_26C0C(0) )
          goto LABEL_25;
        while ( ++v10 != 4 )
        {
          if ( sub_26C0C(v10) )
LABEL_25:
            sub_26B64(v10, 0);
        }
      }
    }
    else
    {
      sub_21F18(4);
      sub_26B64(4, 0);
    }
  }
  return v0;
}
