void __fastcall sub_6598C(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  char *v5; // r4
  int v6; // r6
  int v7; // r0
  int *v8; // r8
  int v9; // r3
  int v10; // r3
  _QWORD *v11; // r7
  int v12; // r0
  int v13; // r3
  int v14; // r9
  int v15; // r1
  int v16; // r0
  const char *v17; // r2
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r11
  _DWORD *v25; // r2
  void (__fastcall *v26)(_DWORD, _DWORD, _DWORD); // r3
  const char *v27; // r0
  int v28; // r1
  const char *v29; // r5
  _BOOL4 v30; // r0
  int v31; // r3
  int v32; // r1
  _BOOL4 v33; // r0
  int v34; // r11
  int v35; // r0
  int *v36; // r0
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r11
  char *v43; // r0
  int v44; // [sp+8h] [bp-54h]
  int v45; // [sp+Ch] [bp-50h]
  int v46; // [sp+10h] [bp-4Ch]
  int v47; // [sp+14h] [bp-48h]
  char *v48; // [sp+18h] [bp-44h]
  __int64 v49; // [sp+20h] [bp-3Ch] BYREF
  void *ptr; // [sp+28h] [bp-34h] BYREF
  int v51; // [sp+2Ch] [bp-30h] BYREF
  _DWORD v52[3]; // [sp+30h] [bp-2Ch] BYREF
  char *v53; // [sp+3Ch] [bp-20h] BYREF
  char *v54; // [sp+40h] [bp-1Ch]
  int v55; // [sp+44h] [bp-18h]
  char v56; // [sp+48h] [bp-14h] BYREF

  if ( !a1 )
    sub_2446B8(0, a2);
  v3 = off_489AD0();
  v4 = sub_92E28(v3);
  sub_69500(&v53, a1, &ptr);
  v5 = v53;
  sub_92E40(v4);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 + 3);
    v7 = dword_4878EC;
    v52[0] = dword_4878EC;
    v52[1] = dword_4878F0;
    v52[2] = dword_4878F4;
    if ( v6 )
    {
      v8 = *(int **)(v6 + 16);
      if ( v8 )
      {
        v9 = *v8;
        v6 = 1;
        *v8 = 1;
        v47 = v9;
      }
      else
      {
        v6 = 0;
        v47 = 0;
      }
    }
    else
    {
      v47 = 0;
      v8 = 0;
    }
    v10 = dword_474880;
    *((_DWORD *)v5 + 2) = ptr;
    if ( v10 )
    {
      v11 = (_QWORD *)sub_9836C(24);
      *v11 = 0;
      v11[1] = 0;
      v11[2] = 0;
      *((_DWORD *)v5 + 4) = v11;
      sub_33B25C(&v49);
      *v11 = v49;
      v7 = sub_997A4(v11 + 1, v11 + 2);
    }
    v44 = sub_92E28(v7);
    v46 = *(_DWORD *)sub_242FDC(v44);
    v12 = sub_191770();
    v13 = dword_474880;
    v14 = v12;
    v15 = *(_DWORD *)v5;
    v16 = dword_474874;
    v17 = (const char *)*((_DWORD *)v5 + 2);
    if ( dword_474880 )
      v13 = *((_DWORD *)v5 + 4);
    v45 = dword_474874;
    dword_474874 = *((_DWORD *)v5 + 2);
    if ( dword_474880 )
      dword_474868 = v13;
    dword_46BA08 = 0;
    dword_474884 = 0;
    if ( v15 )
    {
      if ( v15 != 1 )
        goto LABEL_17;
      v18 = (_DWORD *)sub_242FC8(v16);
      sub_2594B0(*v18, "%s\n", *((const char **)v5 + 1));
      v53 = "console";
      v54 = (char *)*((_DWORD *)v5 + 1);
      sub_62630((int)"-interpreter-exec", (const char **)&v53, 2);
      if ( !sub_191740("mi") && !sub_191740("mi1") && !sub_191740("mi2") && !sub_191740("mi3") )
        goto LABEL_17;
      if ( dword_46BA08 )
      {
LABEL_16:
        sub_690C0(v46);
        goto LABEL_17;
      }
      sub_256850(*((_DWORD *)v5 + 2), *(_DWORD *)(v14 + 36));
      sub_256850("^done", *(_DWORD *)(v14 + 36));
LABEL_42:
      sub_690A8(v46, *(_DWORD *)(v14 + 36));
      sub_690C0(v46);
      v28 = *(_DWORD *)(v14 + 36);
      if ( dword_474880 )
      {
        sub_62F80(*(_DWORD *)(v14 + 36));
        v28 = *(_DWORD *)(v14 + 36);
      }
      sub_256850(&word_356638, v28);
LABEL_17:
      dword_474874 = v45;
      v19 = sub_92E40(v44);
      v20 = sub_D4120(v19);
      v21 = sub_191AC0(v20);
      v22 = sub_191664(v21);
      if ( !sub_2573F0(v22) || !sub_23E4F8() )
        goto LABEL_18;
      v29 = (const char *)*((_DWORD *)v5 + 1);
      if ( *(_DWORD *)v5 == 1 )
      {
        if ( !strncmp(*((const char **)v5 + 1), "thread ", 7u) )
          goto LABEL_18;
      }
      else
      {
        if ( strcmp(*((const char **)v5 + 1), "interpreter-exec") || *((int *)v5 + 7) <= 1 )
        {
          v30 = strcmp(v29, "thread-select") == 0;
LABEL_64:
          if ( !v30 )
          {
            sub_191AC0(0);
            LOWORD(v32) = (unsigned __int16)&dword_475848;
            if ( *((_DWORD *)v5 + 10) == -1 )
            {
              HIWORD(v32) = (unsigned int)&dword_475848 >> 16;
              if ( !sub_98F78(v52, v32) && !sub_98F78(&dword_4878EC, v52) )
              {
                v33 = sub_98F78(&dword_4878EC, &dword_475848) == 0;
LABEL_68:
                if ( v33 )
                  sub_1BABB4(12);
              }
            }
            else
            {
              HIWORD(v32) = (unsigned int)&dword_475848 >> 16;
              if ( !sub_98F78(&dword_4878EC, v32) )
              {
                v33 = *(_DWORD *)(((int (*)(void))loc_23DBE4)() + 20) != *((_DWORD *)v5 + 10);
                goto LABEL_68;
              }
            }
          }
LABEL_18:
          if ( v6 )
          {
            if ( v8 )
              *v8 = v47;
          }
          sub_694B8(v5);
          sub_33AC04(v5);
          return;
        }
        v29 = *(const char **)(*((_DWORD *)v5 + 6) + 4);
        if ( !strncmp(v29, "thread ", 7u) )
          goto LABEL_18;
      }
      v30 = strncmp(v29, "inferior ", 9u) == 0;
      goto LABEL_64;
    }
    if ( dword_474870 )
      sub_2594B0(
        *(_DWORD *)(v14 + 36),
        " token=`%s' command=`%s' args=`%s'\n",
        v17,
        *((const char **)v5 + 1),
        *((const char **)v5 + 5));
    sub_24343C(&v51);
    v23 = *((_DWORD *)v5 + 9);
    if ( *((_DWORD *)v5 + 8) )
    {
      if ( v23 != -1 )
        sub_946E0("Cannot specify --thread-group together with --all");
      if ( *((_DWORD *)v5 + 10) != -1 )
        sub_946E0("Cannot specify --thread together with --all");
      if ( *((_DWORD *)v5 + 11) == -1 )
        goto LABEL_28;
LABEL_57:
      sub_946E0("Cannot specify --frame without --thread");
    }
    v31 = *((_DWORD *)v5 + 10);
    if ( v23 == -1 )
    {
      if ( *((_DWORD *)v5 + 11) == -1 )
      {
        if ( v31 == -1 )
        {
LABEL_28:
          v24 = *((_DWORD *)v5 + 12);
          if ( v24 )
          {
            v48 = off_46D5A4[0][2];
            sub_194204(*((_DWORD *)v5 + 12));
            v24 = 1;
          }
          else
          {
            v48 = 0;
          }
          v25 = (_DWORD *)*((_DWORD *)v5 + 3);
          dword_47486C = (int)v5;
          v26 = (void (__fastcall *)(_DWORD, _DWORD, _DWORD))v25[3];
          if ( v26 )
          {
            v26(*((_DWORD *)v5 + 1), *((_DWORD *)v5 + 6), *((_DWORD *)v5 + 7));
          }
          else
          {
            v43 = (char *)v25[1];
            if ( !v43 )
            {
              sub_256760(&v53);
              v54 = &v56;
              v53 = (char *)&off_3F2924;
              v55 = 0;
              v56 = 0;
              sub_60124((int)&v53, "Undefined mi command: ");
              sub_2567BC(&v53, *((_DWORD *)v5 + 1), 34);
              sub_60124((int)&v53, " (missing implementation)");
              sub_258A0C(&v53);
            }
            sub_63680(v43, v25[2], *((int **)v5 + 5));
          }
          if ( v24 )
            sub_194204(v48);
          if ( v51 )
            sub_26C300(v51);
          if ( dword_46BA08 )
            goto LABEL_16;
          sub_256850(*((_DWORD *)v5 + 2), *(_DWORD *)(v14 + 36));
          if ( !strcmp(*((const char **)v5 + 1), "target-select") )
            v27 = "^connected";
          else
            v27 = "^done";
          sub_256850(v27, *(_DWORD *)(v14 + 36));
          goto LABEL_42;
        }
      }
      else if ( v31 == -1 )
      {
        goto LABEL_57;
      }
    }
    else
    {
      if ( v31 != -1 )
        sub_946E0("Cannot specify --thread together with --thread-group");
      if ( *((_DWORD *)v5 + 11) != -1 )
        goto LABEL_57;
      v34 = sub_1839F8(v23);
      if ( !v34 )
        sub_946E0("Invalid thread group for the --thread-group option");
      ((void (*)(void))loc_183698)();
      if ( *(_DWORD *)(v34 + 12) && (v35 = ((int (*)(void))loc_23E7D8)()) != 0 )
        v36 = (int *)(v35 + 8);
      else
        v36 = &dword_475848;
      sub_23F9F0(*v36, v36[1], v36[2]);
      v37 = ((int (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v34 + 36));
      v31 = *((_DWORD *)v5 + 10);
      if ( v31 == -1 )
      {
LABEL_77:
        if ( *((_DWORD *)v5 + 11) != -1 )
        {
          v53 = (char *)*((_DWORD *)v5 + 11);
          v39 = sub_15F70C(v37, v38);
          v40 = sub_20F3B0(v39, &v53);
          if ( v53 )
            sub_946E0("Invalid frame id: %d", v53);
          sub_15E10C(v40);
        }
        goto LABEL_28;
      }
    }
    v41 = (_DWORD *)sub_23E3C4(v31);
    if ( !v41 )
      sub_946E0("Invalid thread id: %d", *((_DWORD *)v5 + 10));
    v42 = v41 + 2;
    if ( sub_23F1C4(v41[2], v41[3], v41[4]) )
      sub_946E0("Thread id: %d has terminated", *((_DWORD *)v5 + 10));
    v37 = sub_23F9F0(*v42, v42[1], v42[2]);
    goto LABEL_77;
  }
}
