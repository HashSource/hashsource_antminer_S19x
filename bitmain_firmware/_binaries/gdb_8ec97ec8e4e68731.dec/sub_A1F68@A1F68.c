int __fastcall sub_A1F68(const char *a1, int a2, _DWORD *a3, int a4, const char *a5, int a6)
{
  int v7; // r5
  char *v8; // r3
  int v9; // r2
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int v13; // r6
  int v14; // r3
  const char *v15; // r2
  int v16; // r1
  char *v17; // r3
  int v18; // r11
  int v19; // r3
  int v20; // r3
  _DWORD *v23; // r9
  int v24; // r8
  int v25; // r11
  int v26; // t1
  int v27; // r3
  int v28; // r5
  int v29; // r0
  int v30; // r0
  char *v31; // r1
  int v32; // r2
  int v33; // r3
  bool v34; // zf
  char *v35; // r3
  int v36; // r1
  bool v37; // zf
  int v38; // r3
  int v39; // r3
  bool v40; // zf
  _BOOL4 v41; // r2
  int v42; // r3
  char *v43; // r1
  bool v44; // zf
  char *v45; // r3
  int v46; // r3
  bool v47; // zf
  int v48; // r3
  bool v49; // zf
  int v51; // [sp+4h] [bp-20h]
  int v52; // [sp+Ch] [bp-18h]
  int v54; // [sp+14h] [bp-10h]
  int v56; // [sp+1Ch] [bp-8h]

  v52 = 0;
  do
  {
    if ( a2 <= 0 )
    {
      v19 = 0;
      v18 = 0;
      goto LABEL_17;
    }
    v7 = 0;
    v51 = 0;
    do
    {
      while ( 1 )
      {
        v10 = sub_A0870(*(_DWORD *)(*(_DWORD *)&a1[8 * v7] + 24));
        v11 = *(_DWORD *)&a1[8 * v7];
        v12 = v10;
        v13 = *(_DWORD *)(v11 + 24);
        if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v11 + 32) >> 3)) != 1 )
        {
          if ( !v13 )
            goto LABEL_7;
          v8 = *(char **)(v13 + 24);
          v9 = *v8;
LABEL_6:
          if ( v9 != 7 || a4 != *((__int16 *)v8 + 2) )
            goto LABEL_7;
          if ( a4 > 0 )
          {
            v23 = a3;
            if ( !*a3 )
              goto LABEL_7;
            v24 = 0;
            v56 = v10;
            v25 = 0;
            v54 = v7;
            while ( 1 )
            {
              ++v25;
              v27 = *((_DWORD *)v8 + 6) + v24;
              v24 += 24;
              v28 = sub_A0870(*(_DWORD *)(v27 + 12));
              v29 = sub_26BC70(*v23);
              v30 = sub_A0870(v29);
              if ( !sub_A1DEC(v28, v30, 1) )
              {
LABEL_31:
                v7 = v54;
                goto LABEL_7;
              }
              if ( a4 == v25 )
                break;
              v26 = v23[1];
              ++v23;
              if ( !v26 )
                goto LABEL_31;
              v8 = *(char **)(v13 + 24);
            }
            v7 = v54;
            v12 = v56;
          }
          goto LABEL_11;
        }
        v8 = *(char **)(v13 + 24);
        v9 = *v8;
        if ( v9 != 5 )
          goto LABEL_6;
        if ( a4 )
          goto LABEL_7;
LABEL_11:
        v14 = v52 & 1;
        if ( !v12 )
          v14 = 1;
        if ( v14 )
          break;
        v31 = *(char **)(v12 + 24);
        v32 = *v31;
        if ( v32 == 7 )
        {
          v42 = *((_DWORD *)v31 + 5);
          if ( !v42 )
            break;
          v43 = *(char **)(v42 + 24);
          v32 = *v43;
          if ( v32 == 12 )
          {
            v12 = *((_DWORD *)v43 + 5);
            v44 = v12 == 0;
            if ( v12 )
              v44 = v42 == v12;
            if ( v44 )
            {
              v12 = v42;
LABEL_38:
              if ( a6 )
              {
                v35 = *(char **)(a6 + 24);
                v32 = *v35;
                if ( v32 == 12 )
                {
                  v36 = *((_DWORD *)v35 + 5);
                  v37 = a6 == v36;
                  if ( a6 != v36 )
                    v37 = v36 == 0;
                  if ( !v37 )
                    goto LABEL_46;
                  v36 = a6;
                }
                else
                {
                  v36 = a6;
                  v32 = 12;
                }
LABEL_52:
                v41 = **(char **)(v36 + 24) == v32;
                goto LABEL_53;
              }
              v32 = 12;
              goto LABEL_80;
            }
            while ( 1 )
            {
              v45 = *(char **)(v12 + 24);
              v32 = *v45;
              if ( v32 != 12 )
                break;
              v46 = *((_DWORD *)v45 + 5);
              v47 = v46 == v12;
              if ( v46 != v12 )
                v47 = v46 == 0;
              if ( v47 )
                goto LABEL_38;
              v12 = v46;
            }
          }
          else
          {
            v12 = v42;
          }
        }
        else
        {
          while ( v32 == 12 )
          {
            v33 = *((_DWORD *)v31 + 5);
            v34 = v33 == 0;
            if ( v33 )
              v34 = v33 == v12;
            if ( v34 )
              goto LABEL_38;
            v31 = *(char **)(v33 + 24);
            v12 = v33;
            v32 = *v31;
          }
        }
        if ( !a6 )
        {
LABEL_79:
          if ( v32 == 5 )
            break;
LABEL_80:
          v41 = v32 != 10;
          goto LABEL_53;
        }
        v48 = *(_DWORD *)(a6 + 24);
        if ( *(_BYTE *)v48 != 12 )
          goto LABEL_75;
        v36 = *(_DWORD *)(v48 + 20);
        v49 = a6 == v36;
        if ( a6 != v36 )
          v49 = v36 == 0;
        if ( v49 )
        {
LABEL_75:
          v36 = a6;
          if ( v32 != 5 )
            goto LABEL_52;
        }
        else
        {
LABEL_46:
          while ( 1 )
          {
            v38 = *(_DWORD *)(v36 + 24);
            if ( *(_BYTE *)v38 != 12 )
              break;
            v39 = *(_DWORD *)(v38 + 20);
            v40 = v39 == 0;
            if ( v39 )
              v40 = v39 == v36;
            if ( v40 )
              break;
            v36 = v39;
            if ( !v39 )
              goto LABEL_79;
          }
          if ( v32 != 5 )
            goto LABEL_52;
        }
        v41 = v12 == v36;
LABEL_53:
        if ( v41 )
          break;
LABEL_7:
        if ( a2 == ++v7 )
          goto LABEL_15;
      }
      v15 = &a1[8 * v7++];
      v16 = *((_DWORD *)v15 + 1);
      v17 = (char *)&a1[8 * v51];
      *(_DWORD *)v17 = *(_DWORD *)v15;
      *((_DWORD *)v17 + 1) = v16;
      ++v51;
    }
    while ( a2 != v7 );
LABEL_15:
    v18 = v51;
    v19 = v51;
    if ( v51 )
      v19 = 1;
LABEL_17:
    v20 = v19 | v52;
    v52 = 1;
  }
  while ( !v20 );
  if ( v18 )
  {
    if ( v18 == 1 || dword_487CAC )
      return 0;
    sub_259F10("Multiple matches for %s\n", a5);
    sub_9F75C(a1, v18, 1);
    return 0;
  }
  else
  {
    return -1;
  }
}
