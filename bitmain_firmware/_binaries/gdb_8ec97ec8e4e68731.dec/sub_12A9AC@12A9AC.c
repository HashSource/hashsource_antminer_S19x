bool __fastcall sub_12A9AC(_BOOL4 result, int a2, unsigned int a3, const char **a4)
{
  int v5; // r5
  int v6; // r6
  char *v7; // r8
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  _BOOL4 v22; // r9
  int v23; // r3
  int v24; // r3
  unsigned int *v25; // lr
  unsigned int v26; // r7
  unsigned int *v27; // r12
  int v28; // r3
  int v29; // r3
  unsigned int v30; // [sp+14h] [bp-10h]

  v5 = *(_DWORD *)(a3 + 20);
  v6 = result;
  if ( (v5 & 0x100) != 0 )
  {
    v7 = *(char **)a3;
    result = sub_11EC1C(*(char **)a3, a4);
    if ( result )
    {
      v9 = *(_DWORD *)(a3 + 36);
      *(_DWORD *)v6 = a3;
      *(_DWORD *)(v6 + 8) = v9;
    }
    else
    {
      result = sub_11EC1C(v7, a4 + 2);
      if ( result )
      {
        v11 = *(_DWORD *)(a3 + 36);
        *(_DWORD *)(v6 + 20) = a3;
        *(_DWORD *)(v6 + 28) = v11;
      }
      else
      {
        result = sub_11EC1C(v7, a4 + 4);
        if ( result )
        {
          v10 = *(_DWORD *)(a3 + 36);
          *(_DWORD *)(v6 + 40) = a3;
          *(_DWORD *)(v6 + 48) = v10;
        }
        else
        {
          result = sub_11EC1C(v7, a4 + 6);
          if ( result )
          {
            v13 = *(_DWORD *)(a3 + 36);
            *(_DWORD *)(v6 + 60) = a3;
            *(_DWORD *)(v6 + 68) = v13;
          }
          else
          {
            result = sub_11EC1C(v7, a4 + 8);
            if ( result )
            {
              v12 = *(_DWORD *)(a3 + 36);
              *(_DWORD *)(v6 + 80) = a3;
              *(_DWORD *)(v6 + 88) = v12;
            }
            else
            {
              result = sub_11EC1C(v7, a4 + 10);
              if ( result )
              {
                v14 = *(_DWORD *)(a3 + 36);
                *(_DWORD *)(v6 + 100) = a3;
                *(_DWORD *)(v6 + 108) = v14;
              }
              else
              {
                result = sub_11EC1C(v7, a4 + 12);
                if ( result )
                {
                  v15 = *(_DWORD *)(a3 + 36);
                  *(_DWORD *)(v6 + 120) = a3;
                  *(_DWORD *)(v6 + 128) = v15;
                }
                else
                {
                  result = sub_11EC1C(v7, a4 + 14);
                  if ( result )
                  {
                    v16 = *(_DWORD *)(a3 + 36);
                    *(_DWORD *)(v6 + 140) = a3;
                    *(_DWORD *)(v6 + 148) = v16;
                  }
                  else
                  {
                    result = sub_11EC1C(v7, a4 + 16);
                    if ( result )
                    {
                      v17 = *(_DWORD *)(a3 + 36);
                      *(_DWORD *)(v6 + 160) = a3;
                      *(_DWORD *)(v6 + 168) = v17;
                    }
                    else
                    {
                      result = sub_11EC1C(v7, a4 + 24);
                      if ( result )
                      {
                        v18 = *(_DWORD *)(a3 + 36);
                        *(_DWORD *)(v6 + 220) = a3;
                        *(_DWORD *)(v6 + 228) = v18;
                      }
                      else
                      {
                        result = sub_11EC1C(v7, a4 + 26);
                        if ( result )
                        {
                          v19 = *(_DWORD *)(a3 + 36);
                          *(_DWORD *)(v6 + 240) = a3;
                          *(_DWORD *)(v6 + 248) = v19;
                        }
                        else
                        {
                          result = sub_11EC1C(v7, a4 + 28);
                          if ( result )
                          {
                            v20 = *(_DWORD *)(a3 + 36);
                            *(_DWORD *)(v6 + 260) = a3;
                            *(_DWORD *)(v6 + 268) = v20;
                          }
                          else
                          {
                            result = sub_11EC1C(v7, a4 + 18);
                            if ( result )
                            {
                              v21 = *(_DWORD *)(a3 + 36);
                              *(_DWORD *)(v6 + 180) = a3;
                              *(_DWORD *)(v6 + 188) = v21;
                            }
                            else
                            {
                              result = sub_11EC1C(v7, a4 + 20);
                              v22 = result;
                              if ( result )
                              {
                                v23 = *(_DWORD *)(a3 + 36);
                                *(_DWORD *)(v6 + 200) = a3;
                                *(_DWORD *)(v6 + 208) = v23;
                              }
                              else if ( sub_11EC1C(v7, a4 + 22) )
                              {
                                v25 = *(unsigned int **)(v6 + 340);
                                v30 = *(_DWORD *)(a3 + 36);
                                if ( !v25 || v25[1] == *v25 )
                                  goto LABEL_44;
                                while ( 1 )
                                {
                                  v26 = *v25;
                                  if ( *v25 < v25[1] )
                                    break;
                                  sub_94700(
                                    (int)"dwarf2read.c",
                                    2636,
                                    "%s: Assertion `%s' failed.",
                                    "dwarf2_section_info_def* VEC_dwarf2_section_info_def_quick_push(VEC_dwarf2_section_i"
                                    "nfo_def*, const dwarf2_section_info_def*, const char*, unsigned int)",
                                    "quick_push");
LABEL_44:
                                  v25 = sub_99EB8(v25, 1, 8, 20);
                                  *(_DWORD *)(v6 + 340) = v25;
                                }
                                result = a3;
                                *v25 = v26 + 1;
                                v27 = &v25[5 * v26 + 2];
                                *v27 = a3;
                                v27[1] = v22;
                                v27[2] = v30;
                                v27[3] = v22;
                                v5 = *(_DWORD *)(a3 + 20);
                                v27[4] = v22;
                              }
                              else
                              {
                                result = sub_11EC1C(v7, a4 + 30);
                                if ( result )
                                {
                                  v24 = *(_DWORD *)(a3 + 36);
                                  *(_DWORD *)(v6 + 280) = a3;
                                  *(_DWORD *)(v6 + 288) = v24;
                                }
                                else
                                {
                                  result = sub_11EC1C(v7, a4 + 32);
                                  if ( result )
                                  {
                                    v28 = *(_DWORD *)(a3 + 36);
                                    *(_DWORD *)(v6 + 300) = a3;
                                    *(_DWORD *)(v6 + 308) = v28;
                                  }
                                  else
                                  {
                                    result = sub_11EC1C(v7, a4 + 34);
                                    if ( result )
                                    {
                                      v29 = *(_DWORD *)(a3 + 36);
                                      *(_DWORD *)(v6 + 320) = a3;
                                      *(_DWORD *)(v6 + 328) = v29;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v5 & 3) != 0 && !*(_DWORD *)(a3 + 28) )
    *(_BYTE *)(v6 + 416) = 1;
  return result;
}
