_DWORD *__fastcall sub_7FDCC(_DWORD *result, unsigned __int16 *a2, int a3)
{
  _DWORD *v4; // r4
  int *v5; // r10
  int v6; // r3
  int v7; // t1
  int *v8; // r10
  int v9; // r3
  int v10; // t1
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r3
  void (__fastcall *v16)(unsigned int, int); // r6
  bool v17; // zf
  size_t v19; // r10
  int v20; // r8
  int v21; // r7
  __int16 v22; // r3
  size_t v23; // r0
  int v24; // r8
  int v25; // r7
  __int16 v26; // r3
  int v27; // r3
  const char *v28; // r2
  char *v29; // r0
  int v30; // r3
  int v31; // t1
  const char *v32; // r3
  int v33; // r3
  char v34; // r2
  const char *v35; // [sp+14h] [bp-70h]
  char v36[12]; // [sp+20h] [bp-64h] BYREF
  _BYTE v37[80]; // [sp+2Ch] [bp-58h] BYREF

  v4 = result;
  if ( (result[3] & 0x40000) == 0 || a2[3] != 87 )
  {
    if ( !*((_DWORD *)a2 + 8) && !*((_DWORD *)a2 + 9) )
    {
      if ( !*((_DWORD *)a2 + 14) )
        goto LABEL_16;
      goto LABEL_15;
    }
    result = (_DWORD *)fputs(&ao_strs_strtable[dword_1073C8 + 203], (FILE *)option_usage_fp);
    v5 = (int *)*((_DWORD *)a2 + 8);
    if ( v5 )
    {
      if ( v5[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B85E0[0], *(_DWORD *)(v4[17] + (*v5 << 6) + 52));
      }
      else
      {
        fputs(off_B85E4[0], (FILE *)option_usage_fp);
        v6 = *v5;
        do
        {
          result = (_DWORD *)fprintf(
                               (FILE *)option_usage_fp,
                               &ao_strs_strtable[dword_1073C8 + 229],
                               *(_DWORD *)(v4[17] + (v6 << 6) + 52));
          v7 = v5[1];
          ++v5;
          v6 = v7;
        }
        while ( v7 != 0x8000 );
      }
      if ( !*((_DWORD *)a2 + 9) )
        goto LABEL_14;
      result = (_DWORD *)fputs(&ao_strs_strtable[dword_1073C8 + 217], (FILE *)option_usage_fp);
    }
    v8 = (int *)*((_DWORD *)a2 + 9);
    if ( v8 )
    {
      if ( v8[1] == 0x8000 )
      {
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, off_B85B8[0], *(_DWORD *)(v4[17] + (*v8 << 6) + 52));
        if ( !*((_DWORD *)a2 + 14) )
        {
LABEL_16:
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
            goto LABEL_39;
          }
          if ( (v11 & 0x800) == 0 )
          {
LABEL_19:
            v13 = a2[4];
            if ( v13 != 0x8000 && a2[2] != v13 )
              return (_DWORD *)fprintf(
                                 (FILE *)option_usage_fp,
                                 &off_B8544[0][dword_1073C8],
                                 *(_DWORD *)(v4[17] + (v13 << 6) + 52));
            v14 = *((_DWORD *)a2 + 4);
            if ( (v14 & 0x100) != 0 && (v4[13] || v4[8]) && *a2 < (int)v4[26] )
            {
              result = (_DWORD *)fputs(&off_B858C[0][dword_1073C8], (FILE *)option_usage_fp);
              v14 = *((_DWORD *)a2 + 4);
            }
            if ( (unsigned __int16)v14 >> 12 == 4 )
            {
              result = (_DWORD *)fputs(&off_B857C[0][dword_1073C8], (FILE *)option_usage_fp);
            }
            else
            {
              v15 = a2[6];
              if ( a2[5] > 1u )
              {
                result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B8580[0][dword_1073C8]);
              }
              else if ( v15 != 1 )
              {
                if ( a2[6] )
                {
                  if ( v15 == 0xFFFF )
                    result = (_DWORD *)fputs(&off_B8588[0][dword_1073C8], (FILE *)option_usage_fp);
                  else
                    result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B85F4[0][dword_1073C8], a2[6]);
                }
                else
                {
                  result = (_DWORD *)fputs(&off_B85AC[0][dword_1073C8], (FILE *)option_usage_fp);
                }
              }
            }
            if ( (v4[3] & 3) == 0 && *((unsigned __int16 *)v4 + 49) == *a2 )
              return (_DWORD *)fputs(&off_B854C[0][dword_1073C8], (FILE *)option_usage_fp);
            return result;
          }
LABEL_39:
          result = (_DWORD *)fputs(&off_B855C[0][dword_1073C8], (FILE *)option_usage_fp);
          goto LABEL_19;
        }
