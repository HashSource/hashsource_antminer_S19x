void __fastcall sub_2B2FC0(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r2
  int v5; // r2
  _DWORD *v6; // r9
  int v7; // r3
  int v8; // r1
  void (__fastcall *v9)(int, int, char *); // r5
  int v10; // r6
  size_t v11; // r0
  char *v12; // r0
  _DWORD *v13; // r11
  int v14; // r10
  char *v15; // r7
  int v16; // r8
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r3
  int v20; // r6
  int v21; // r3
  char *v22; // r5
  char *v23; // r1
  int v24; // r3
  _DWORD *v25; // r2
  int v26; // r3
  _DWORD *v27; // r6
  int v28; // r1
  unsigned int v29; // r11
  _DWORD *v30; // r3
  _DWORD *v31; // r12
  int v32; // r1
  unsigned int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r3
  char *v38; // r10
  char *v39; // r2
  int v40; // r1
  unsigned int v41; // r0
  _DWORD *v42; // [sp+0h] [bp-50h]
  int v43; // [sp+4h] [bp-4Ch]
  int v44; // [sp+4h] [bp-4Ch]
  _DWORD *v45; // [sp+8h] [bp-48h]
  _DWORD *v46; // [sp+Ch] [bp-44h]
  char *ptr; // [sp+18h] [bp-38h]
  _DWORD *v50; // [sp+1Ch] [bp-34h]
  void (__fastcall *v51)(int, char *, int); // [sp+20h] [bp-30h]
  int v52; // [sp+24h] [bp-2Ch]

  if ( a1 )
  {
    v2 = a1[37];
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( *(_DWORD *)(v3 + 4) == 5 )
      {
        v4 = *(_DWORD *)(v2 + 160);
        if ( v4 )
        {
          if ( (*(_BYTE *)(v4 + 2340) & 0x3F) == 4 )
          {
            v5 = a1[35];
            if ( v5 )
            {
              if ( *(_DWORD *)(v5 + 4) == 1879048193 )
              {
                v6 = *(_DWORD **)a2;
                v7 = *(_DWORD *)(*(_DWORD *)(v3 + 444) + 392);
                v8 = *(_DWORD *)(*(_DWORD *)a2 + 40);
                if ( v8 == *(unsigned __int8 *)(v7 + 3) )
                {
                  v9 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v7 + 56);
                  v51 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v7 + 60);
                }
                else
                {
                  if ( v8 != *(unsigned __int8 *)(v7 + 4) )
                    sub_2A6BF0((int)"elf32-arm.c", 14739, (int)"elf32_arm_update_relocs");
                  v9 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v7 + 64);
                  v51 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v7 + 68);
                }
                v10 = v6[12];
                if ( v8 )
                  v11 = 12 * (sub_347418(v6[6], v8) + 1);
                else
                  v11 = 12;
                v12 = (char *)sub_2AB4EC(v11);
                ptr = v12;
                v13 = (_DWORD *)a1[40];
                if ( v13 )
                {
                  v14 = 0;
                  v15 = v12;
                  v16 = v10;
                  v52 = v10;
                  do
                  {
                    v17 = v13[1];
                    if ( (unsigned int)(v17 - 3) <= 1 )
                    {
                      ++v14;
                      v9(v2, v16, v15);
                      v15 += 12;
                      v16 += v6[10];
                    }
                    else if ( v17 == 1 )
                    {
                      v18 = (_DWORD *)v13[4];
                      v45 = v18;
                      if ( !v18
                        || (v19 = v18[37]) == 0
                        || *(_DWORD *)(*(_DWORD *)(v19 + 4) + 4) != 5
                        || (v24 = *(_DWORD *)(v19 + 160)) == 0
                        || (*(_BYTE *)(v24 + 2340) & 0x3F) != 4 )
                      {
                        __und(0);
                      }
                      v25 = (_DWORD *)v45[35];
                      v26 = v25[15];
                      v27 = (_DWORD *)v25[44];
                      if ( v26 && (v28 = *(_DWORD *)(v26 + 40), v28 == v6[10]) )
                      {
                        v42 = v25 + 15;
                      }
                      else
                      {
                        v26 = v25[19];
                        if ( !v26 || (v28 = *(_DWORD *)(v26 + 40), v28 != v6[10]) )
                          sub_2A6BF0((int)"elf32-arm.c", 14782, (int)"elf32_arm_update_relocs");
                        v42 = v25 + 19;
                      }
                      if ( v27 )
                      {
                        v50 = (_DWORD *)v25[45];
                        v43 = a1[7] + v45[14];
                        if ( v28 && (unsigned int)sub_347418(*(_DWORD *)(v26 + 24), v28) )
                        {
                          v46 = v13;
                          v29 = 0;
                          do
                          {
                            v9(v2, v16, v15);
                            v30 = v27;
                            v31 = v27;
                            v32 = 0;
                            v33 = (unsigned int)(*(_DWORD *)v15 - v43) >> 3;
                            while ( v30[2] <= v33 )
                            {
                              ++v32;
                              v31 = v30;
                              if ( !v30[3] )
                                goto LABEL_46;
                              v30 = (_DWORD *)v30[3];
                            }
                            v30 = v31;
LABEL_46:
                            if ( *v30 || v30[2] != v33 )
                            {
                              ++v14;
                              *(_DWORD *)v15 -= 8 * v32;
                              v15 += 12;
                            }
                            v16 += v6[10];
                            v34 = *(_DWORD *)(*v42 + 40);
                            if ( !v34 )
                              break;
                            ++v29;
                          }
                          while ( (unsigned int)sub_347418(*(_DWORD *)(*v42 + 24), v34) > v29 );
                          v13 = v46;
                        }
                        if ( *v50 == 1 )
                        {
                          ++v14;
                          v15 += 12;
                          v35 = v45[9];
                          v36 = *(_DWORD *)(v50[1] + 60);
                          *((_DWORD *)v15 - 1) = 0;
                          v37 = *(_DWORD *)(v36 + 136);
                          *((_DWORD *)v15 - 3) = v35 - 8 + v43;
                          *((_DWORD *)v15 - 2) = (v37 << 8) + 42;
                        }
                      }
                      else if ( v28 && (unsigned int)sub_347418(*(_DWORD *)(v26 + 24), v28) )
                      {
                        v44 = v14;
                        v38 = v15;
                        while ( 1 )
                        {
                          v39 = v38;
                          v38 += 12;
                          v9(v2, v16, v39);
                          v40 = *(_DWORD *)(*v42 + 40);
                          v16 += v6[10];
                          if ( !v40 )
                            break;
                          v27 = (_DWORD *)((char *)v27 + 1);
                          v41 = sub_347418(*(_DWORD *)(*v42 + 24), v40);
                          if ( v41 <= (unsigned int)v27 )
                          {
                            v15 = v38;
                            v14 = v44 + v41;
                            goto LABEL_18;
                          }
                        }
                        v15 = v38;
                        v14 = v44;
                      }
                    }
LABEL_18:
                    v13 = (_DWORD *)*v13;
                  }
                  while ( v13 );
                  v20 = v52;
                  v21 = v14 * v6[10];
                  *(_DWORD *)(a2 + 4) = v14;
                  v6[6] = v21;
                  if ( v14 )
                  {
                    v22 = ptr;
                    do
                    {
                      v23 = v22;
                      v22 += 12;
                      v51(v2, v23, v20);
                      --v14;
                      v20 += v6[10];
                    }
                    while ( v14 );
                  }
                }
                else
                {
                  *(_DWORD *)(a2 + 4) = 0;
                  v6[6] = 0;
                }
                free(ptr);
                free(*(void **)(a2 + 12));
                *(_DWORD *)(a2 + 12) = 0;
              }
            }
          }
        }
      }
    }
  }
}
