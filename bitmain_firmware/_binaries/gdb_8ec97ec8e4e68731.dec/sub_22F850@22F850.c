int __fastcall sub_22F850(
        __int64 a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        __int64 *a9)
{
  int (__fastcall *v9)(_DWORD, _DWORD, const char *, int, int); // r8
  char *v10; // r10
  unsigned __int64 v11; // r6
  unsigned __int64 v12; // r4
  const char *v13; // r9
  bool v14; // cc
  int v15; // r3
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r8
  unsigned __int64 v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r6
  int *v23; // r7
  int v25; // r2
  char *v26; // r11
  char *v27; // r0
  int v28; // r3
  int v29; // r0
  _BOOL4 v30; // r3
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  unsigned __int8 *v33; // r11
  _BOOL4 v34; // r3
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  int v37; // t1
  char *v38; // r0
  char *v39; // r3
  char *v40; // r0
  int v41; // r2
  char v42; // r1
  char v43; // t1
  char *v45; // r4
  char *v46; // r0
  _DWORD *v47; // r0
  _BOOL4 ptr; // [sp+28h] [bp-14h]
  void *ptra; // [sp+28h] [bp-14h]
  int v51; // [sp+2Ch] [bp-10h]
  char *v52; // [sp+30h] [bp-Ch]
  int v53; // [sp+34h] [bp-8h]

  v9 = *(int (__fastcall **)(_DWORD, _DWORD, const char *, int, int))(a1 + 388);
  v10 = (char *)a6;
  if ( !v9 )
  {
    sub_94700(
      (int)"target.c",
      1266,
      "%s: Assertion `%s' failed.",
      "target_xfer_status target_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byte*, ULONGE"
      "ST, ULONGEST, ULONGEST*)",
      "ops->to_xfer_partial != NULL");
    return -1;
  }
  v11 = a8;
  if ( a8 )
  {
    v12 = __PAIR64__(a1, HIDWORD(a1));
    v13 = a2;
    if ( a4 && !dword_46DBC8 )
    {
      v45 = sub_98E84(a6);
      v46 = sub_988AC(a8);
      sub_946E0("Writing to memory is not allowed (addr %s, len %s)", v45, v46);
    }
    LODWORD(a1) = 0;
    v14 = HIDWORD(a1) > 2;
    if ( HIDWORD(a1) != 2 )
      v14 = (unsigned int)(HIDWORD(a1) - 4) > 1;
    HIDWORD(a1) = 0;
    v15 = !v14;
    ptr = v15;
    *a9 = a1;
    if ( !v14 )
    {
      v16 = sub_16F654(0);
      v17 = sub_25AC58(v16);
      v18 = v17;
      if ( a3 )
      {
        v21 = sub_22F5D8(SHIDWORD(v12), v12, a3, 0, (unsigned int)v17, v11, a9);
        v22 = v21;
        if ( v21 == 1 )
        {
          v23 = &dword_4899A0;
          if ( !dword_489FA4 )
            v21 = ((int (__fastcall *)(int, _DWORD))loc_CD728)(a3, 0);
          if ( dword_489C84 )
          {
            v18 = 0;
            goto LABEL_29;
          }
          goto LABEL_26;
        }
      }
      else
      {
        LODWORD(v19) = (*(int (__fastcall **)(_DWORD))(HIDWORD(v12) + 392))(HIDWORD(v12));
        if ( v11 > v19 )
          v11 = v19;
        if ( (_DWORD)v11 )
        {
          v38 = (char *)sub_9836C(v11);
          ptra = v38;
          v39 = (char *)(a4 + v11);
          if ( a4 != a4 + (_DWORD)v11 )
          {
            v39 = v38;
            v40 = &v38[v11];
            v41 = a4 - 1;
            do
            {
              v43 = *(_BYTE *)++v41;
              v42 = v43;
              if ( v39++ != 0 )
                *(v39 - 1) = v42;
            }
            while ( v40 != v39 );
          }
          ((void (__fastcall *)(_DWORD, void *, int, char *, unsigned int, _DWORD, _DWORD, _DWORD))loc_CD728)(
            0,
            ptra,
            a4,
            v39,
            v18,
            0,
            v11,
            HIDWORD(v11));
        }
        else
        {
          ptra = 0;
          ((void (__fastcall *)(_DWORD, _DWORD, int, int, unsigned int, _DWORD, _DWORD, _DWORD))loc_CD728)(
            0,
            0,
            a4,
            v20,
            v18,
            0,
            0,
            HIDWORD(v11));
        }
        v21 = sub_22F5D8(SHIDWORD(v12), v12, 0, (int)ptra, v18, v11, a9);
        v22 = v21;
        if ( ptra )
          sub_339E64(ptra);
      }
LABEL_22:
      v23 = &dword_4899A0;
      v18 = v22 - 1;
      if ( dword_489C84 )
        goto LABEL_28;
      while ( v18 <= 1 )
      {
LABEL_26:
        if ( *a9 )
          return v22;
        v21 = sub_94700(
                (int)"target.c",
                1353,
                "%s: Assertion `%s' failed.",
                "target_xfer_status target_xfer_partial(target_ops*, target_object, const char*, gdb_byte*, const gdb_byt"
                "e*, ULONGEST, ULONGEST, ULONGEST*)",
                "*xfered_len > 0");
LABEL_28:
        ptr = v22 == 1;
LABEL_29:
        v25 = *(_DWORD *)sub_242FC8(v21);
        if ( !v13 )
          v13 = "(null)";
        v51 = v25;
        v53 = *(_DWORD *)(HIDWORD(v12) + 4);
        v52 = sub_98EEC(a3);
        v26 = sub_98EEC(a4);
        v10 = sub_98E84((int)v10);
        HIDWORD(v12) = sub_98880(a8, SHIDWORD(a8));
        v27 = sub_98880(*(_DWORD *)a9, *((_DWORD *)a9 + 1));
        v28 = a4;
        if ( !a4 )
          v28 = a3;
        a4 = v28;
        v29 = sub_2594B0(
                v51,
                "%s:target_xfer_partial (%d, %s, %s, %s, %s, %s) = %d, %s",
                v53,
                (_DWORD)v12,
                v13,
                v52,
                v26,
                v10,
                HIDWORD(v12),
                v22,
                v27);
        v30 = ptr;
        if ( !a4 )
          v30 = 0;
        if ( v30 )
        {
          v32 = (_DWORD *)sub_242FC8(v29);
          v29 = sub_256850(", bytes =", *v32);
          if ( *a9 )
          {
            v33 = (unsigned __int8 *)a4;
            v13 = " %02x";
            a3 = v22;
            v12 = 1;
            v10 = (char *)v23;
            v23 = (int *)a9;
            if ( (a4 & 0xF) != 0 )
              goto LABEL_43;
LABEL_39:
            v34 = *((_DWORD *)v10 + 185) <= 1u;
            if ( (_DWORD)v12 == 1 )
              v34 = 0;
            if ( v34 )
            {
              v47 = (_DWORD *)sub_242FC8(v29);
              v29 = sub_2594B0(*v47, " ...");
            }
            else
            {
              v35 = (_DWORD *)sub_242FC8(v29);
              v29 = sub_2594B0(*v35, (const char *)&word_356638);
LABEL_43:
              while ( 1 )
              {
                v36 = (_DWORD *)sub_242FC8(v29);
                v37 = *v33++;
                sub_2594B0(*v36, " %02x", v37);
                v29 = v12 + 1;
                if ( *(_QWORD *)v23 <= v12 )
                  break;
                ++v12;
                if ( ((unsigned __int8)v33 & 0xF) == 0 )
                  goto LABEL_39;
              }
            }
          }
        }
        v31 = (_DWORD *)sub_242FC8(v29);
        sub_259314(10, *v31);
      }
      return v22;
    }
    if ( (_DWORD)v12 != 3 )
    {
      v21 = v9(HIDWORD(v12), v12, a2, a3, a4);
      v22 = v21;
      goto LABEL_22;
    }
    if ( sub_22D5E8(a3, a4, a6, a7, v11, &a8, (int **)v15) )
    {
      v21 = sub_22F4D8((int *)HIDWORD(v12), a3, a4, (int)a9, a6, a7, a8, SHIDWORD(a8), a9);
      v22 = v21;
      goto LABEL_22;
    }
    return -1;
  }
  return 0;
}