LABEL_15:
        result = (_DWORD *)fprintf((FILE *)option_usage_fp, &off_B8550[0][dword_1073C8]);
        goto LABEL_16;
      }
      fputs(off_B85B4[0], (FILE *)option_usage_fp);
      v9 = *v8;
      do
      {
        result = (_DWORD *)fprintf(
                             (FILE *)option_usage_fp,
                             &ao_strs_strtable[dword_1073C8 + 229],
                             *(_DWORD *)(v4[17] + (v9 << 6) + 52));
        v10 = v8[1];
        ++v8;
        v9 = v10;
      }
      while ( v10 != 0x8000 );
    }
LABEL_14:
    if ( !*((_DWORD *)a2 + 14) )
      goto LABEL_16;
    goto LABEL_15;
  }
  v19 = 0;
  v20 = result[26];
  v21 = result[17];
  fprintf((FILE *)option_usage_fp, &ao_strs_strtable[dword_1073C8 + 229], off_B8600);
  do
  {
    if ( (*(_DWORD *)(v21 + 16) & 0x6280000) == 0 )
    {
      v22 = *(_WORD *)(v21 + 2);
      if ( (v22 & 0x80) != 0 || (dword_9F184[(unsigned __int8)v22] & 0x4000) == 0 )
      {
        v23 = strlen(*(const char **)(v21 + 52));
        if ( v19 < v23 )
          v19 = v23;
      }
    }
    --v20;
    v21 += 64;
  }
  while ( v20 > 0 );
  result = (_DWORD *)sub_6C054((int)v36, 0xCu, "%%-%us %%s\n", v19 + 4);
  v24 = v4[26];
  v25 = v4[17];
  if ( dword_1073C8 )
    --dword_1073C8;
  do
  {
    if ( (*(_DWORD *)(v25 + 16) & 0x6280000) == 0 )
    {
      v26 = *(_WORD *)(v25 + 2);
      if ( (v26 & 0x80) != 0 || (dword_9F184[(unsigned __int8)v26] & 0x4000) == 0 )
      {
        sub_7E1AC(v4 + 3, (unsigned __int16 *)(v25 + 2), (const char **)&dword_1072F4, (const char **)&dword_1072F8);
        v27 = *(_DWORD *)(v25 + 16);
        if ( (v27 & 0x10000) != 0 )
        {
          v28 = (const char *)dword_1072E8;
        }
        else
        {
          switch ( (unsigned __int16)v27 >> 12 )
          {
            case 0:
              v28 = (const char *)dword_1072EC;
              break;
            case 1:
              v28 = (const char *)dword_1072C8;
              break;
            case 2:
              v28 = (const char *)dword_1072D8;
              break;
            case 3:
              v28 = (const char *)dword_1072E0;
              break;
            case 4:
              v28 = (const char *)dword_1072DC;
              break;
            case 5:
              v28 = (const char *)dword_1072D0;
              break;
            case 6:
              v28 = (const char *)dword_1072E4;
              break;
            case 7:
              v28 = (const char *)dword_1072D4;
              break;
            case 8:
              v28 = (const char *)dword_107300;
              break;
            default:
              fprintf(stderr, off_B84D8[0], v4[7], *(_DWORD *)(v25 + 52));
              sub_7CEC0((int)off_B8490[0]);
          }
        }
        v29 = (char *)dword_107334;
        if ( !dword_107334 )
        {
          v35 = v28;
          v29 = sub_7E2F8(12);
          v28 = v35;
        }
        v30 = *(unsigned __int8 *)v28;
        if ( v29[v30] )
        {
          do
          {
            v31 = *(unsigned __int8 *)++v28;
            v30 = v31;
          }
          while ( v29[v31] );
        }
        v17 = v30 == 0;
        v32 = *(const char **)(v25 + 52);
        if ( v17 )
          sub_6C054((int)v37, 0x50u, "%s", v32);
        else
          sub_6C054((int)v37, 0x50u, "%s=%s", v32, v28);
        fprintf((FILE *)option_usage_fp, v36, v37, *(_DWORD *)(v25 + 44));
        v33 = (unsigned __int16)*(_DWORD *)(v25 + 16) >> 12;
        if ( v33 == 2 || v33 == 4 )
        {
          if ( *(_DWORD *)(v25 + 40) )
            v34 = 1;
          else
            v34 = byte_1073CC;
          byte_1073CC = v34;
        }
        result = (_DWORD *)sub_7FDCC(v4, v25, a3);
      }
    }
    --v24;
    v25 += 64;
  }
  while ( v24 > 0 );
  return result;
}
