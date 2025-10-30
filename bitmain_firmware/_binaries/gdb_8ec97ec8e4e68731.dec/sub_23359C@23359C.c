_DWORD *__fastcall sub_23359C(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r4
  int v5; // r0
  __int64 v6; // r8
  signed __int64 v7; // r10
  int v8; // r3
  bool v9; // zf
  int *v10; // r0
  unsigned int v11; // r3
  bool v12; // cf
  int v13; // r3
  bool v14; // zf
  __int64 v15; // r4
  __int64 v16; // r6
  __int64 *v17; // r1
  __int64 *v18; // r0
  __int64 v20; // kr00_8
  unsigned __int64 v21; // r2
  bool v22; // cc
  __int64 v23; // r6
  int v24; // r1
  __int64 v25; // r2
  size_t v26; // r7
  void *v27; // r0
  unsigned __int64 v28; // r4
  void *v29; // r3
  int v30; // r1
  unsigned __int64 v31; // r6
  __int64 i; // r4
  void *v33; // r0
  void *v34; // r0
  int v35; // [sp+4h] [bp-98h]
  int v36; // [sp+4h] [bp-98h]
  unsigned __int64 v37; // [sp+20h] [bp-7Ch]
  int v39; // [sp+34h] [bp-68h]
  __int64 v40; // [sp+40h] [bp-5Ch]
  int v42; // [sp+54h] [bp-48h]
  int v44; // [sp+5Ch] [bp-40h]
  __int64 v45; // [sp+60h] [bp-3Ch]
  void *ptr; // [sp+6Ch] [bp-30h] BYREF
  void *v47; // [sp+70h] [bp-2Ch] BYREF
  void *v48; // [sp+74h] [bp-28h] BYREF
  __int64 v49; // [sp+78h] [bp-24h] BYREF
  unsigned __int64 v50; // [sp+80h] [bp-1Ch] BYREF
  unsigned __int64 v51; // [sp+88h] [bp-14h] BYREF
  __int64 v52; // [sp+90h] [bp-Ch] BYREF

  v4 = a3;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = sub_16F654(0);
  v42 = ((int (__fastcall *)(int))loc_16EA14)(v5);
  if ( a4 >= 1 )
  {
    v39 = v4;
    v6 = 0;
    do
    {
      v10 = sub_1AED14(v39 + v6);
      if ( !v10 )
      {
        sub_94700(
          (int)"target.c",
          1744,
          "%s: Assertion `%s' failed.",
          "std::vector<memory_read_result> read_memory_robust(target_ops*, ULONGEST, LONGEST)",
          "region");
        for ( i = *(_QWORD *)a1; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 24 )
        {
          v33 = *(void **)(i + 16);
          if ( v33 )
            free(v33);
        }
        v34 = (void *)*a1;
        if ( *a1 )
          sub_339E64(v34);
        sub_338FFC(v34);
      }
      v11 = v10[1];
      if ( v11 )
      {
        v12 = v11 >= (unsigned int)a3;
        LODWORD(v7) = v11 - a3;
        v13 = v10[4];
        HIDWORD(v7) = -(HIDWORD(a3) + !v12);
        v14 = v13 == 3;
        if ( v13 != 3 )
          v14 = v13 == 0;
        if ( !v14 )
          goto LABEL_14;
      }
      else
      {
        v7 = a4 - v6;
        v8 = v10[4];
        v9 = v8 == 3;
        if ( v8 != 3 )
          v9 = v8 == 0;
        if ( !v9 )
        {
LABEL_14:
          v37 = a4 - v6;
          if ( v7 < a4 - v6 )
            v37 = v7;
          v15 = v6 + a3;
          ptr = sub_93028(v42 * v37);
          v16 = sub_22FF08(a2, 2u, 0, (int)ptr, v6 + a3, v37);
          if ( v16 >= 1 )
          {
            v51 = v6 + a3;
            v17 = (__int64 *)a1[1];
            v18 = (__int64 *)a1[2];
            v52 = v16 + v15;
            if ( v17 == v18 )
            {
              v18 = (__int64 *)sub_23426C(a1, v17, &v51, &v52, &ptr);
            }
            else
            {
              if ( v17 )
              {
                v18 = (__int64 *)ptr;
                v17[1] = v16 + v15;
                *v17 = v15;
                *((_DWORD *)v17 + 4) = v18;
                ptr = 0;
              }
              a1[1] = v17 + 3;
            }
            v6 += v16;
            goto LABEL_22;
          }
          v18 = (__int64 *)v37;
          v49 = v6 + a3;
          v50 = v15 + v37;
          v51 = v15 + v37;
          if ( v37 <= 1 )
          {
LABEL_25:
            v6 += v37;
LABEL_22:
            sub_258BD4(v18);
            if ( ptr )
              free(ptr);
            continue;
          }
          v47 = sub_93028(v37);
          if ( sub_22F850((unsigned int)a2 | 0x200000000LL, 0, (int)v47, 0, v35, v49, HIDWORD(v49), 1u, &v52) == 1 )
          {
            ++v15;
            v44 = 1;
            v40 = v51;
            goto LABEL_29;
          }
          if ( sub_22F850(
                 (unsigned int)a2 | 0x200000000LL,
                 0,
                 (int)v47 + v50 - 1 - v49,
                 0,
                 v36,
                 v50 - 1,
                 (v50 - 1) >> 32,
                 1u,
                 &v52) == 1 )
          {
            v44 = 0;
            v40 = --v51;
            while ( 1 )
            {
LABEL_29:
              v20 = v40;
              v22 = (_DWORD)v40 != (_DWORD)v15;
              if ( (_DWORD)v40 == (_DWORD)v15 )
                v22 = 0;
              if ( !v22 )
                break;
              HIDWORD(v21) = v40 - v15;
              LODWORD(v21) = v40 - v15;
              v23 = (v21 >> 1) + v15;
              if ( v44 )
              {
                v40 = (v21 >> 1) + v15;
                v23 = v15;
                v15 = v40;
                v45 = v20;
              }
              else
              {
                v45 = (v21 >> 1) + v15;
              }
              if ( v40 - v23 == sub_22FF08(a2, 2u, 0, (int)v47 + v42 * (v23 - v49), v23, v40 - v23) )
              {
                v51 = v45;
                v40 = v45;
              }
              else
              {
                v15 = v23;
                v51 = v40;
              }
            }
            if ( !v44 )
            {
              v26 = v42 * (v50 - v40);
              v27 = sub_93028(v26);
              v28 = v51;
              v48 = v27;
              v29 = memcpy(v27, (char *)v47 + v42 * (v51 - v49), v26);
              v30 = a1[1];
              if ( v30 == a1[2] )
              {
                sub_23426C(a1, v30, &v51, &v50, &v48);
                v29 = v48;
                if ( !v48 )
                  goto LABEL_38;
              }
              else
              {
                if ( v30 )
                {
                  v31 = v50;
                  *(_DWORD *)(v30 + 16) = v29;
                  *(_DWORD *)v30 = v28;
                  *(_QWORD *)(v30 + 8) = v31;
                  *(_DWORD *)(v30 + 4) = HIDWORD(v28);
                  a1[1] = v30 + 24;
                  goto LABEL_38;
                }
                a1[1] = 24;
              }
              free(v29);
              goto LABEL_38;
            }
            v24 = a1[1];
            if ( v24 == a1[2] )
            {
              sub_23426C(a1, v24, &v49, &v51, &v47);
              goto LABEL_38;
            }
            v18 = (__int64 *)v47;
            if ( v24 )
            {
              v25 = v49;
              *(_DWORD *)(v24 + 8) = v40;
              *(_DWORD *)(v24 + 16) = v18;
              *(_DWORD *)(v24 + 12) = HIDWORD(v40);
              *(_QWORD *)v24 = v25;
              a1[1] = v24 + 24;
              goto LABEL_25;
            }
            a1[1] = 24;
          }
          else
          {
LABEL_38:
            v18 = (__int64 *)v47;
          }
          if ( v18 )
            free(v18);
          goto LABEL_25;
        }
      }
      v6 += v7;
    }
    while ( v6 < a4 );
  }
  return a1;
}
