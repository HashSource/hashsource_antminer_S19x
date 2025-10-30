unsigned int __fastcall sub_8A63C(unsigned int a1, int a2, char **a3)
{
  unsigned int v6; // r7
  int v7; // r3
  int v8; // r2
  unsigned int v9; // r0
  int v10; // r3
  int v11; // r2
  unsigned int v12; // r3
  void (__fastcall *v13)(unsigned int); // r2
  int v14; // r3
  int v15; // r8
  int v17; // r7
  int v18; // r1
  _DWORD *v19; // r10
  int v20; // lr
  unsigned int v21; // r3
  int v22; // r9
  unsigned int v23; // r8
  unsigned int i; // r2
  _BYTE *v25; // r7
  int v26; // r1
  int v27; // r0
  int v28; // r11
  int v29; // r1
  unsigned int v30; // r0
  int v31; // r12
  int v32; // r2
  int v33; // r2
  unsigned __int16 *v34; // r12
  int v35; // lr
  unsigned __int16 *j; // r0
  int v37; // r3
  int v38; // r1
  int v39; // r2
  int v40; // r2
  unsigned __int16 *v41; // r3
  int v42; // r3
  int v43; // t1
  int v44; // r2
  int v45; // r2
  int v46; // r3
  int v47; // t1
  unsigned __int16 *v48; // r3
  unsigned int v49; // r9
  _BYTE *v50; // r0
  int v51; // r1
  int v52; // r1
  _BYTE *v53; // r7
  int v54; // r3
  int v55; // t1
  _BYTE *v56; // r3
  int v57; // r0
  _DWORD *v58; // r12
  int v59; // r7
  unsigned int v60; // r3
  int v61; // r3
  _DWORD *ptr; // [sp+8h] [bp-2Ch]
  int v63; // [sp+Ch] [bp-28h]
  int v64; // [sp+1Ch] [bp-18h] BYREF
  int v65; // [sp+20h] [bp-14h]
  int v66; // [sp+24h] [bp-10h]
  int v67; // [sp+28h] [bp-Ch] BYREF

  v6 = sub_889F8((int *)a1, *a3);
  if ( v6 )
    sub_7E31C((int)off_B9490);
  v7 = *(_DWORD *)(a1 + 12);
  if ( (v7 & 0x40) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 1;
    }
    goto LABEL_17;
  }
  v8 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 12) = v7 | 0x40;
  *(_DWORD *)(a1 + 8) = a3;
  if ( v8 >= 139264 )
    off_B928C = *(char **)(a1 + 124);
  v9 = sub_876B4(a1);
  if ( !v9 )
  {
    v10 = *(unsigned __int16 *)(a1 + 94);
    if ( (v10 & 0x7FFF) != 0 )
    {
      v17 = *(_DWORD *)(a1 + 68) + ((v10 + 1) << 6);
      if ( (*(_DWORD *)(v17 + 16) & 0x20) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 12);
        goto LABEL_11;
      }
      v18 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) |= 0x80000u;
      if ( v18 )
      {
        sub_8A420(a1, 1);
        if ( (*(_DWORD *)(v17 + 16) & 0x20) == 0 )
          sub_89A60(a1);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 12) |= 0x80000u;
      if ( v11 )
      {
        sub_8A420(a1, 1);
LABEL_9:
        v9 = sub_8A420(a1, 2);
LABEL_10:
        v12 = *(_DWORD *)(a1 + 12) & 0xFFF7FFFF;
        *(_DWORD *)(a1 + 12) = v12;
LABEL_11:
        if ( (v12 & 0x2000) != 0 )
        {
          v13 = *(void (__fastcall **)(unsigned int))(a1 + 88);
          if ( v13 )
          {
            if ( (v12 & 0x30000) == 0x10000 )
            {
              *(_DWORD *)(a1 + 12) = v12 & 0xFFFEFFFF;
              v13(v9);
              v12 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        if ( (v12 & 0x800) == 0 )
          goto LABEL_16;
        v64 = 0;
        v65 = 0;
        v67 = 0;
        v66 = 4;
        if ( getenv("POSIXLY_CORRECT") || (*(_DWORD *)(a1 + 12) & 3) == 0 )
          goto LABEL_16;
        ptr = sub_7FBE0(4 * *(_DWORD *)(a1 + 4));
        if ( ptr )
        {
          v19 = sub_7FBE0(4 * *(_DWORD *)(a1 + 4));
          if ( v19 )
          {
            v21 = 1;
            v22 = 0;
            *(_DWORD *)(a1 + 20) = 0;
            v23 = 0;
            *(_DWORD *)(a1 + 16) = 1;
            for ( i = *(_DWORD *)(a1 + 4); ; i = *(_DWORD *)(a1 + 4) )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      if ( v21 >= i )
                      {
                        *_errno_location() = 0;
                        goto LABEL_101;
                      }
                      v25 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v21);
                      if ( *v25 == 45 )
                      {
                        v26 = (unsigned __int8)v25[1];
                        if ( v25[1] )
                          break;
                      }
                      *(_DWORD *)(a1 + 16) = ++v21;
                      v19[v23++] = v25;
                    }
                    if ( v26 == 45 )
                    {
                      if ( !v25[2] )
                      {
                        v57 = v22;
                        *(_DWORD *)(a1 + 16) = v21 + 1;
                        if ( v21 + 1 < i )
                          v57 = 4 * (v21 + 1);
                        ptr[v22] = v25;
                        if ( v21 + 1 < i )
                          v20 = 4 * i;
                        ++v22;
                        if ( v21 + 1 < i )
                        {
                          v58 = &v19[v23];
                          do
                          {
                            v59 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v57);
                            v57 += 4;
                            *v58++ = v59;
                          }
                          while ( v57 != v20 );
                          v23 = v23 + i - 1 - v21;
                          *(_DWORD *)(a1 + 16) = i;
                        }
LABEL_101:
                        if ( v22 )
                          memcpy((void *)(*(_DWORD *)(a1 + 8) + 4), ptr, 4 * v22);
                        if ( v23 )
                          memcpy((void *)(*(_DWORD *)(a1 + 8) + 4 * (v22 + 1)), v19, 4 * v23);
LABEL_97:
                        free(ptr);
                        free(v19);
LABEL_16:
                        *(_DWORD *)(a1 + 16) = 1;
                        *(_DWORD *)(a1 + 20) = 0;
LABEL_17:
                        if ( sub_877F0(a1) )
                          return *(_DWORD *)(a1 + 4);
                        v14 = *(unsigned __int16 *)(a1 + 94);
                        if ( *(_WORD *)(a1 + 94)
                          && v14 != 0x8000
                          && (*(_DWORD *)(*(_DWORD *)(a1 + 68) + (v14 << 6) + 16) & 5) != 0 )
                        {
                          sub_868A8((unsigned __int32 *)a1);
                          sub_7E2B8(0);
                        }
                        v15 = *(_DWORD *)(a1 + 12);
                        if ( (v15 & 4) == 0 )
                          return *(_DWORD *)(a1 + 16);
                        v34 = *(unsigned __int16 **)(a1 + 68);
                        v35 = *(_DWORD *)(a1 + 104);
                        for ( j = v34; ; j += 32 )
                        {
                          v38 = *((_DWORD *)j + 4);
                          if ( (v38 & 5) != 0 )
                          {
                            v39 = *((_DWORD *)j + 8);
                            if ( v39 )
                            {
                              v40 = v39 - 4;
                              while ( 1 )
                              {
                                v43 = *(_DWORD *)(v40 + 4);
                                v40 += 4;
                                v42 = v43;
                                if ( v43 == 0x8000 )
                                  break;
                                v41 = &v34[32 * v42];
                                if ( (*((_DWORD *)v41 + 4) & 0xF) == 0 )
                                {
                                  fprintf(
                                    stderr,
                                    off_B9540,
                                    *(_DWORD *)(a1 + 28),
                                    *((_DWORD *)j + 13),
                                    *((_DWORD *)v41 + 13));
                                  goto LABEL_67;
                                }
                              }
                            }
                            v44 = *((_DWORD *)j + 9);
                            if ( v44 )
                            {
                              v45 = v44 - 4;
                              while ( 1 )
                              {
                                v47 = *(_DWORD *)(v45 + 4);
                                v45 += 4;
                                v46 = v47;
                                if ( v47 == 0x8000 )
                                  break;
                                v48 = &v34[32 * v46];
                                if ( (*((_DWORD *)v48 + 4) & 5) != 0 )
                                {
                                  fprintf(
                                    stderr,
                                    off_B94C0,
                                    *(_DWORD *)(a1 + 28),
                                    *((_DWORD *)j + 13),
                                    *((_DWORD *)v48 + 13));
                                  goto LABEL_67;
                                }
                              }
                            }
                          }
                          v37 = j[4];
                          if ( v37 == 0x8000 || *j == v37 )
                          {
                            v49 = j[5];
                            if ( j[7] < v49 && ((v38 & 0x100000) == 0 || (v38 & 3) == 0) )
                            {
                              if ( v49 <= 1 )
                                fprintf(stderr, off_B94EC, *(_DWORD *)(a1 + 28), *((_DWORD *)j + 13));
                              else
                                fprintf(stderr, off_B951C, *(_DWORD *)(a1 + 28), *((_DWORD *)j + 13), v49);
                              goto LABEL_67;
                            }
                          }
                          if ( --v35 <= 0 )
                            break;
                        }
                        if ( (v15 & 0x200) != 0 )
                        {
                          v6 = *(_DWORD *)(a1 + 16);
                          if ( *(_DWORD *)(a1 + 4) <= v6 )
                            return v6;
                          fprintf(stderr, off_B94F4, *(_DWORD *)(a1 + 28));
                        }
                        else
                        {
                          if ( (v15 & 0x400) == 0 )
                            return *(_DWORD *)(a1 + 16);
                          v6 = *(_DWORD *)(a1 + 16);
                          if ( *(_DWORD *)(a1 + 4) > v6 )
                            return v6;
                          fprintf(stderr, off_B94AC, *(_DWORD *)(a1 + 28));
                        }
LABEL_67:
                        (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
                        return *(_DWORD *)(a1 + 16);
                      }
                      v27 = sub_87008(a1, v25 + 2, &v64);
                    }
                    else
                    {
                      v27 = (*(_DWORD *)(a1 + 12) & 2) != 0
                          ? sub_7F2C8(a1, v26, &v64, &v67)
                          : sub_87008(a1, v25 + 1, &v64);
                    }
                    if ( v27 < 0 )
                      goto LABEL_115;
                    v63 = v22 + 1;
                    v28 = v22;
                    v29 = *(_DWORD *)(a1 + 16);
                    v20 = (int)ptr;
                    v30 = v29 + 1;
                    v31 = 4 * v29;
                    v32 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v29);
                    *(_DWORD *)(a1 + 16) = v29 + 1;
                    v21 = v29 + 1;
                    ptr[v22] = v32;
                    v33 = *(_DWORD *)(v64 + 16);
                    if ( (v33 & 0xF000) != 0 )
                      break;
                    if ( v67 != 1 )
                      goto LABEL_48;
                    v52 = (unsigned __int8)v25[2];
                    v53 = v25 + 2;
                    if ( !v52 )
                      goto LABEL_124;
                    while ( 1 )
                    {
                      if ( sub_7F2C8(a1, v52, &v64, &v67) < 0 )
                        goto LABEL_115;
                      v54 = *(_DWORD *)(v64 + 16);
                      if ( (v54 & 0xF000) != 0 )
                        break;
                      v55 = (unsigned __int8)*++v53;
                      v52 = v55;
                      if ( !v55 )
                        goto LABEL_117;
                    }
                    if ( (v54 & 0x10000) != 0 )
                    {
                      if ( v53[1] )
                        goto LABEL_117;
                      v30 = *(_DWORD *)(a1 + 16);
                      v56 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v30);
                      if ( *v56 != 45 )
                      {
                        *(_DWORD *)(a1 + 16) = v30 + 1;
                        v30 = *(_DWORD *)(a1 + 16);
                        v63 = v22 + 2;
                        i = *(_DWORD *)(a1 + 4);
                        ptr[v28 + 1] = v56;
                        goto LABEL_118;
                      }
LABEL_124:
                      i = *(_DWORD *)(a1 + 4);
                      goto LABEL_118;
                    }
                    if ( v53[1] )
                    {
LABEL_117:
                      i = *(_DWORD *)(a1 + 4);
                      v30 = *(_DWORD *)(a1 + 16);
                      goto LABEL_118;
                    }
                    v60 = *(_DWORD *)(a1 + 16);
                    i = *(_DWORD *)(a1 + 4);
                    if ( v60 >= i )
                    {
LABEL_115:
                      *_errno_location() = 22;
                      goto LABEL_97;
                    }
                    v63 = v22 + 2;
                    v30 = v60 + 1;
                    v61 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v60);
                    *(_DWORD *)(a1 + 16) = v30;
                    ptr[v28 + 1] = v61;
LABEL_118:
                    v21 = v30;
                    v22 = v63;
                  }
                  if ( (v33 & 0x10000) == 0 )
                    break;
                  if ( v67 == 1 )
                  {
                    if ( v25[2] )
                      goto LABEL_48;
                  }
                  else
                  {
                    if ( v67 != 2 )
                      goto LABEL_96;
                    if ( v65 )
                    {
LABEL_48:
                      i = *(_DWORD *)(a1 + 4);
                      goto LABEL_49;
                    }
                  }
                  i = *(_DWORD *)(a1 + 4);
                  if ( v21 >= i )
                  {
                    ++v22;
                    *_errno_location() = 0;
                    goto LABEL_101;
                  }
                  v50 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + v31 + 4);
                  if ( *v50 != 45 )
                  {
                    v21 = v29 + 2;
                    *(_DWORD *)(a1 + 16) = v29 + 2;
                    v63 = v22 + 2;
                    ptr[v28 + 1] = v50;
                  }
LABEL_49:
                  v22 = v63;
                }
                if ( v67 != 1 )
                  break;
                if ( v25[2] )
                  goto LABEL_95;
LABEL_108:
                i = *(_DWORD *)(a1 + 4);
                if ( v21 >= i )
                {
LABEL_96:
                  *_errno_location() = 5;
                  goto LABEL_97;
                }
                v22 += 2;
                v21 = v29 + 2;
                v51 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v31 + 4);
                *(_DWORD *)(a1 + 16) = v21;
                ptr[v28 + 1] = v51;
              }
              if ( v67 != 2 )
                goto LABEL_96;
              if ( !v65 )
                goto LABEL_108;
LABEL_95:
              ++v22;
            }
          }
          free(ptr);
        }
        *_errno_location() = 12;
        goto LABEL_16;
      }
    }
    v9 = sub_8A420(a1, 0);
    goto LABEL_10;
  }
  return v6;
}
