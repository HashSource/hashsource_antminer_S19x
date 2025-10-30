int __fastcall sub_2924E0(int a1)
{
  int v1; // r8
  int v2; // r6
  int v3; // r7
  int *v4; // r4
  unsigned int v5; // r2
  int v6; // r1
  int v7; // r3
  int v8; // r2
  int v10; // r12
  int v11; // r0
  int v12; // r4
  int v13; // r12
  int v14; // r1

  v1 = 0;
  v2 = 0;
  v3 = 0;
  while ( 2 )
  {
    v4 = (int *)dword_48B6E0;
    if ( !dword_48B6E0 )
      return (int)v4;
LABEL_3:
    v5 = v4[4];
    v6 = dword_48AAA0;
    dword_48B6E4 = 1;
    v7 = dword_48AAA0 | 0x10000;
    dword_48AAA0 |= 0x10000u;
    if ( v5 <= 1 )
    {
      v2 = v4[1];
      if ( v2 == -1 )
      {
        v1 = v4[2];
        v2 = dword_4900D8;
        if ( v1 == -1 )
          goto LABEL_21;
      }
      else
      {
        v1 = v4[2];
        if ( v2 == -2 )
          v2 = dword_4900DC;
        if ( v1 == -1 )
        {
LABEL_21:
          v1 = dword_4900D8;
          goto LABEL_4;
        }
      }
      if ( v1 == -2 )
        v1 = dword_4900DC;
    }
LABEL_4:
    switch ( v5 )
    {
      case 0u:
        v11 = v4[3];
        dword_4900D8 = v2;
        sub_294F3C(v11);
        sub_297758(*(_DWORD *)(dword_48B6E0 + 12));
        v7 = dword_48AAA0;
        v4 = (int *)dword_48B6E0;
        goto LABEL_9;
      case 1u:
        sub_294F5C(v2, v1);
        dword_4900D8 = v2;
        v7 = dword_48AAA0;
        v4 = (int *)dword_48B6E0;
        goto LABEL_9;
      case 2u:
        if ( v3 )
        {
          --v3;
LABEL_9:
          v10 = *v4;
          dword_48AAA0 = v7 & 0xFFFEFFFF;
          dword_48B6E0 = v10;
          dword_48B6E4 = 0;
          sub_297DAC(-1, v4, v10);
          a1 = sub_297758(v4);
          if ( !v3 )
            return 1;
          continue;
        }
        sub_2945C8(a1, v6);
        v12 = dword_48B6E0;
        dword_48B6E4 = 0;
        v13 = *(_DWORD *)dword_48B6E0;
        v14 = dword_48B6E0;
        dword_48AAA0 &= ~0x10000u;
        dword_48B6E0 = v13;
        sub_297DAC(-1, v14, v13);
        sub_297758(v12);
        return 1;
      case 3u:
        v8 = *v4;
        dword_48AAA0 = v6 & 0xFFFEFFFF;
        dword_48B6E0 = v8;
        dword_48B6E4 = 0;
        ++v3;
        sub_297DAC(-1, v4, v8);
        a1 = sub_297758(v4);
        v4 = (int *)dword_48B6E0;
        if ( !dword_48B6E0 )
          return (int)v4;
        goto LABEL_3;
      default:
        goto LABEL_9;
    }
  }
}
