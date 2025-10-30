void __fastcall sub_3183C(int a1, _DWORD *a2, _DWORD *a3, int a4, const char *a5, char a6, const char *a7)
{
  const char *v7; // r3
  const char *v8; // r3
  int v9; // r0
  const char *v10; // r3
  char v15[2]; // [sp+38h] [bp-89Ch] BYREF
  __int16 v16; // [sp+3Ah] [bp-89Ah] BYREF
  char v17[36]; // [sp+58h] [bp-87Ch] BYREF
  char v18[2048]; // [sp+7Ch] [bp-858h] BYREF
  char s[20]; // [sp+87Ch] [bp-58h] BYREF
  double v20; // [sp+890h] [bp-44h]
  char *v21; // [sp+89Ch] [bp-38h]
  const char *v22; // [sp+8A0h] [bp-34h]
  const char *v23; // [sp+8A4h] [bp-30h]
  _DWORD *v24; // [sp+8A8h] [bp-2Ch]
  int v25; // [sp+8ACh] [bp-28h]
  _DWORD *v26; // [sp+8B0h] [bp-24h]
  size_t v27; // [sp+8B4h] [bp-20h]

  v26 = *(_DWORD **)(a4 + 260);
  v25 = sub_2DF58(*(_DWORD *)(a4 + 256));
  if ( a2 && *a2 == 5 || *(_BYTE *)(a4 + 324) && a2 && *a2 == 7 )
  {
    sub_2D2FC(&stru_90DC4, "cgminer.c", "share_result", 3591);
    ++*(_DWORD *)(v25 + 36);
    ++*(_QWORD *)&dword_90F20;
    ++*((_QWORD *)v26 + 1);
    *(double *)(v25 + 200) = *(double *)(v25 + 200) + *(double *)(a4 + 376);
    dbl_92F58 = *(double *)(a4 + 376) + dbl_92F58;
    *((double *)v26 + 9) = *((double *)v26 + 9) + *(double *)(a4 + 376);
    sub_2D434(&stru_90DC4, "cgminer.c", "share_result", 3601);
    v26[6] = 0;
    *(_DWORD *)(v25 + 216) = *v26;
    *(_DWORD *)(v25 + 220) = time(0);
    *(_QWORD *)(v25 + 224) = *(_QWORD *)(a4 + 376);
    v26[88] = *(_DWORD *)(v25 + 220);
    *((_QWORD *)v26 + 45) = *(_QWORD *)(a4 + 376);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v18, "PROOF OF WORK RESULT: true (yay!!!)");
      sub_1DB6C(7, v18, 0);
    }
    if ( byte_94264 != 1 && byte_94200 != 1 )
    {
      if ( dword_90E90 <= 1 )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          if ( a6 )
            v8 = "(resubmit)";
          else
            v8 = byte_6E658;
          snprintf(
            v18,
            0x800u,
            "Accepted %s %s %d %s%s",
            a5,
            *(const char **)(*(_DWORD *)(v25 + 4) + 8),
            *(_DWORD *)(v25 + 8),
            v8,
            a7);
          sub_1DB6C(7, v18, 0);
        }
      }
      else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        if ( a6 )
          v7 = "(resubmit)";
        else
          v7 = byte_6E658;
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
        sub_1DB6C(7, v18, 0);
      }
    }
    sub_2E008("accept", (_DWORD *)a4);
    if ( dword_86E24 && (double)dword_86E24 <= dbl_92F58 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v18, 0x800u, "Successfully mined %d accepted shares as requested and exiting.", dword_86E24);
        sub_1DB6C(4, v18, 0);
      }
      sub_34098();
    }
    if ( v26[25] == 2 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v18, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *v26);
        sub_1DB6C(4, v18, 0);
      }
      sub_3178C((int)v26);
      v9 = sub_35460(0);
    }
    if ( *(_BYTE *)(a4 + 283) )
      sub_36334(v9);
  }
  else
  {
    sub_2D2FC(&stru_90DC4, "cgminer.c", "share_result", 3654);
    ++*(_DWORD *)(v25 + 40);
    ++*(_QWORD *)&dword_92FE8;
    ++*((_QWORD *)v26 + 2);
    *(double *)(v25 + 208) = *(double *)(v25 + 208) + *(double *)(a4 + 376);
    dbl_92FE0 = *(double *)(a4 + 376) + dbl_92FE0;
    *((double *)v26 + 10) = *((double *)v26 + 10) + *(double *)(a4 + 376);
    ++v26[6];
    sub_2D434(&stru_90DC4, "cgminer.c", "share_result", 3662);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v18, "PROOF OF WORK RESULT: false (booooo)");
      sub_1DB6C(7, v18, 0);
    }
    if ( byte_94264 != 1 && byte_94200 != 1 )
    {
      strcpy(v17, "reject");
      memset(&v17[7], 0, 0x1Du);
      v15[0] = 0;
      if ( dword_90E90 <= 1 )
        s[0] = 0;
      else
        snprintf(s, 0x14u, "pool %d", **(_DWORD **)(a4 + 260));
      if ( *(_BYTE *)(a4 + 324) != 1 )
        a2 = (_DWORD *)sub_652F0(a1, "reject-reason");
      if ( a2 )
      {
        v21 = (char *)sub_66AE0(a2);
        v27 = strlen(v21);
        if ( v27 > 0x1C )
          v27 = 28;
        qmemcpy(v15, " (", sizeof(v15));
        sub_2AF08(&v16, v21, v27, "cgminer.c", "share_result", 3702);
        v15[v27 + 2] = 41;
        v15[v27 + 3] = 0;
        sub_2AF08(&v17[7], v21, v27, "cgminer.c", "share_result", 3707);
        v17[6] = 58;
        v17[v27 + 7] = 0;
      }
      else if ( *(_BYTE *)(a4 + 284) && a3 )
      {
        if ( *a3 == 1 )
        {
          v24 = (_DWORD *)sub_65E88(a3, 1);
          if ( v24 && *v24 == 2 )
          {
            v23 = (const char *)sub_66AE0(v24);
            snprintf(v15, 0x1Fu, " (%s)", v23);
          }
        }
        else if ( *a3 == 2 )
        {
          v22 = (const char *)sub_66AE0(a3);
          snprintf(v15, 0x1Fu, " (%s)", v22);
        }
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        if ( a6 )
          v10 = "(resubmit)";
        else
          v10 = byte_6E658;
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
        sub_1DB6C(5, v18, 0);
      }
      sub_2E008(v17, (_DWORD *)a4);
    }
    if ( (int)v26[6] > 10 && *(_BYTE *)(a4 + 281) != 1 )
    {
      if ( byte_90EC8 )
      {
        if ( dword_92F54 > 1 )
        {
          v20 = sub_68214(dword_90F20, dword_90F24) / dbl_862E0 * 60.0;
          if ( (double)(int)v26[6] > v20 * 3.0 && dword_92F54 > 1 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
            {
              snprintf(v18, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *v26, v26[6]);
              sub_1DB6C(4, v18, 0);
            }
            sub_317E4((int)v26);
            if ( v26 == (_DWORD *)sub_2E98C() )
              sub_35460(0);
            v26[6] = 0;
          }
        }
      }
    }
  }
}
