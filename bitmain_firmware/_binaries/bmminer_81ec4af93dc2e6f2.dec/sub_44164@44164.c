int sub_44164()
{
  int v0; // r7
  int i; // r4
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r9
  int v6; // r6
  int v7; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r8
  int v11; // r4
  int v12; // r3
  int v13; // r3
  int v14; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      LOWORD(v3) = (unsigned __int16)&off_AFC24;
      if ( dword_B0F00 == 3 )
      {
        HIWORD(v3) = (unsigned int)&off_AFC24 >> 16;
        v8 = 0;
        do
        {
          sub_38788(i, 0);
          v9 = sub_26AEC(i);
          v10 = v9;
          if ( *v3 > 3u )
          {
            snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", i, v9, v8);
            sub_3AF5C(3, s, 0, v12);
          }
          ++v8;
          if ( v10 == sub_26540() )
            break;
          sub_5C9F4(i);
          sub_3D9D4();
          sub_5CA54(i);
          sub_3D9D4();
        }
        while ( v8 != 3 );
      }
      else
      {
        HIWORD(v3) = (unsigned int)&off_AFC24 >> 16;
        v4 = 0;
        do
        {
          sub_5C9F4(i);
          sleep(3u);
          sub_21A0C((unsigned __int8)i);
          sub_3D9D4();
          if ( byte_B4190 )
          {
            if ( *v3 > 3u )
            {
              snprintf(s, 0x800u, "pic enabled for chain %d, press anykey to continue...", i);
              sub_3AF5C(3, s, 0, v13);
            }
            IO_getc((_IO_FILE *)stdin);
          }
          sub_5CA54(i);
          sub_3D9D4();
          sub_5C9F4(i);
          sub_3D9D4();
          sub_5CA54(i);
          sub_3D9D4();
          sub_38788(i, 0);
          v5 = sub_26AEC(i);
          if ( *v3 > 3u )
          {
            snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", i, v5, v4);
            sub_3AF5C(3, s, 0, v7);
          }
          ++v4;
          if ( v5 == sub_26540() )
            break;
          sub_5C9F4(i);
          sub_3D9D4();
          sub_21A10((unsigned __int8)i);
        }
        while ( v4 != 3 );
      }
      v6 = sub_26AEC(i);
      if ( sub_26540() != v6 )
      {
        if ( *v3 > 3u )
        {
          snprintf(s, 0x800u, "Chain %d only find %d asic, will power off hash board %d\n", i, v6, i);
          sub_3AF5C(3, s, 0, v14);
        }
        v0 |= 1 << i;
      }
    }
  }
  if ( !v0 )
    return v0;
  sub_46318(1, v0);
  sub_43B4C(0xCu, "asic number is not correct");
  if ( dword_B0F00 )
  {
    if ( dword_B0F00 == 3 )
    {
      v11 = 0;
      if ( sub_266F0(0) )
        goto LABEL_31;
      while ( ++v11 != 4 )
      {
        if ( sub_266F0(v11) )
LABEL_31:
          sub_26650(v11, 0);
      }
    }
    return v0;
  }
  sub_21A10(4);
  sub_26650(4, 0);
  return v0;
}
