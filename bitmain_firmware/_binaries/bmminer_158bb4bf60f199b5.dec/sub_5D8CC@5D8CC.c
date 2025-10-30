void __fastcall sub_5D8CC(int a1, _DWORD *a2, _DWORD *a3, int a4, const char *a5)
{
  double *v9; // r4
  int v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r1
  unsigned int v14; // kr00_4
  unsigned int v15; // r2
  unsigned int v16; // r1
  double v17; // d6
  double v18; // d5
  double v19; // d7
  int v20; // r2
  const char *v21; // r9
  size_t v22; // r0
  size_t v23; // r8
  char *v24; // r7
  int v25; // r6
  int v26; // r2
  int v27; // r1
  double v28; // d6
  double v29; // d5
  double v30; // d7
  int v31; // r3
  time_t v32; // r0
  int v33; // r3
  int v34; // r3
  int v35; // r12
  int v36; // r3
  _DWORD *v37; // r0
  const char *v38; // r0
  int v39; // r3
  int v40; // r12
  char v41[20]; // [sp+20h] [bp-858h] BYREF
  char v42[2]; // [sp+34h] [bp-844h] BYREF
  _BYTE v43[30]; // [sp+36h] [bp-842h] BYREF
  char v44[36]; // [sp+54h] [bp-824h] BYREF
  char v45[2040]; // [sp+78h] [bp-800h] BYREF
  _DWORD savedregs[8]; // [sp+878h] [bp+0h] BYREF

  v9 = *(double **)(a4 + 260);
  v10 = *(_DWORD *)(sub_57BAC(*(_DWORD *)(a4 + 256)) + 36);
  if ( !a2 || *a2 != 5 && (!*(_BYTE *)(a4 + 324) || *a2 != 7) )
  {
    if ( !pthread_mutex_lock(&stru_246244) )
    {
      v11 = HIDWORD(qword_246368);
      v12 = qword_246368;
      ++*(_DWORD *)(v10 + 40);
      v14 = v12;
      v13 = v12 + 1;
      v15 = *((_DWORD *)v9 + 4);
      LODWORD(qword_246368) = v13;
      v16 = *((_DWORD *)v9 + 5);
      HIDWORD(qword_246368) = (__PAIR64__(v11, v14) + 1) >> 32;
      *((_DWORD *)v9 + 4) = v15 + 1;
      v17 = dbl_242F10;
      *((_DWORD *)v9 + 5) = (__PAIR64__(v16, v15) + 1) >> 32;
      *(double *)(v10 + 208) = *(double *)(v10 + 208) + *(double *)(a4 + 376);
      v18 = *(double *)(a4 + 376);
      v19 = v9[10] + v18;
      ++*((_DWORD *)v9 + 6);
      dbl_242F10 = v17 + v18;
      v9[10] = v19;
      if ( !pthread_mutex_unlock(&stru_246244) )
      {
        off_9E444();
        if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
        {
          strcpy(v45, "PROOF OF WORK RESULT: false (booooo)");
          sub_47AB4(7, v45, 0);
        }
        if ( byte_242EF8 || byte_24511C )
          goto LABEL_28;
        strcpy(v44, "reject");
        memset(&v44[7], (unsigned __int8)byte_24511C, 0x1Du);
        v42[0] = byte_24511C;
        if ( dword_242F4C > 1 )
          snprintf(v41, 0x14u, "pool %d", **(_DWORD **)(a4 + 260));
        else
          v41[0] = byte_24511C;
        if ( !*(_BYTE *)(a4 + 324) )
          a2 = (_DWORD *)sub_6DFCC(a1, "reject-reason");
        if ( a2 )
        {
          v21 = (const char *)sub_6E350(a2);
          v22 = strlen(v21);
          if ( v22 >= 0x1C )
            v23 = 28;
          else
            v23 = v22;
          *(_WORD *)v42 = 10272;
          v24 = (char *)savedregs + v23;
          sub_4C150(v43, v21, v23, (int)"cgminer.c", (int)"share_result", 3634);
          *(v24 - 2114) = 41;
          *(v24 - 2113) = 0;
          sub_4C150(&v44[7], v21, v23, (int)"cgminer.c", (int)"share_result", 3639);
          v44[6] = 58;
          *(v24 - 2077) = 0;
          goto LABEL_24;
        }
        if ( a3 )
          v36 = *(_BYTE *)(a4 + 284) & 1;
        else
          v36 = 0;
        if ( !v36 )
          goto LABEL_24;
        if ( *a3 == 1 )
        {
          v37 = (_DWORD *)sub_6E1C4(a3, 1);
          if ( !v37 || *v37 != 2 )
            goto LABEL_24;
        }
        else
        {
          if ( *a3 != 2 )
            goto LABEL_24;
          v37 = a3;
        }
        v38 = (const char *)sub_6E350(v37);
        snprintf(v42, 0x1Fu, " (%s)", v38);
LABEL_24:
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
        {
          snprintf(
            v45,
            0x800u,
            "Rejected %s %s %d %s%s %s%s version 0x%x",
            a5,
            *(const char **)(*(_DWORD *)(v10 + 4) + 8),
            *(_DWORD *)(v10 + 8),
            v41,
            v42,
            "",
            "",
            *(_DWORD *)(a4 + 444));
          sub_47AB4(5, v45, 0);
        }
        sub_5B390(v44, (_DWORD *)a4);
LABEL_28:
        v25 = *((_DWORD *)v9 + 6);
        if ( v25 > 10
          && !*(_BYTE *)(a4 + 281)
          && byte_246260
          && dword_2440F8 > 1
          && (double)v25 > sub_778B4(dword_245158, dword_24515C, v20, &dword_245158) / dbl_9ED68 * 60.0 * 3.0 )
        {
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
          {
            snprintf(v45, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *(_DWORD *)v9, v25);
            sub_47AB4(4, v45, 0);
          }
          if ( *((_DWORD *)v9 + 25) == 1 )
            --dword_2440F8;
          *((_DWORD *)v9 + 25) = 2;
          if ( v9 == (double *)sub_58084() )
            sub_59E6C(0);
          *((_DWORD *)v9 + 6) = 0;
        }
        return;
      }
      v39 = *_errno_location();
      v40 = 3594;
      goto LABEL_78;
    }
    v34 = *_errno_location();
    v35 = 3586;
LABEL_67:
    snprintf(v45, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v34, "cgminer.c", "share_result", v35);
    goto LABEL_68;
  }
  if ( pthread_mutex_lock(&stru_246244) )
  {
    v34 = *_errno_location();
    v35 = 3523;
    goto LABEL_67;
  }
  v26 = dword_245158;
  v27 = dword_24515C;
  ++*(_DWORD *)(v10 + 36);
  v28 = dbl_242EF0;
  *(_QWORD *)&dword_245158 = __PAIR64__(v27, v26) + 1;
  ++*((_QWORD *)v9 + 1);
  *(double *)(v10 + 200) = *(double *)(v10 + 200) + *(double *)(a4 + 376);
  v29 = *(double *)(a4 + 376);
  v30 = v9[9] + v29;
  dbl_242EF0 = v28 + v29;
  v9[9] = v30;
  if ( pthread_mutex_unlock(&stru_246244) )
  {
    v39 = *_errno_location();
    v40 = 3533;
LABEL_78:
    snprintf(v45, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v39, "cgminer.c", "share_result", v40);
LABEL_68:
    sub_47AB4(3, v45, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  v31 = *(_DWORD *)v9;
  *((_DWORD *)v9 + 6) = 0;
  *(_DWORD *)(v10 + 216) = v31;
  v32 = time(0);
  *(_DWORD *)(v10 + 220) = v32;
  v33 = (unsigned __int8)byte_1AECC5;
  *(_QWORD *)(v10 + 224) = *(_QWORD *)(a4 + 376);
  *((_DWORD *)v9 + 88) = v32;
  v9[45] = *(double *)(a4 + 376);
  if ( v33 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    strcpy(v45, "PROOF OF WORK RESULT: true (yay!!!)");
    sub_47AB4(7, v45, 0);
  }
  if ( !byte_242EF8 && !byte_24511C )
  {
    if ( dword_242F4C <= 1 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        snprintf(
          v45,
          0x800u,
          "Accepted %s %s %d %s%s",
          a5,
          *(const char **)(*(_DWORD *)(v10 + 4) + 8),
          *(_DWORD *)(v10 + 8),
          "",
          "");
        sub_47AB4(5, v45, 0);
      }
    }
    else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
    {
      snprintf(
        v45,
        0x800u,
        "Accepted %s %s %d pool %d %s%s",
        a5,
        *(const char **)(*(_DWORD *)(v10 + 4) + 8),
        *(_DWORD *)(v10 + 8),
        **(_DWORD **)(a4 + 260),
        "",
        "");
      sub_47AB4(5, v45, 0);
    }
  }
  sub_5B390("accept", (_DWORD *)a4);
  if ( dword_1AF124 && (double)dword_1AF124 <= dbl_242EF0 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(v45, 0x800u, "Successfully mined %d accepted shares as requested and exiting.", dword_1AF124);
      sub_47AB4(4, v45, 0);
    }
    sub_54D4C();
  }
  if ( *((_DWORD *)v9 + 25) == 2 )
  {
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3
      || (snprintf(v45, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *(_DWORD *)v9),
          sub_47AB4(4, v45, 0),
          *((_DWORD *)v9 + 25) != 1) )
    {
      *((_DWORD *)v9 + 25) = 1;
      ++dword_2440F8;
    }
    sub_59E6C(0);
  }
  if ( *(_BYTE *)(a4 + 283) )
    sub_54FC0();
}
