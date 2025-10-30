_DWORD *__fastcall sub_8128C(_DWORD *result, unsigned __int16 *a2, int a3)
{
  _DWORD *v4; // r4
  int *v5; // r11
  int v6; // r3
  int v7; // t1
  int *v8; // r11
  int v9; // r3
  int v10; // t1
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r2
  void (__fastcall *v16)(unsigned int, int); // r5
  bool v17; // zf
  int v19; // r11
  int v20; // r8
  int v21; // r3
  size_t v22; // r11
  int v23; // r9
  unsigned int v24; // r3
  size_t v25; // r0
  int v26; // r9
  int v27; // r8
  unsigned int v28; // r3
  int v29; // r3
  unsigned __int8 *v30; // r2
  int v31; // r0
  int v32; // r3
  int v33; // t1
  int v34; // r3
  int v35; // r3
  bool v36; // zf
  int *v37; // r3
  unsigned __int8 *v38; // [sp+2Ch] [bp-68h]
  char v39[12]; // [sp+30h] [bp-64h] BYREF
  _BYTE v40[80]; // [sp+3Ch] [bp-58h] BYREF

  v4 = result;
  if ( (result[3] & 0x40000) == 0 || a2[3] != 87 )
  {
    if ( !*((_DWORD *)a2 + 8) && !*((_DWORD *)a2 + 9) )
      goto LABEL_14;
    result = (_DWORD *)fputs(&ao_strs_strtable[dword_1083EC + 203], (FILE *)option_usage_fp);
    v5 = (int *)*((_DWORD *)a2 + 8);
    if ( v5 )
    {
      if ( v5[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B95E4, *(_DWORD *)(v4[17] + (*v5 << 6) + 52));
      }
      else
      {
        fputs(off_B95E8, (FILE *)option_usage_fp);
        v6 = *v5;
        do
        {
          result = (_DWORD *)fprintf(
                               (FILE *)option_usage_fp,
                               &ao_strs_strtable[dword_1083EC + 229],
                               *(_DWORD *)(v4[17] + (v6 << 6) + 52));
          v7 = v5[1];
          ++v5;
          v6 = v7;
        }
        while ( v7 != 0x8000 );
      }
      if ( !*((_DWORD *)a2 + 9) )
        goto LABEL_14;
      result = (_DWORD *)fputs(&ao_strs_strtable[dword_1083EC + 217], (FILE *)option_usage_fp);
    }
    v8 = (int *)*((_DWORD *)a2 + 9);
    if ( v8 )
    {
      if ( v8[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B95BC, *(_DWORD *)(v4[17] + (*v8 << 6) + 52));
      }
      else
      {
        fputs(off_B95B8, (FILE *)option_usage_fp);
        v9 = *v8;
        do
        {
          result = (_DWORD *)fprintf(
                               (FILE *)option_usage_fp,
                               &ao_strs_strtable[dword_1083EC + 229],
                               *(_DWORD *)(v4[17] + (v9 << 6) + 52));
          v10 = v8[1];
          ++v8;
          v9 = v10;
        }
        while ( v10 != 0x8000 );
      }
    }
LABEL_14:
    if ( *((_DWORD *)a2 + 14) )
      result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B9554[dword_1083EC]);
    v11 = *((_DWORD *)a2 + 4);
    v12 = (unsigned __int16)v11 >> 12;
    if ( v12 == 5 )
    {
      v16 = (void (__fastcall *)(unsigned int, int))*((_DWORD *)a2 + 10);
      v17 = v16 == 0;
      if ( v16 )
        v17 = v16 == optionNumericVal;
      if ( !v17 )
      {
        result = (_DWORD *)((int (__fastcall *)(int, unsigned __int16 *))v16)(1, a2);
        v11 = *((_DWORD *)a2 + 4);
      }
    }
    else if ( v12 == 7 )
    {
      result = (_DWORD *)(*((int (__fastcall **)(int, unsigned __int16 *))a2 + 10))(1, a2);
      if ( (*((_DWORD *)a2 + 4) & 0x800) == 0 )
        goto LABEL_19;
      goto LABEL_36;
    }
    if ( (v11 & 0x800) == 0 )
    {
LABEL_19:
      v13 = a2[4];
      if ( v13 != 0x8000 && a2[2] != v13 )
        return (_DWORD *)fprintf(
                           (FILE *)option_usage_fp,
                           &off_B9548[dword_1083EC],
                           *(_DWORD *)(v4[17] + (v13 << 6) + 52));
      v14 = *((_DWORD *)a2 + 4);
      if ( (v14 & 0x100) != 0 && (v4[13] || v4[8]) && *a2 < (int)v4[26] )
      {
        result = (_DWORD *)fputs(&off_B9590[dword_1083EC], (FILE *)option_usage_fp);
        v14 = *((_DWORD *)a2 + 4);
      }
      if ( (unsigned __int16)v14 >> 12 == 4 )
      {
        result = (_DWORD *)fputs(&off_B9580[dword_1083EC], (FILE *)option_usage_fp);
      }
      else if ( a2[5] > 1u )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B9584[dword_1083EC]);
      }
      else
      {
        v15 = a2[6];
        if ( v15 != 1 )
        {
          if ( a2[6] )
          {
            if ( v15 == 0xFFFF )
              result = (_DWORD *)fputs(&off_B958C[dword_1083EC], (FILE *)option_usage_fp);
            else
              result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B95F8[dword_1083EC]);
          }
          else
          {
            result = (_DWORD *)fputs(&off_B95B0[dword_1083EC], (FILE *)option_usage_fp);
          }
        }
      }
      if ( (v4[3] & 3) == 0 && *((unsigned __int16 *)v4 + 49) == *a2 )
        return (_DWORD *)fputs(&off_B9550[dword_1083EC], (FILE *)option_usage_fp);
      return result;
    }
