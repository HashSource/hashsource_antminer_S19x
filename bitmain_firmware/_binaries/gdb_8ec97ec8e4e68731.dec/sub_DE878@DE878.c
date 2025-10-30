int __fastcall sub_DE878(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r4
  __int64 v5; // r0
  int v6; // r3
  _DWORD *v7; // r3
  _DWORD *v8; // r3
  __int64 v9; // r2
  int v11; // r2
  _DWORD *v12; // r3
  _DWORD *v13; // r3
  _DWORD *v14; // r2
  bool v15; // zf
  char *v16; // r0
  char *v17; // [sp+30h] [bp-80h] BYREF
  int v18; // [sp+34h] [bp-7Ch] BYREF
  _DWORD *v19; // [sp+38h] [bp-78h] BYREF
  _DWORD *v20; // [sp+3Ch] [bp-74h] BYREF
  _DWORD *v21; // [sp+40h] [bp-70h] BYREF
  _DWORD *v22; // [sp+44h] [bp-6Ch] BYREF
  _DWORD *v23; // [sp+48h] [bp-68h] BYREF
  char v24[100]; // [sp+4Ch] [bp-64h] BYREF

  if ( a1[11] )
  {
    v17 = (char *)a1[11];
  }
  else
  {
    sub_946B0("Uploaded tracepoint %d has no source location, using raw address", *a1);
    v16 = sub_98B08(a1[2], a1[3]);
    sub_93170(v24, 0x64u, "*%s", v16);
    v17 = v24;
  }
  if ( a1[8] && !a1[12] )
    sub_946B0("Uploaded tracepoint %d condition has no source form, ignoring it", *a1);
  v2 = sub_19DBE0(&v18, &v17, off_46D5A4[0], 0);
  v3 = sub_B894C(v2);
  if ( sub_DA350(v3, v18, a1[12], -1, (int)v17, 0, 0, a1[1], 0, dword_4788B0, (int)&unk_4785BC) )
  {
    v4 = dword_478348;
    HIDWORD(v5) = dword_478898;
    if ( dword_478348 )
    {
      while ( (unsigned int)(*(_DWORD *)(v4 + 12) - 27) > 2 || dword_478898 != *(_DWORD *)(v4 + 24) )
      {
        v4 = *(_DWORD *)(v4 + 8);
        if ( !v4 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v5 = sub_94700(
             (int)"breakpoint.c",
             14838,
             "%s: Assertion `%s' failed.",
             "tracepoint* create_tracepoint_from_upload(uploaded_tp*)",
             "tp != NULL");
    }
    v6 = a1[6];
    if ( v6 > 0 )
    {
      sub_93170(v24, 0x64u, "%d %d", v6, HIDWORD(v5));
      sub_D1AEC(v24, 0, v11);
    }
    v7 = (_DWORD *)a1[13];
    if ( v7 && *v7 )
    {
      dword_47834C = (int)a1;
      v19 = 0;
      dword_478350 = 0;
      sub_57F2C(&v20, (int (__fastcall *)(int))sub_C6D50, 1, 0, 0);
      v13 = v19;
      v14 = v20;
      v20 = 0;
      v15 = v19 == 0;
      v19 = v14;
      if ( !v15 )
      {
        v22 = v13;
        sub_57E18(&v22);
        if ( v20 )
        {
          v21 = v20;
          sub_57E18(&v21);
        }
      }
      sub_DD974((_DWORD *)v4, (int *)&v19);
      if ( v19 )
      {
        v23 = v19;
        sub_57E18(&v23);
      }
    }
    else
    {
      v8 = (_DWORD *)a1[9];
      if ( v8 && *v8 || (v12 = (_DWORD *)a1[10]) != 0 && *v12 )
        sub_946B0("Uploaded tracepoint %d actions have no source form, ignoring them", *a1);
    }
    v9 = *((_QWORD *)a1 + 8);
    *(_DWORD *)(v4 + 120) = a1[14];
    *(_QWORD *)(v4 + 152) = v9;
  }
  else
  {
    v4 = 0;
  }
  if ( v18 )
    ((void (__fastcall *)(int *))loc_19D154)(&v18);
  return v4;
}
