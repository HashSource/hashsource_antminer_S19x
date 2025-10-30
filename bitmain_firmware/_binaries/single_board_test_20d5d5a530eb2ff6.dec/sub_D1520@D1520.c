int __fastcall sub_D1520(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r3
  int v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _BOOL4 v13; // r3

  sub_D8DAC(a1, 2);
  v6 = a1[1];
  if ( !v6 )
  {
    if ( a2 )
      goto LABEL_5;
    if ( *a1 )
      goto LABEL_27;
    goto LABEL_38;
  }
  if ( !*a1 )
  {
    if ( a2 )
      goto LABEL_5;
LABEL_38:
    v7 = 0;
    sub_D0048(6, 128, 139, (int)"crypto/evp/digest.c", 127);
    return v7;
  }
  if ( !a2 || *a2 == *(_DWORD *)*a1 )
    goto LABEL_27;
LABEL_5:
  sub_CDDF8(v6);
  if ( a3 )
  {
    v7 = sub_CDD6C(a3);
    if ( !v7 )
    {
      sub_D0048(6, 128, 134, (int)"crypto/evp/digest.c", 100);
      return v7;
    }
  }
  else
  {
    a3 = (_DWORD *)sub_15B810(*a2);
    if ( !a3 )
      goto LABEL_8;
  }
  a2 = (_DWORD *)sub_15B824(a3, *a2);
  if ( !a2 )
  {
    v7 = 0;
    sub_D0048(6, 128, 134, (int)"crypto/evp/digest.c", 112);
    sub_CDDF8((int)a3);
    return v7;
  }
LABEL_8:
  v8 = (_DWORD *)*a1;
  a1[1] = a3;
  if ( a2 != v8 )
  {
    if ( v8 )
    {
      if ( v8[8] && !sub_D8DB8(a1, 2) )
        (*(void (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
      if ( a1[3] && *(int *)(*a1 + 40) > 0 )
      {
        sub_D8DB8(a1, 4);
        sub_E0758(a1[3], *(_DWORD *)(*a1 + 40), (size_t)"crypto/evp/digest.c");
        a1[3] = 0;
      }
    }
    v9 = a1[2];
    *a1 = a2;
    if ( (v9 & 0x100) != 0 )
    {
      v11 = a1[4];
      if ( !v11 )
        return 1;
      goto LABEL_19;
    }
    v10 = a2[10];
    if ( !v10 )
    {
      v11 = a1[4];
      if ( !v11 )
        return ((int (__fastcall *)(_DWORD *))a2[4])(a1);
      goto LABEL_19;
    }
    a1[5] = a2[5];
    v7 = sub_E0740(v10, "crypto/evp/digest.c", 139);
    a1[3] = v7;
    if ( !v7 )
    {
      sub_D0048(6, 128, 65, (int)"crypto/evp/digest.c", 141);
      return v7;
    }
  }
LABEL_27:
  v11 = a1[4];
  if ( v11 )
  {
LABEL_19:
    v7 = 0;
    v12 = sub_DB77C(v11, -1, 248, 7, 0, a1);
    v13 = v12 <= 0;
    if ( v12 == -2 )
      v13 = 0;
    if ( v13 )
      return v7;
  }
  if ( (a1[2] & 0x100) != 0 )
    return 1;
  a2 = (_DWORD *)*a1;
  return ((int (__fastcall *)(_DWORD *))a2[4])(a1);
}
