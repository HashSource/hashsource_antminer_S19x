int __fastcall sub_81B90(_DWORD *a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r4
  unsigned __int16 *v6; // r6
  int v7; // r5
  int v8; // r2
  unsigned int v9; // r2
  _BOOL4 v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r3
  _BOOL4 v16; // r3
  char *v17; // r9
  char v18; // r3
  int v21; // [sp+14h] [bp-78h]
  _BYTE v23[80]; // [sp+34h] [bp-58h] BYREF

  v4 = 0;
  v21 = 0;
  v5 = a1[17];
  v6 = (unsigned __int16 *)(v5 + 2);
  v7 = a1[25];
  do
  {
    v8 = *(_DWORD *)(v5 + 16);
    if ( (v8 & 0x6080000) != 0 )
    {
      if ( v8 == 524544 )
      {
        v16 = *(_DWORD *)(v5 + 52) != 0;
        if ( a2 )
          v16 = 0;
        if ( v16 )
        {
          v17 = *(char **)(v5 + 44);
          if ( !v17 )
            v17 = off_B955C;
          sub_7F5D4(a1 + 3, v6, (const char **)&dword_108318, (const char **)&dword_10831C);
          fprintf((FILE *)option_usage_fp, off_B9558, *(_DWORD *)(v5 + 52), v17);
        }
      }
    }
    else if ( (v8 & 0x200000) != 0 )
    {
      if ( !a2 )
      {
        ++v21;
        fprintf((FILE *)option_usage_fp, (const char *)dword_108314, *(_DWORD *)(v5 + 44), a3);
      }
    }
    else if ( (a1[3] & 0x40000) == 0
           || (v9 = *(unsigned __int8 *)(v5 + 2), v9 <= 0x7F) && (dword_A0784[v9] & 0x4000) != 0 )
    {
      if ( v21 > 0 && a2 == 0 )
      {
        if ( a1[26] == v4 )
        {
          if ( (*(_DWORD *)(v5 - 48) & 0x200000) == 0 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_108314, off_B954C, a3);
        }
        else
        {
          v11 = v7 == 1;
          if ( (a1[3] & 0x40000) == 0 )
            v11 = 0;
          if ( v11 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_108314, off_B9600, a3);
        }
      }
      sub_7F5D4(a1 + 3, v6, (const char **)&dword_108318, (const char **)&dword_10831C);
      v12 = *(_DWORD *)(v5 + 16);
      if ( (v12 & 0x10000) != 0 )
      {
        v13 = dword_10830C;
      }
      else
      {
        switch ( (unsigned __int16)v12 >> 12 )
        {
          case 0:
            v13 = dword_108310;
            break;
          case 1:
            v13 = dword_1082EC;
            break;
          case 2:
            v13 = dword_1082FC;
            break;
          case 3:
            v13 = dword_108304;
            break;
          case 4:
            v13 = dword_108300;
            break;
          case 5:
            v13 = dword_1082F4;
            break;
          case 6:
            v13 = dword_108308;
            break;
          case 7:
            v13 = dword_1082F8;
            break;
          case 8:
            v13 = dword_108324;
            break;
          default:
            fprintf(stderr, off_B94DC, a1[7], *(_DWORD *)(v5 + 52));
            sub_7E2B8(70);
        }
      }
      if ( *(_WORD *)(v5 + 10) )
        v14 = dword_1082F0;
      else
        v14 = dword_10830C;
      sub_6D00C((int)v23, 0x50u, (char *)dword_108320, v13, *(_DWORD *)(v5 + 52), v14);
      fprintf((FILE *)option_usage_fp, byte_1083F4, v23, *(_DWORD *)(v5 + 44));
      v15 = (unsigned __int16)*(_DWORD *)(v5 + 16) >> 12;
      if ( v15 == 2 || v15 == 4 )
      {
        if ( *(_DWORD *)(v5 + 40) )
          v18 = 1;
        else
          v18 = byte_1083F0;
        byte_1083F0 = v18;
      }
      if ( !a2 )
        sub_8128C(a1, (unsigned __int16 *)v5, a3);
    }
    --v7;
    v5 += 64;
    ++v4;
    v6 += 32;
  }
  while ( v7 > 0 );
  return fputc(10, (FILE *)option_usage_fp);
}
