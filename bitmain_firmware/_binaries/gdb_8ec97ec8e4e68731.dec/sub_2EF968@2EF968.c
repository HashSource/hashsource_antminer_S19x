void __fastcall sub_2EF968(int a1, int a2)
{
  int v2; // r3
  char *v5; // r2
  int v6; // r10
  unsigned int v7; // r10
  char *v8; // r6
  unsigned int v9; // r11
  int v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // r9
  unsigned int v13; // r7
  int v14; // r0
  unsigned int v15; // r3
  char v16; // cc
  int v17; // r8
  char *v18; // r4
  unsigned int v19; // r9
  bool v20; // cc
  bool v21; // cf
  int v22; // r7
  char *v23; // r4
  unsigned int v24; // r0
  unsigned int v25; // r7
  int v26; // r6
  char *v27; // r4
  int v28; // r0
  bool v29; // cf
  int v30; // r0
  int v31; // r0
  char *s; // r4
  unsigned int v33; // [sp+10h] [bp-40h]
  int v34; // [sp+14h] [bp-3Ch]
  char *ptr; // [sp+18h] [bp-38h]
  char *s2; // [sp+1Ch] [bp-34h]
  int v37[11]; // [sp+24h] [bp-2Ch] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 )
  {
    v5 = (char *)sub_2AB368(v2 + 1);
    ptr = v5;
    if ( v5 )
    {
      if ( sub_2ADEDC(a1, *(_DWORD **)(a2 + 44), v5, *(_DWORD *)(a2 + 24), 0, *(_DWORD *)(a2 + 24)) )
      {
        ptr[*(_DWORD *)(a2 + 24)] = 0;
        if ( *ptr == 65 )
        {
          v6 = *(_DWORD *)(a2 + 24);
          v33 = v6 - 1;
          if ( v6 != 1 )
          {
            v7 = (unsigned int)&ptr[v6];
            v8 = ptr + 1;
            v9 = v7 - 4;
            if ( (unsigned int)(ptr + 1) < v7 - 4 )
            {
              v10 = *(_DWORD *)(a1 + 4);
              s2 = *(char **)(*(_DWORD *)(v10 + 444) + 408);
              while ( 1 )
              {
                v11 = (*(int (__fastcall **)(char *))(v10 + 40))(v8);
                if ( !v11 )
                  break;
                if ( v11 >= v33 )
                  v12 = v33;
                else
                  v12 = v11;
                v33 -= v12;
                if ( v12 <= 4 )
                {
                  sub_2A6A5C("%B: error: attribute section length too small: %ld", a1, v12);
                  break;
                }
                v13 = v12 - 4;
                v14 = strnlen(v8 + 4, v12 - 4);
                v15 = v14 + 1;
                v16 = (v14 != -1) & __CFADD__(v14, 1);
                if ( v14 != -1 )
                  v16 = v13 > v15;
                if ( !v16 )
                  break;
                if ( !s2 || (v34 = v14 + 1, v17 = strcmp(v8 + 4, s2), v15 = v34, v17) )
                {
                  if ( v8[4] != 103 || v8[5] != 110 || v8[6] != 117 || v8[7] )
                  {
                    v8 += v12;
                    goto LABEL_55;
                  }
                  v17 = 1;
                }
                v18 = &v8[v15 + 4];
                v19 = v13 - v15;
                v20 = v13 > v15;
                if ( v13 != v15 )
                  v20 = v7 > (unsigned int)v18;
                if ( v20 )
                {
                  while ( 1 )
                  {
                    v22 = sub_2ABC24(a1, v18, v37, 0, v7);
                    v23 = &v18[v37[0]];
                    v8 = v23 + 4;
                    if ( (unsigned int)v23 >= v9 )
                      break;
                    v24 = (*(int (__fastcall **)(char *))(*(_DWORD *)(a1 + 4) + 40))(v23);
                    if ( !v24 )
                      break;
                    if ( v24 >= v19 )
                      v24 = v19;
                    v19 -= v24;
                    v18 = &v23[v24 - v37[0]];
                    if ( v22 == 1
                      && (v7 < (unsigned int)v18 ? (v25 = v7) : (v25 = (unsigned int)v18),
                          v18 = v8,
                          (unsigned int)v8 < v25) )
                    {
                      do
                      {
                        v26 = sub_2ABC24(a1, v18, v37, 0, v25);
                        v27 = &v18[v37[0]];
                        v28 = sub_2EF65C(a1, v17, v26) & 3;
                        switch ( v28 )
                        {
                          case 2:
                            sub_2EF718(a1, v17, v26, v27);
                            v18 = &v27[strlen(v27) + 1];
                            break;
                          case 3:
                            v31 = sub_2ABC24(a1, v27, v37, 0, v25);
                            s = &v27[v37[0]];
                            sub_2EF784(a1, v17, v26, v31, s);
                            v18 = &s[strlen(s) + 1];
                            break;
                          case 1:
                            v30 = sub_2ABC24(a1, v27, v37, 0, v25);
                            v18 = &v27[v37[0]];
                            sub_2EF6BC(a1, v17, v26, v30);
                            break;
                          default:
                            sub_2A6BF0((int)"elf-attrs.c", 551, (int)"_bfd_elf_parse_attributes");
                        }
                      }
                      while ( v25 > (unsigned int)v18 );
                      v29 = 1;
                      if ( v19 )
                        v29 = (unsigned int)v18 >= v7;
                      if ( v29 )
                        goto LABEL_54;
                    }
                    else
                    {
                      v21 = 1;
                      if ( v19 )
                        v21 = (unsigned int)v18 >= v7;
                      if ( v21 )
                        goto LABEL_54;
                    }
                  }
                }
                else
                {
LABEL_54:
                  v8 = v18;
                }
LABEL_55:
                if ( !v33 || (unsigned int)v8 >= v9 )
                  break;
                v10 = *(_DWORD *)(a1 + 4);
              }
            }
          }
        }
      }
      free(ptr);
    }
  }
}
