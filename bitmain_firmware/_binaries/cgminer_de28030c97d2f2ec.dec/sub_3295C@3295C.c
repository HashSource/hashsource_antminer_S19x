void __fastcall sub_3295C(int a1, _DWORD *a2, _DWORD *a3, int a4, const char *a5, char a6, const char *a7)
{
  const char *v7; // r3
  const char *v8; // r3
  int v9; // r0
  const char *v10; // r3
  char v15[2]; // [sp+30h] [bp-884h] BYREF
  __int16 v16; // [sp+32h] [bp-882h] BYREF
  char v17[36]; // [sp+50h] [bp-864h] BYREF
  char v18[2048]; // [sp+74h] [bp-840h] BYREF
  char s[20]; // [sp+874h] [bp-40h] BYREF
  double v20; // [sp+888h] [bp-2Ch]
  const char *v21; // [sp+894h] [bp-20h]
  const char *v22; // [sp+898h] [bp-1Ch]
  _DWORD *v23; // [sp+89Ch] [bp-18h]
  char *v24; // [sp+8A0h] [bp-14h]
  int v25; // [sp+8A4h] [bp-10h]
  _DWORD *v26; // [sp+8A8h] [bp-Ch]
  size_t v27; // [sp+8ACh] [bp-8h]

  v26 = *(_DWORD **)(a4 + 260);
  v25 = sub_2EF64(*(_DWORD *)(a4 + 256));
  if ( a2 && *a2 == 5 || *(_BYTE *)(a4 + 324) && a2 && *a2 == 7 )
  {
    sub_2E354(&stru_91F5C, "cgminer.c", "share_result", 3591);
    ++*(_DWORD *)(v25 + 36);
    ++*(_QWORD *)&dbl_920B8;
    ++*((_QWORD *)v26 + 1);
    *(double *)(v25 + 200) = *(double *)(v25 + 200) + *(double *)(a4 + 376);
    dbl_940F0 = *(double *)(a4 + 376) + dbl_940F0;
    *((double *)v26 + 9) = *((double *)v26 + 9) + *(double *)(a4 + 376);
    sub_2E484(&stru_91F5C, "cgminer.c", "share_result", 3601);
    v26[6] = 0;
    *(_DWORD *)(v25 + 216) = *v26;
    *(_DWORD *)(v25 + 220) = time(0);
    *(_QWORD *)(v25 + 224) = *(_QWORD *)(a4 + 376);
    v26[88] = *(_DWORD *)(v25 + 220);
    *((_QWORD *)v26 + 45) = *(_QWORD *)(a4 + 376);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v18, "PROOF OF WORK RESULT: true (yay!!!)");
      sub_1E4EC(7, v18, 0);
    }
    if ( byte_953FC != 1 && byte_95398 != 1 )
    {
      if ( dword_92028 <= 1 )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          if ( a6 )
            v8 = "(resubmit)";
          else
            v8 = byte_6F818;
          snprintf(
            v18,
            0x800u,
            "Accepted %s %s %d %s%s",
            a5,
            *(const char **)(*(_DWORD *)(v25 + 4) + 8),
            *(_DWORD *)(v25 + 8),
            v8,
            a7);
          sub_1E4EC(7, v18, 0);
        }
      }
      else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        if ( a6 )
          v7 = "(resubmit)";
        else
          v7 = byte_6F818;
        snprintf(
          v18,
          0x800u,
          "Accepted %s %s %d pool %d %s%s",
          a5,
          *(const char **)(*(_DWORD *)(v25 + 4) + 8),
          *(_DWORD *)(v25 + 8),
          **(_DWORD **)(a4 + 260),
          v7,
          a7);
        sub_1E4EC(7, v18, 0);
      }
    }
    sub_2F014("accept", (_DWORD *)a4);
    if ( dword_87FBC && (double)dword_87FBC <= dbl_940F0 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v18, 0x800u, "Successfully mined %d accepted shares as requested and exiting.", dword_87FBC);
        sub_1E4EC(4, v18, 0);
      }
      sub_35114();
    }
    if ( v26[25] == 2 )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v18, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *v26);
        sub_1E4EC(4, v18, 0);
      }
      sub_328B4((int)v26);
      v9 = sub_364AC(0);
    }
    if ( *(_BYTE *)(a4 + 283) )
      sub_37350(v9);
  }
  else
  {
    sub_2E354(&stru_91F5C, "cgminer.c", "share_result", 3654);
    ++*(_DWORD *)(v25 + 40);
    ++*(_QWORD *)&dbl_94180;
    ++*((_QWORD *)v26 + 2);
    *(double *)(v25 + 208) = *(double *)(v25 + 208) + *(double *)(a4 + 376);
    dbl_94178 = *(double *)(a4 + 376) + dbl_94178;
    *((double *)v26 + 10) = *((double *)v26 + 10) + *(double *)(a4 + 376);
    ++v26[6];
    sub_2E484(&stru_91F5C, "cgminer.c", "share_result", 3662);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v18, "PROOF OF WORK RESULT: false (booooo)");
      sub_1E4EC(7, v18, 0);
    }
    if ( byte_953FC != 1 && byte_95398 != 1 )
    {
      strcpy(v17, "reject");
      memset(&v17[7], 0, 0x1Du);
      v15[0] = 0;
      if ( dword_92028 <= 1 )
        s[0] = 0;
      else
        snprintf(s, 0x14u, "pool %d", **(_DWORD **)(a4 + 260));
      if ( *(_BYTE *)(a4 + 324) != 1 )
        a2 = (_DWORD *)sub_65FEC(a1, "reject-reason");
      if ( a2 )
      {
        v24 = (char *)sub_677D0(a2);
        v27 = strlen(v24);
        if ( v27 > 0x1C )
          v27 = 28;
        qmemcpy(v15, " (", sizeof(v15));
        sub_2BEFC(&v16, v24, v27, "cgminer.c", "share_result", 3702);
        v15[v27 + 2] = 41;
        v15[v27 + 3] = 0;
        sub_2BEFC(&v17[7], v24, v27, "cgminer.c", "share_result", 3707);
        v17[6] = 58;
        v17[v27 + 7] = 0;
      }
      else if ( *(_BYTE *)(a4 + 284) && a3 )
      {
        if ( *a3 == 1 )
        {
          v23 = (_DWORD *)sub_66B80(a3, 1);
          if ( v23 && *v23 == 2 )
          {
            v22 = (const char *)sub_677D0(v23);
            snprintf(v15, 0x1Fu, " (%s)", v22);
          }
        }
        else if ( *a3 == 2 )
        {
          v21 = (const char *)sub_677D0(a3);
          snprintf(v15, 0x1Fu, " (%s)", v21);
        }
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        if ( a6 )
          v10 = "(resubmit)";
        else
          v10 = byte_6F818;
        snprintf(
          v18,
          0x800u,
          "Rejected %s %s %d %s%s %s%s version 0x%x",
          a5,
          *(const char **)(*(_DWORD *)(v25 + 4) + 8),
          *(_DWORD *)(v25 + 8),
          s,
          v15,
          v10,
          a7,
          *(_DWORD *)(a4 + 444));
        sub_1E4EC(5, v18, 0);
      }
      sub_2F014(v17, (_DWORD *)a4);
    }
    if ( (int)v26[6] > 10 && *(_BYTE *)(a4 + 281) != 1 )
    {
      if ( byte_92060 )
      {
        if ( dword_940EC > 1 )
        {
          v20 = sub_68E84(LODWORD(dbl_920B8), HIDWORD(dbl_920B8)) / dbl_87478 * 60.0;
          if ( (double)(int)v26[6] > v20 * 3.0 && dword_940EC > 1 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
            {
              snprintf(v18, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *v26, v26[6]);
              sub_1E4EC(4, v18, 0);
            }
            sub_32908((int)v26);
            if ( (_DWORD *)sub_2F984() == v26 )
              sub_364AC(0);
            v26[6] = 0;
          }
        }
      }
    }
  }
}
