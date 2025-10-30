int __fastcall sub_259F4C(char *a1, int a2, void *a3)
{
  int v3; // r6
  int v4; // r9
  int v5; // r11
  const char *v6; // r5
  const char *v7; // r4
  int *v10; // r0
  int *v11; // r0
  const char *v13; // r3
  const char *v14; // r2
  const char *v15; // r0
  int (*v16)(); // r0
  __int64 v17; // kr00_8
  unsigned int v18; // r10
  _BOOL4 v19; // r10
  int *v20; // r0
  unsigned __int8 *v21; // r0
  __int64 v23; // [sp+20h] [bp-4Ch] BYREF
  _DWORD v24[3]; // [sp+28h] [bp-44h] BYREF
  int v25; // [sp+34h] [bp-38h]
  void *v26; // [sp+38h] [bp-34h] BYREF
  char v27; // [sp+40h] [bp-2Ch] BYREF
  void *ptr; // [sp+50h] [bp-1Ch] BYREF
  char v29; // [sp+58h] [bp-14h] BYREF

  LOWORD(v6) = (unsigned __int16)"n";
  if ( a2 )
  {
    v7 = (const char *)&unk_3F3498;
    HIWORD(v6) = (unsigned int)"n" >> 16;
    if ( a2 == 121 )
    {
      v5 = 78;
    }
    else
    {
      v6 = (const char *)&unk_3F349C;
      v7 = "y";
    }
    if ( a2 == 121 )
      v4 = 89;
    else
      v5 = 89;
    if ( a2 == 121 )
      v3 = 1;
    else
      v4 = 78;
    if ( a2 != 121 )
      v3 = 0;
  }
  else
  {
    v7 = "y";
    HIWORD(v6) = (unsigned int)"n" >> 16;
    v5 = 78;
    v4 = 89;
    v3 = 1;
  }
  if ( dword_46DCE4 && !dword_48A510 )
  {
    if ( *(_DWORD *)(dword_487668 + 48) == *(_DWORD *)(dword_487668 + 44)
      && sub_244AAC(dword_487668)
      && dword_487668 == dword_48768C )
    {
      if ( off_48A580 )
      {
        ptr = (void *)dword_46DC04;
        v3 = off_48A580(a1, a3);
        if ( ptr != (void *)1 )
        {
          if ( ptr )
          {
            if ( ptr != (void *)2 )
              return v3;
            goto LABEL_20;
          }
          goto LABEL_18;
        }
LABEL_30:
        sub_22F048();
        return v3;
      }
      sub_93244((char **)&v26, a1, a3);
      if ( dword_48968C <= 1 )
      {
        v14 = "";
        v13 = (const char *)v26;
        v15 = "";
      }
      else
      {
        v13 = (const char *)v26;
        v14 = (const char *)&unk_3F34A0;
        v15 = (const char *)&unk_3F34B0;
      }
      sub_931D8((char **)&ptr, "%s%s(%s or %s) %s", v14, v13, v7, v6, v15);
      sub_33B25C(&v23);
      v16 = off_46D458;
      v24[1] = &off_46D458;
      off_46D458 = sub_153AE0;
      v24[0] = dword_46DC04;
      v24[2] = v16;
      v25 = 0;
      v17 = v23;
      sub_22EFF4();
      sub_1541A4(dword_487668);
      if ( !*(_DWORD *)(dword_487668 + 68) )
        v25 = dword_487668;
      while ( 1 )
      {
        v20 = (int *)sub_242F8C();
        sub_25680C(*v20);
        v21 = (unsigned __int8 *)sub_243CB4((char *)ptr);
        if ( !v21 )
        {
          sub_259F10("EOF [assumed %c]\n", v4);
          goto LABEL_47;
        }
        v18 = *v21;
        free(v21);
        if ( v18 > 0x60 )
          v18 = (unsigned __int8)(v18 - 32);
        if ( v5 == v18 )
          break;
        if ( v4 == v18 )
          goto LABEL_47;
        v19 = v18 == 0;
        if ( !a2 )
          v19 = 0;
        if ( v19 )
          goto LABEL_47;
        sub_259F10("Please answer %s or %s.\n", v7, v6);
      }
      v3 ^= 1u;
LABEL_47:
      sub_33B25C(&v23);
      qword_48A9C8 += v23 - v17;
      if ( dword_48968C > 1 )
        sub_259F10(asc_3F3534);
      sub_25C45C(v24);
      if ( ptr != &v29 )
        sub_339E64(ptr);
      if ( v26 != &v27 )
        sub_339E64(v26);
    }
    else
    {
      ptr = (void *)dword_46DC04;
      sub_22F048();
      sub_259B58("");
      v10 = (int *)sub_242F8C();
      sub_259E84(*v10, a1, a3);
      sub_259F10("(%s or %s) [answered %c; input not from terminal]\n", v7, v6, v4);
      v11 = (int *)sub_242F8C();
      sub_25680C(*v11);
      if ( ptr == (void *)1 )
        goto LABEL_30;
      if ( !ptr )
      {
LABEL_18:
        sub_22EF7C();
        return v3;
      }
      if ( ptr == (void *)2 )
LABEL_20:
        sub_22EFF4();
    }
  }
  return v3;
}
