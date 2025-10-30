int __fastcall sub_187570(int a1)
{
  __int64 *v1; // r10
  int v2; // r11
  __int64 v4; // r0
  int v5; // r3
  int v6; // r7
  int v7; // r4
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r3
  int v12; // r9
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r3
  int v16; // r8
  int v17; // r3
  int v18; // r0
  _DWORD *v19; // r0
  __int64 v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r3
  int v24; // r3
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // r0
  int v29; // r2
  int v30; // r3
  int v31; // r2
  int v32; // r2
  __int64 v33; // r0
  int v34; // r2
  int v36; // [sp+8h] [bp-74h]
  int v37; // [sp+Ch] [bp-70h]
  int v38; // [sp+14h] [bp-68h] BYREF
  __int64 v39; // [sp+18h] [bp-64h]
  int v40; // [sp+20h] [bp-5Ch]
  __int64 v41; // [sp+24h] [bp-58h]
  int v42; // [sp+2Ch] [bp-50h]
  int v43; // [sp+30h] [bp-4Ch]
  __int64 v44; // [sp+34h] [bp-48h]
  int v45; // [sp+3Ch] [bp-40h]
  int v46; // [sp+40h] [bp-3Ch]
  int v47; // [sp+44h] [bp-38h]
  int v48; // [sp+48h] [bp-34h]
  _DWORD s[12]; // [sp+4Ch] [bp-30h] BYREF

  LODWORD(v4) = sub_183688();
  v5 = *(_DWORD *)(v4 + 124);
  if ( v5 )
  {
    v6 = *(unsigned __int8 *)(v5 + 132);
    v7 = v4;
    v38 = -1;
    if ( v6 )
    {
      *(_BYTE *)(v5 + 132) = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      memset(s, 0, 0x2Cu);
      v2 = dword_487D2C;
      if ( a1 )
      {
        memset(&s[1], 0, 0x24u);
        s[0] = dword_487D2C;
        ((void (__fastcall *)(_DWORD *))loc_23FF20)(&s[1]);
        v6 = 0;
        v2 = 0;
        v1 = 0;
        LOBYTE(s[10]) = 1;
        v37 = 0;
        v36 = 0;
      }
      else
      {
        v44 = qword_4878EC;
        v45 = dword_4878F4;
        v1 = &qword_4878EC;
        v36 = sub_183688();
        v37 = 1;
      }
      v8 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_23E7D8)(*(_DWORD *)(*(_DWORD *)(v7 + 124) + 12));
      v9 = sub_23F9F0(v8[2], v8[3], v8[4]);
      v10 = *(_DWORD *)(v7 + 32);
      v11 = dword_487930;
      v12 = *(_DWORD *)(v7 + 36);
      *(_DWORD *)(v7 + 32) = 0;
      *(_DWORD *)(v7 + 36) = 0;
      if ( v11 || dword_48A514 )
      {
        v13 = sub_22F048(v9);
        v14 = (_DWORD *)sub_242FC8(v13);
        if ( a1 )
          sub_25A418(
            *v14,
            "Detaching vfork parent process %d after child exec.\n",
            *(_DWORD *)(*(_DWORD *)(v7 + 124) + 12));
        else
          sub_25A418(
            *v14,
            "Detaching vfork parent process %d after child exit.\n",
            *(_DWORD *)(*(_DWORD *)(v7 + 124) + 12));
      }
      LODWORD(v4) = sub_230848(0, 0);
      v15 = LOBYTE(s[10]);
      *(_DWORD *)(v7 + 36) = v12;
      *(_DWORD *)(v7 + 32) = v10;
      if ( v15 )
      {
        LOBYTE(s[10]) = 0;
        ((void (__fastcall *)(_DWORD *))loc_23FC8C)(&s[1]);
        LODWORD(v4) = ((int (__fastcall *)(_DWORD))loc_1CD290)(s[0]);
      }
      if ( v6 )
      {
        ((void (__fastcall *)(int))loc_183698)(v36);
        LODWORD(v4) = ((int (__fastcall *)(int))loc_1CD290)(v2);
        if ( v1 )
        {
          v4 = v44;
          v32 = v45;
          *v1 = v44;
          *((_DWORD *)v1 + 2) = v32;
        }
      }
      v16 = *(_DWORD *)(v7 + 36);
    }
    else if ( a1 )
    {
      v27 = sub_1CD1E8();
      v28 = sub_1CD220(v27);
      v29 = *(_DWORD *)(v28 + 20);
      *(_DWORD *)(v7 + 36) = v28;
      *(_BYTE *)(v7 + 28) = 1;
      *(_DWORD *)(v7 + 32) = v29;
      LODWORD(v4) = ((int (*)(void))loc_1CD290)();
      v30 = *(_DWORD *)(v7 + 124);
      v16 = *(_DWORD *)(v7 + 36);
      v31 = *(_DWORD *)(v30 + 12);
      *(_DWORD *)(v30 + 128) = 0;
      v38 = v31;
    }
    else
    {
      v20 = qword_475848;
      v21 = dword_475850;
      *(_DWORD *)(v7 + 32) = 0;
      *(_DWORD *)(v7 + 36) = 0;
      v41 = v20;
      v42 = v21;
      v39 = v20;
      v40 = v21;
      v44 = qword_4878EC;
      v45 = dword_4878F4;
      qword_4878EC = v20;
      dword_4878F4 = v21;
      v22 = sub_1CD1E8();
      v16 = sub_1CD220(v22);
      ((void (*)(void))loc_1CD290)();
      v23 = *(_DWORD *)(v7 + 124);
      *(_DWORD *)(v7 + 160) = 16;
      *(_BYTE *)(v7 + 28) = 1;
      sub_1CD2E8(v16, *(_DWORD *)(v23 + 36));
      v24 = *(_DWORD *)(v7 + 124);
      v4 = v44;
      v25 = v45;
      *(_DWORD *)(v7 + 32) = *(_DWORD *)(v16 + 20);
      *(_DWORD *)(v7 + 36) = v16;
      *(_DWORD *)(v24 + 128) = 0;
      v26 = *(_DWORD *)(v24 + 12);
      qword_4878EC = v4;
      dword_4878F4 = v25;
      v38 = v26;
    }
    v17 = dword_487D2C;
    *(_DWORD *)(v7 + 124) = 0;
    if ( v17 != v16 )
    {
      v33 = sub_94700(
              (int)"infrun.c",
              1038,
              "%s: Assertion `%s' failed.",
              "void handle_vfork_child_exec_or_exit(int)",
              "current_program_space == inf->pspace");
      if ( LOBYTE(s[10]) )
      {
        LOBYTE(s[10]) = 0;
        ((void (__fastcall *)(_DWORD *, _DWORD))loc_23FC8C)(&s[1], HIDWORD(v33));
        LODWORD(v33) = ((int (__fastcall *)(_DWORD))loc_1CD290)(s[0]);
      }
      if ( v37 )
      {
        ((void (__fastcall *)(int))loc_183698)(v36);
        LODWORD(v33) = ((int (__fastcall *)(int))loc_1CD290)(v2);
        if ( v1 )
        {
          v33 = v44;
          v34 = v45;
          *v1 = v44;
          *((_DWORD *)v1 + 2) = v34;
        }
      }
      sub_338FFC(v33);
    }
    if ( dword_487950 && v38 != -1 )
    {
      v18 = ((int (__fastcall *)(_DWORD *))loc_23FF20)(s);
      if ( dword_487930 )
      {
        v19 = (_DWORD *)sub_242FC8(v18);
        sub_2594B0(*v19, "infrun: resuming vfork parent process %d\n", v38);
      }
      sub_23E4A0(sub_18C0BC, &v38);
      LODWORD(v4) = ((int (__fastcall *)(_DWORD *))loc_23FC8C)(s);
    }
  }
  return v4;
}
