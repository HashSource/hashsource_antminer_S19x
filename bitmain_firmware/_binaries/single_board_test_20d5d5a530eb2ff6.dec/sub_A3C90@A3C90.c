int __fastcall sub_A3C90(_DWORD *a1, int a2, unsigned __int16 *a3, int a4)
{
  int v4; // r11
  int v8; // r7
  char **v9; // r5
  char **v10; // r4
  int *v11; // r3
  int v12; // r3
  _BOOL4 v13; // r2
  unsigned int v14; // r3
  bool v15; // cc
  unsigned int v16; // r3
  bool v17; // cc
  int *v18; // r3
  int v19; // r3
  _BOOL4 v20; // r2
  int result; // r0
  __int16 v22; // lr
  int *v23; // r3
  int v24; // r2
  int v25; // r3
  char *v26; // r2
  bool v27; // zf
  int v28; // r2
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r0
  int v33; // r3
  int v34; // r4
  int v35; // r10
  int v36; // r5
  _DWORD *v37; // r11
  int v39; // [sp+Ch] [bp-18h]
  int v40; // [sp+Ch] [bp-18h]
  int v41; // [sp+10h] [bp-14h]
  char **v42; // [sp+10h] [bp-14h]
  char **v43; // [sp+14h] [bp-10h]
  int v44; // [sp+1Ch] [bp-8h] BYREF

  if ( !a4 )
    goto LABEL_64;
  v4 = 0;
  v8 = 0;
  v9 = &off_202DD4;
  do
  {
    v10 = &off_202A94;
    while ( *((unsigned __int16 *)v10 + 2) != *a3 )
    {
      v10 += 8;
      if ( v10 == v9 )
      {
        v10 = 0;
        break;
      }
    }
    if ( sub_A2D04((int)v10, 0) )
    {
      v11 = (int *)a1[1];
      if ( (*(_DWORD *)(v11[25] + 48) & 8) != 0 )
        goto LABEL_68;
      v12 = *v11;
      v13 = v12 >= 772;
      if ( v12 == 0x10000 )
        v13 = 0;
      if ( !v13 || v10[4] != (char *)116 )
      {
        if ( a1[7] || *(int *)(a1[31] + 680) < 772 )
          goto LABEL_68;
        if ( v10[4] != (char *)116 )
        {
          v14 = (unsigned int)v10[3];
          v15 = v14 > 0xA;
          if ( v14 != 10 )
            v15 = v14 > 1;
          if ( v15 )
          {
LABEL_68:
            if ( !sub_875C0((unsigned int)v10[5]) )
            {
              v16 = (unsigned int)v10[4];
              v17 = v16 > 0x32B;
              if ( v16 != 811 )
                v17 = v16 - 979 > 1;
              if ( !v17 )
              {
                if ( a1[7] )
                {
                  v18 = (int *)a1[1];
                  if ( (*(_DWORD *)(v18[25] + 48) & 8) == 0 )
                  {
                    v19 = *v18;
                    v20 = v19 != 0x10000;
                    if ( v19 < 772 )
                      v20 = 0;
                    if ( v20 )
                      goto LABEL_28;
                  }
                }
                else if ( *(_DWORD *)a1[1] == 0x10000 )
                {
                  v28 = a1[31];
                  if ( *(int *)(v28 + 684) >= 772 )
                  {
                    if ( *(int *)(v28 + 680) >= 772 )
                      goto LABEL_28;
                    v39 = a1[7];
                    v29 = sub_89910((int)a1);
                    v41 = v29;
                    if ( !v29 )
                      goto LABEL_28;
                    v32 = sub_10C010(v29, v30, v31);
                    if ( v32 > 0 )
                    {
                      v33 = v39;
                      v43 = v10;
                      v40 = v4;
                      v34 = v41;
                      v35 = v33;
                      v42 = v9;
                      v36 = v32;
                      do
                      {
                        v37 = (_DWORD *)sub_10C01C(v34, v35++);
                        if ( !sub_A33DC((int)a1, v37, 65537, 0) && (v37[4] & 0x10) != 0 )
                        {
                          v4 = v40;
                          v10 = v43;
                          v9 = v42;
                          goto LABEL_34;
                        }
                      }
                      while ( v36 != v35 );
                      v4 = v40;
                      v9 = v42;
                      goto LABEL_28;
                    }
                    if ( !v32 )
                      goto LABEL_28;
                  }
                }
              }
LABEL_34:
              v44 = 0;
              if ( sub_A2D04((int)v10, &v44) )
              {
                if ( v44 )
                  sub_D8C78(v44);
                v22 = *((_WORD *)v10 + 2);
              }
              else
              {
                v22 = *((_WORD *)v10 + 2);
              }
              LOBYTE(v44) = HIBYTE(v22);
              BYTE1(v44) = v22;
              if ( sub_854EC((int)a1, (int)&loc_5000A + 1) )
              {
                result = sub_A8450(a2, 2, *a3, 0, 2);
                if ( !result )
                  return result;
                if ( !v4 )
                {
                  v23 = (int *)a1[1];
                  if ( (*(_DWORD *)(v23[25] + 48) & 8) != 0 )
                    goto LABEL_62;
                  v24 = *v23;
                  v25 = *v23 < 772;
                  if ( v24 == 0x10000 )
                    v25 |= 1u;
                  if ( v25 )
                  {
LABEL_62:
                    v4 = 1;
                  }
                  else if ( v10[4] != (char *)6 )
                  {
                    v26 = v10[2];
                    v27 = v26 == (char *)675;
                    if ( v26 != (char *)675 )
                      v27 = v26 == (char *)64;
                    v4 = !v27;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    ++v8;
    ++a3;
  }
  while ( a4 != v8 );
  if ( !v4 )
  {
LABEL_64:
    sub_D0048(20, 533, 118, "ssl/t1_lib.c", 1720);
    return 0;
  }
  return v4;
}
