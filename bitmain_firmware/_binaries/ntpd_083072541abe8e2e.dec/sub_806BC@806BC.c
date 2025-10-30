int __fastcall sub_806BC(_DWORD *a1, int a2, int a3)
{
  int v4; // r6
  int v6; // r5
  int v7; // r4
  __int16 v8; // r2
  _BOOL4 v9; // r2
  _BOOL4 v10; // r2
  int v11; // r3
  int v12; // r3
  int *v13; // r0
  int v14; // r3
  int v15; // r3
  _BOOL4 v16; // r3
  char *v17; // r10
  char v18; // r2
  int v20; // [sp+Ch] [bp-78h]
  _BYTE v22[80]; // [sp+2Ch] [bp-58h] BYREF

  v4 = 0;
  v20 = 0;
  v6 = a1[25];
  v7 = a1[17];
  do
  {
    v15 = *(_DWORD *)(v7 + 16);
    if ( (v15 & 0x6080000) != 0 )
    {
      if ( v15 == 524544 )
      {
        v16 = a2 == 0;
        if ( !*(_DWORD *)(v7 + 52) )
          v16 = 0;
        if ( v16 )
        {
          v17 = *(char **)(v7 + 44);
          if ( !v17 )
            v17 = off_B8558[0];
          sub_7E1AC(a1 + 3, (unsigned __int16 *)(v7 + 2), (const char **)&dword_1072F4, (const char **)&dword_1072F8);
          fprintf((FILE *)option_usage_fp, off_B8554[0], *(_DWORD *)(v7 + 52), v17);
        }
      }
    }
    else if ( (v15 & 0x200000) != 0 )
    {
      if ( !a2 )
      {
        ++v20;
        fprintf((FILE *)option_usage_fp, (const char *)dword_1072F0, *(_DWORD *)(v7 + 44), a3);
      }
    }
    else if ( (a1[3] & 0x40000) == 0
           || (v8 = *(_WORD *)(v7 + 2), (v8 & 0x80) == 0) && (dword_9F184[(unsigned __int8)v8] & 0x4000) != 0 )
    {
      v9 = v20 > 0;
      if ( a2 )
        v9 = 0;
      if ( v9 )
      {
        if ( a1[26] == v4 )
        {
          if ( (*(_DWORD *)(v7 - 48) & 0x200000) == 0 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_1072F0, off_B8548[0], a3);
        }
        else
        {
          v10 = v6 == 1;
          if ( (a1[3] & 0x40000) == 0 )
            v10 = 0;
          if ( v10 )
            fprintf((FILE *)option_usage_fp, (const char *)dword_1072F0, off_B85FC[0], a3);
        }
      }
      sub_7E1AC(a1 + 3, (unsigned __int16 *)(v7 + 2), (const char **)&dword_1072F4, (const char **)&dword_1072F8);
      v11 = *(_DWORD *)(v7 + 16);
      if ( (v11 & 0x10000) != 0 )
      {
        v12 = dword_1072E8;
      }
      else
      {
        switch ( (unsigned __int16)v11 >> 12 )
        {
          case 0:
            v12 = dword_1072EC;
            break;
          case 1:
            v12 = dword_1072C8;
            break;
          case 2:
            v12 = dword_1072D8;
            break;
          case 3:
            v12 = dword_1072E0;
            break;
          case 4:
            v12 = dword_1072DC;
            break;
          case 5:
            v12 = dword_1072D0;
            break;
          case 6:
            v12 = dword_1072E4;
            break;
          case 7:
            v12 = dword_1072D4;
            break;
          case 8:
            v12 = dword_107300;
            break;
          default:
            fprintf(stderr, off_B84D8[0], a1[7], *(_DWORD *)(v7 + 52));
            sub_7CE5C(70);
        }
      }
      if ( *(_WORD *)(v7 + 10) )
        v13 = (int *)dword_1072CC;
      else
        v13 = dword_1072C0;
      if ( !*(_WORD *)(v7 + 10) )
        v13 = (int *)v13[10];
      sub_6C054((int)v22, 0x50u, (char *)dword_1072FC, v12, *(_DWORD *)(v7 + 52), v13);
      fprintf((FILE *)option_usage_fp, byte_1073D0, v22, *(_DWORD *)(v7 + 44));
      v14 = (unsigned __int16)*(_DWORD *)(v7 + 16) >> 12;
      if ( v14 != 2 && v14 != 4 )
      {
        if ( a2 )
          goto LABEL_24;
LABEL_39:
        sub_7FDCC(a1, (unsigned __int16 *)v7, a3);
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v7 + 40) )
        v18 = 1;
      else
        v18 = byte_1073CC;
      byte_1073CC = v18;
      if ( !a2 )
        goto LABEL_39;
    }
LABEL_24:
    --v6;
    v7 += 64;
    ++v4;
  }
  while ( v6 > 0 );
  return fputc(10, (FILE *)option_usage_fp);
}
