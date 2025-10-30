int __fastcall sub_246BB4(
        int a1,
        int a2,
        char *s1,
        void *a4,
        int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 *a8)
{
  int v9; // r1
  unsigned __int64 v10; // r10
  int v11; // r0
  int v12; // r7
  int v13; // r0
  unsigned int v14; // r8
  unsigned __int64 v15; // r0
  unsigned __int16 v16; // r12
  int v17; // r2
  bool v18; // cc
  _BOOL4 v19; // r12
  int result; // r0
  unsigned __int64 v21; // r8
  bool v22; // cc
  __int64 v23; // r2
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // [sp+18h] [bp-34h]
  char v27; // [sp+3Dh] [bp-Fh] BYREF
  unsigned __int16 v28; // [sp+3Eh] [bp-Eh] BYREF
  unsigned __int64 buf; // [sp+40h] [bp-Ch] BYREF

  if ( a2 == 11 )
  {
    result = strcmp(s1, "target.xml");
    if ( !result )
    {
      if ( !a4 )
        sub_946E0("tfile_xfer_partial: tdesc is read-only");
      LODWORD(v23) = dword_48A5C0;
      if ( dword_48A5C0 )
      {
        HIDWORD(v23) = 0;
        if ( a6 < (unsigned int)dword_48A5C0 )
        {
          v24 = v23 - a6;
          if ( v23 - a6 > a7 )
            v24 = a7;
          memcpy(a4, (const void *)(dword_48A5B8 + a6), v24);
          *a8 = v24;
          return 1;
        }
        return result;
      }
    }
    return -1;
  }
  if ( a2 != 2 )
    return -1;
  if ( !a4 )
    sub_946E0("tfile_xfer_partial: trace file is read-only");
  if ( sub_24B59C(a1) == -1 )
    return sub_95D4C(a4, a6, a7, (int)a8);
  v9 = 0;
  v25 = 0;
  while ( 1 )
  {
    v27 = 77;
    v11 = sub_246544((int (__fastcall *)(_DWORD, int))sub_245D38, v9, (int)&v27);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = sub_16F654(v11);
    v14 = ((int (__fastcall *)(int))loc_165BB8)(v13);
    sub_2464F8(&buf, 8);
    LODWORD(v15) = sub_15C250((unsigned __int8 *)&buf, 8, v14);
    buf = v15;
    sub_2464F8(&v28, 2);
    v16 = sub_15C250((unsigned __int8 *)&v28, 2, v14);
    v17 = v16;
    v18 = HIDWORD(buf) > HIDWORD(a6);
    v28 = v16;
    if ( HIDWORD(buf) == HIDWORD(a6) )
      v18 = (unsigned int)buf > (unsigned int)a6;
    if ( v18 )
    {
      if ( buf < a7 + a6 )
      {
        v19 = buf < v25;
        if ( !v25 )
          v19 = 1;
        if ( v19 )
          v25 = buf;
      }
    }
    else
    {
      v10 = v16 + buf;
      if ( v10 > a6 )
      {
        v21 = a7;
        v22 = HIDWORD(a7) > (unsigned int)(v10 - a6);
        if ( HIDWORD(a7) == (_DWORD)v10 - (_DWORD)a6 )
          v22 = (unsigned int)a7 > (int)v10 - (int)a6;
        if ( v22 )
        {
          LODWORD(v21) = v10 - a6;
          HIDWORD(v21) = v10 - a6;
        }
        if ( buf != a6 )
          lseek64(dword_46DCEC);
        sub_2464F8(a4, v21);
        *a8 = v21;
        return 1;
      }
    }
    v9 = v17 + 10 + v12;
  }
  if ( v25 > a6 && a7 > v25 - a6 )
    a7 = v25 - a6;
  result = sub_95464(a4, a6, a7, a8);
  if ( result != 1 )
  {
    result = 2;
    *a8 = a7;
  }
  return result;
}