LABEL_36:
    result = (_DWORD *)fputs(&off_B9560[dword_1083EC], (FILE *)option_usage_fp);
    goto LABEL_19;
  }
  v19 = result[26];
  v20 = result[17];
  fprintf((FILE *)option_usage_fp, &ao_strs_strtable[dword_1083EC + 229], off_B9604);
  v21 = v19;
  v22 = 0;
  v23 = v21;
  do
  {
    if ( (*(_DWORD *)(v20 + 16) & 0x6280000) == 0 )
    {
      v24 = *(unsigned __int8 *)(v20 + 2);
      if ( v24 > 0x7F || (dword_A0784[v24] & 0x4000) == 0 )
      {
        v25 = strlen(*(const char **)(v20 + 52));
        if ( v22 < v25 )
          v22 = v25;
      }
    }
    --v23;
    v20 += 64;
  }
  while ( v23 > 0 );
  result = (_DWORD *)sub_6D00C((int)v39, 0xCu, "%%-%us %%s\n", v22 + 4);
  v26 = v4[26];
  v27 = v4[17];
  if ( dword_1083EC )
    --dword_1083EC;
  do
  {
    if ( (*(_DWORD *)(v27 + 16) & 0x6280000) == 0 )
    {
      v28 = *(unsigned __int8 *)(v27 + 2);
      if ( v28 > 0x7F || (dword_A0784[v28] & 0x4000) == 0 )
      {
        sub_7F5D4(v4 + 3, (unsigned __int16 *)(v27 + 2), (const char **)&dword_108318, (const char **)&dword_10831C);
        v29 = *(_DWORD *)(v27 + 16);
        if ( (v29 & 0x10000) != 0 )
        {
          v30 = (unsigned __int8 *)dword_10830C;
        }
        else
        {
          switch ( (unsigned __int16)v29 >> 12 )
          {
            case 0:
              v30 = (unsigned __int8 *)dword_108310;
              break;
            case 1:
              v30 = (unsigned __int8 *)dword_1082EC;
              break;
            case 2:
              v30 = (unsigned __int8 *)dword_1082FC;
              break;
            case 3:
              v30 = (unsigned __int8 *)dword_108304;
              break;
            case 4:
              v30 = (unsigned __int8 *)dword_108300;
              break;
            case 5:
              v30 = (unsigned __int8 *)dword_1082F4;
              break;
            case 6:
              v30 = (unsigned __int8 *)dword_108308;
              break;
            case 7:
              v30 = (unsigned __int8 *)dword_1082F8;
              break;
            case 8:
              v30 = (unsigned __int8 *)dword_108324;
              break;
            default:
              fprintf(stderr, off_B94DC, v4[7], *(_DWORD *)(v27 + 52));
              sub_7E31C((int)off_B9494);
          }
        }
        v31 = dword_108358;
        if ( !dword_108358 )
        {
          v38 = v30;
          v31 = sub_7F738(12);
          v30 = v38;
        }
        v32 = *v30;
        if ( *(_BYTE *)(v31 + v32) )
        {
          do
          {
            v33 = *++v30;
            v32 = v33;
          }
          while ( *(_BYTE *)(v31 + v33) );
        }
        if ( v32 )
          sub_6D00C((int)v40, 0x50u, "%s=%s", *(_DWORD *)(v27 + 52), v30);
        else
          sub_6D00C((int)v40, 0x50u, "%s", *(const char **)(v27 + 52));
        fprintf((FILE *)option_usage_fp, v39, v40, *(_DWORD *)(v27 + 44));
        v34 = (unsigned __int16)*(_DWORD *)(v27 + 16) >> 12;
        if ( v34 == 2 || v34 == 4 )
        {
          v35 = *(_DWORD *)(v27 + 40);
          v36 = v35 == 0;
          if ( v35 )
            v37 = &dword_0 + 1;
          else
            v37 = dword_1082E4;
          if ( v36 )
            LOBYTE(v37) = *((_BYTE *)v37 + 268);
          byte_1083F0 = (char)v37;
        }
        result = (_DWORD *)sub_8128C(v4, v27, a3);
      }
    }
    --v26;
    v27 += 64;
  }
  while ( v26 > 0 );
  return result;
}
