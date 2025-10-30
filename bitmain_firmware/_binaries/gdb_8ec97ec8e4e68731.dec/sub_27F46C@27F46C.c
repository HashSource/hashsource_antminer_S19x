int __fastcall sub_27F46C(int a1, int *a2, int a3)
{
  int v4; // r5
  int v6; // r2
  int *v7; // r10
  bool v8; // cf
  int v9; // r8
  _BOOL4 v10; // r3
  unsigned int v12; // r0
  int v13; // r1
  bool v14; // r2
  int v15; // r2
  int v16; // r8
  int *v17; // r0
  int v18; // r3
  _BOOL4 v19; // r2
  int v20; // r1
  int v21; // r3
  const char *v22; // r0
  size_t v23; // r0
  char *v24; // r0
  char *v25; // r0
  void (__fastcall *v26)(int, int); // r3
  int v27; // r3
  int v28; // r2
  int v29; // r0
  int v30; // r0
  int v31; // r0

  v4 = a1;
  if ( (unsigned int)(a1 - 128) <= 0x7F && dword_46DED8 )
  {
    if ( *((_BYTE *)a2 + 216) != 1 )
    {
      sub_2945C8();
      return 0;
    }
    if ( (dword_48AAA0 & 0x1000) != 0 )
      sub_292A08(27);
    v12 = v4 & 0xFFFFFF7F;
    v13 = a2[55];
    dword_48AADC += 2;
    return sub_27F874(v12, v13);
  }
  if ( (dword_48AAA0 & 0x1000) == 0 )
  {
    v6 = LOBYTE(a2[2 * a1]);
    v7 = &a2[2 * a1];
    v8 = v6 != 0;
    if ( v6 != 1 )
      goto LABEL_5;
    goto LABEL_20;
  }
  v7 = &a2[2 * a1];
  sub_292A08(a1);
  v6 = LOBYTE(a2[2 * v4]);
  v8 = v6 != 0;
  if ( v6 == 1 )
  {
LABEL_20:
    v13 = v7[1];
    if ( !v13 )
      goto LABEL_50;
    v14 = a2 == &dword_46DF10;
    if ( dword_46DED4 )
      v14 = 0;
    v15 = v4 == 27 && v14;
    if ( !v15 || (v31 = sub_292EE0(0), v13 = v7[1], v31) )
    {
      dword_4900CC = v13;
      ++dword_48AADC;
      if ( (dword_48AAA0 & 0x80000) != 0 )
      {
        v16 = dword_48AAA0 & 0x200000;
        if ( (dword_48AAA0 & 0x200000) != 0 )
          v16 = -3;
        v17 = sub_27F3F8();
        if ( a3 )
        {
          v18 = *v17;
          v19 = 1;
          v20 = dword_4900CC;
          v17[5] = v4;
          v17[4] = (int)a2;
          v17[3] = v20;
          *v17 = v18 | 2;
        }
        else
        {
          v27 = dword_4900CC;
          v17[5] = v4;
          v17[4] = (int)a2;
          v28 = *(_DWORD *)(v27 + 2052);
          v17[3] = v27;
          v19 = v28 != 0;
        }
        v21 = dword_48AAA0;
        v17[1] = v19;
        dword_48AAD8 = (int)v17;
        dword_48AAA0 = v21 | 0x200000;
        return v16;
      }
      if ( sub_27EE64(v4) >= 0 )
      {
        v29 = sub_27F46C();
        return sub_27FA98(v29, a2, v4, a3);
      }
LABEL_50:
      sub_29121C();
    }
    v12 = 256;
    return sub_27F874(v12, v13);
  }
LABEL_5:
  if ( v8 )
  {
    if ( v6 != 2 || (v22 = (const char *)v7[1]) == 0 )
    {
LABEL_8:
      v9 = dword_46DED4;
      if ( dword_46DED4 )
        return 0;
      v10 = off_46DED0 == &unk_46E718;
      if ( v4 == 256 )
        v10 = 0;
      if ( !v10 || !sub_28108C(v4) )
        return 0;
      sub_281040(v4, dword_46DEDC, dword_46DEE0);
      return v9;
    }
    v23 = strlen(v22);
    v9 = 0;
    v24 = (char *)sub_93028(v23 + 1);
    v25 = strcpy(v24, (const char *)v7[1]);
    sub_292CD0(v25);
    return v9;
  }
  v26 = (void (__fastcall *)(int, int))v7[1];
  if ( !v26 )
  {
    if ( a2[513] )
    {
      v9 = -2;
      sub_292D9C(v4);
    }
    else
    {
      if ( !a3 )
      {
        v30 = dword_48AAD8;
        for ( dword_48AAA0 &= ~0x200000u; dword_48AAD8; v30 = dword_48AAD8 )
        {
          dword_48AAD8 = *(_DWORD *)(v30 + 24);
          sub_297758(v30);
        }
        goto LABEL_50;
      }
      v9 = -1;
      sub_292D9C(v4);
    }
    return v9;
  }
  if ( v26 != (void (__fastcall *)(int, int))sub_295BA0 )
  {
    dword_48AAA0 |= 0x20u;
    dword_4900C4 = (int)a2;
    dword_48FF28 = 1;
    v26(dword_46DEE0 * dword_46DEDC, v4);
    dword_48FF28 = 0;
    dword_48AAA0 &= ~0x20u;
    if ( !dword_48AAE0 && v7[1] != 2715772 )
      dword_48AAD0 = v7[1];
    if ( dword_48B6B8 )
      sub_291120(dword_48B6B8);
    goto LABEL_8;
  }
  if ( (v4 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[v4] & 0x100) != 0 )
    v4 = (*_ctype_tolower_loc())[v4];
  return sub_27F874(v4, a2);
}
