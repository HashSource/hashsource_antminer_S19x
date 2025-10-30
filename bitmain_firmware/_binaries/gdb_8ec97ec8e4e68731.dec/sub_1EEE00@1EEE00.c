int __fastcall sub_1EEE00(int a1, int a2, int a3, int *a4, __int64 a5)
{
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r7
  int v14; // r0
  char *v15; // r8
  size_t v16; // r0
  char *v17; // r9
  int v18; // r8
  size_t v19; // r4
  int v20; // r0
  int v21; // r0
  int result; // r0
  int v23; // r0
  int v24; // r0
  int *v25; // r5
  int v26; // r0
  int v27; // r1
  bool v28; // zf
  int v29; // r3
  int *v30; // r2
  int *v31; // r12
  _DWORD *v32; // r4
  int v33; // r0
  int v34; // r4
  char v35; // r3
  int v36; // r0
  bool v37; // zf
  __int64 v38; // r0
  __int16 *v39; // r3
  __int16 v40; // r2
  char v41; // r3
  _DWORD *v42; // r5
  int v43; // r0
  int v44; // r3
  int v45; // r0
  __int16 *v46; // r11
  const char *v47; // r4
  _BOOL4 v48; // [sp+18h] [bp-6Ch]
  int v49; // [sp+1Ch] [bp-68h] BYREF
  int v50; // [sp+20h] [bp-64h]
  int *v51; // [sp+24h] [bp-60h]
  int v52; // [sp+2Ch] [bp-58h]
  __int64 v53; // [sp+30h] [bp-54h]
  int v54; // [sp+38h] [bp-4Ch]
  int v55; // [sp+3Ch] [bp-48h]
  int *v56; // [sp+40h] [bp-44h]
  int v57; // [sp+44h] [bp-40h] BYREF
  int v58; // [sp+48h] [bp-3Ch]
  int v59; // [sp+4Ch] [bp-38h]
  int v60[3]; // [sp+50h] [bp-34h] BYREF
  int v61; // [sp+5Ch] [bp-28h] BYREF
  int v62; // [sp+60h] [bp-24h]
  int *v63; // [sp+64h] [bp-20h]
  char v64; // [sp+68h] [bp-1Ch] BYREF
  char v65; // [sp+74h] [bp-10h] BYREF

  v49 = a2;
  v50 = a3;
  v51 = a4;
  v5 = sub_16F654(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2770)(v5);
  v7 = (_DWORD *)dword_488C94;
  v8 = sub_232950(v6);
  if ( !v8 || dword_48794C == 1 )
  {
    if ( !sub_232950(v8) )
      ((void (__fastcall *)(_DWORD, _UNKNOWN **))loc_1F7B78)(v7[102], &off_46DB30);
    v9 = v49;
    v10 = v50;
    v11 = (int)v51;
    v7[26] = dword_48794C;
    v57 = v9;
    v58 = v10;
    v59 = v11;
    v12 = sub_16F654(v9);
    ((void (__fastcall *)(int))loc_1E2770)(v12);
    if ( dword_48794C != 1 )
    {
      v13 = dword_488C94;
      if ( !((int (__fastcall *)(_DWORD))loc_1E2198)(0) )
        sub_1E7E3C(v13);
      v14 = ((int (__fastcall *)(_DWORD))loc_1E2198)(0);
      if ( v14 != 2 )
      {
        v15 = *(char **)v13;
        v16 = sub_1E2890(v14);
        v17 = &v15[v16];
        v18 = (int)&v15[sub_93170(v15, v16, "vCont")];
        if ( sub_98F78(&v57, dword_488C70) )
        {
          ((void (__fastcall *)(int, char *, _DWORD, _DWORD, int, _DWORD, _DWORD))loc_1E2B98)(
            v18,
            v17,
            qword_46BBCC,
            HIDWORD(qword_46BBCC),
            dword_46BBD4,
            a5,
            HIDWORD(a5));
        }
        else if ( sub_98F78(&v57, &qword_46BBCC) || sub_98FB8(&v57) )
        {
          if ( a5 )
            v18 = ((int (__fastcall *)(int, char *, int, _DWORD, _DWORD, _DWORD, _DWORD))loc_1E2B98)(
                    v18,
                    v17,
                    dword_4878EC,
                    qword_4878F0,
                    HIDWORD(qword_4878F0),
                    a5,
                    HIDWORD(a5));
          v42 = (_DWORD *)dword_48A4D4;
          v60[0] = v57;
          v60[1] = v58;
          v60[2] = v59;
          if ( dword_48A4D4 )
          {
            do
            {
              if ( v42[11] != 2 && sub_9904C(v42 + 2, v60) )
              {
                v48 = sub_98F78(&dword_4878EC, v42 + 2);
                if ( !v48 )
                {
                  if ( v42[36] )
                  {
                    v43 = ((int (__fastcall *)(int, char *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_1E2B98)(
                            v18,
                            v17,
                            v42[2],
                            v42[3],
                            v42[4],
                            0,
                            v42[36]);
                    v44 = v42[62];
                    v18 = v43;
                    v42[36] = 0;
                    if ( v44 )
                    {
                      v45 = ((int (__fastcall *)(_DWORD *))loc_1E38EC)(v42);
                      *(_DWORD *)(v45 + 68) = v48;
                      *(_DWORD *)(v45 + 72) = v48;
                    }
                  }
                }
              }
              v42 = (_DWORD *)v42[1];
            }
            while ( v42 );
          }
          ((void (__fastcall *)(int, char *, int, int, int, _DWORD, _DWORD))loc_1E2B98)(v18, v17, v57, v58, v59, 0, 0);
        }
        else
        {
          ((void (__fastcall *)(int, char *, int, int, int, _DWORD, _DWORD))loc_1E2B98)(
            v18,
            v17,
            v57,
            v58,
            v59,
            a5,
            HIDWORD(a5));
        }
        v19 = strlen(*(const char **)v13);
        if ( v19 < sub_1E2890(v19) )
        {
          v20 = sub_1E7DEC(*(const char **)v13);
          if ( sub_232950(v20) )
          {
            sub_1E4EB8((char **)v13, (size_t *)(v13 + 4), 0, 0, 0);
            v47 = *(const char **)v13;
            if ( strcmp(*(const char **)v13, "OK") )
              sub_946E0("Unexpected vCont reply in non-stop mode: %s", v47);
          }
          goto LABEL_13;
        }
        v38 = sub_94700(
                (int)"remote.c",
                5678,
                "%s: Assertion `%s' failed.",
                "int remote_resume_with_vcont(ptid_t, int, gdb_signal)",
                "strlen (rs->buf) < get_remote_packet_size ()");
LABEL_73:
        sub_946E0("Remote reverse-continue not supported.", HIDWORD(v38));
      }
    }
    v61 = v49;
    v62 = v50;
    v63 = v51;
    v24 = sub_16F654(v49);
    ((void (__fastcall *)(int))loc_1E2770)(v24);
    v25 = (int *)dword_488C94;
    *(_QWORD *)(dword_488C94 + 96) = __PAIR64__(a5, HIDWORD(a5));
    v26 = sub_98F78(&v61, &qword_46BBCC);
    v29 = v26;
    v28 = v26 == 0;
    if ( v26 )
    {
      v30 = dword_488CF4;
      v31 = (int *)&v65;
    }
    else
    {
      v26 = v61;
      v27 = v62;
      v30 = v63;
      v31 = (int *)&v64;
    }
    if ( !v28 )
    {
      v29 = 0;
      v26 = *v30;
      v27 = v30[1];
      v30 = (int *)v30[2];
    }
    *v31 = v26;
    v31[1] = v27;
    v31[2] = (int)v30;
    sub_1E8188(v26, v27, (int)v30, v29);
    v32 = (_DWORD *)dword_48A4D4;
    if ( dword_48A4D4 )
    {
      do
      {
        if ( v32[11] != 2 && v32[62] )
        {
          v33 = ((int (__fastcall *)(_DWORD *))loc_1E38EC)(v32);
          *(_DWORD *)(v33 + 68) = 0;
          *(_DWORD *)(v33 + 72) = 0;
        }
        v32 = (_DWORD *)v32[1];
      }
      while ( v32 );
    }
    v34 = *v25;
    if ( dword_48794C == 1 )
    {
      v37 = dword_48A514 == 0;
      if ( dword_48A514 )
        v37 = HIDWORD(a5) == 0;
      if ( !v37 )
        sub_946B0(" - Can't pass signal %d to target in reverse: ignored.", HIDWORD(a5));
      if ( (_DWORD)a5 )
      {
        if ( ((int (__fastcall *)(int))loc_1E2198)(59) == 2 )
          sub_946E0("Remote reverse-step not supported.");
        v39 = &word_433064;
      }
      else
      {
        if ( ((int (__fastcall *)(int))loc_1E2198)(58) == 2 )
          goto LABEL_73;
        v39 = &word_3D782C;
      }
      v40 = *v39;
      v41 = *((_BYTE *)v39 + 2);
      *(_WORD *)v34 = v40;
      *(_BYTE *)(v34 + 2) = v41;
    }
    else if ( HIDWORD(a5) )
    {
      if ( (_DWORD)a5 )
        v35 = 83;
      else
        v35 = 67;
      *(_BYTE *)v34 = v35;
      *(_BYTE *)(v34 + 1) = sub_99134(BYTE4(a5) >> 4);
      *(_BYTE *)(v34 + 2) = sub_99134(BYTE4(a5) & 0xF);
      *(_BYTE *)(v34 + 3) = 0;
    }
    else
    {
      if ( (_DWORD)a5 )
        v46 = &word_3DDC78;
      else
        v46 = &word_3FD7C8;
      *(_WORD *)v34 = *v46;
    }
    sub_1E7DEC((const char *)v34);
LABEL_13:
    v21 = off_489AF8(&dword_4899A0);
    if ( v21 )
      v21 = sub_232914(1);
    result = sub_232950(v21);
    if ( !result )
      v7[7] = 1;
    return result;
  }
  if ( sub_98F78(&qword_46BBCC, &v49) || sub_98FB8(&v49) )
  {
    v52 = dword_4878EC;
    v53 = qword_4878F0;
    v23 = sub_23E408(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
    result = ((int (__fastcall *)(int))loc_1E38EC)(v23);
  }
  else
  {
    v54 = v49;
    v55 = v50;
    v56 = v51;
    v36 = sub_23E408(v49, v50, v51);
    result = ((int (__fastcall *)(int))loc_1E38EC)(v36);
  }
  *(_QWORD *)(result + 76) = a5;
  return result;
}
