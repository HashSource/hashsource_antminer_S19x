int __fastcall sub_D9454(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v6; // r0
  int (*v10)(void); // r3
  int (*v12)(void); // r3
  int v13; // r0
  int v14; // [sp+Ch] [bp-8h] BYREF

  v6 = (_DWORD *)a1[4];
  if ( !v6 )
  {
    v6 = (_DWORD *)sub_DB4F8(a5, a4);
    a1[4] = v6;
    if ( !v6 )
      return 0;
  }
  if ( ((a3 == 0) & ((*(_DWORD *)(*v6 + 4) ^ 4u) >> 2)) != 0 )
  {
    if ( sub_DA710(a5, &v14) <= 0 || (v13 = sub_EAAB4(v14), (a3 = (_DWORD *)sub_D99DC(v13)) == 0) )
    {
      sub_D0048(6, 161, 158, (int)"crypto/evp/m_sigver.c", 42);
      return 0;
    }
    v6 = (_DWORD *)a1[4];
  }
  v10 = *(int (**)(void))(*v6 + 60);
  if ( !v10 )
  {
    if ( *(_DWORD *)(*v6 + 108) )
    {
      v6[4] = 8;
      a1[5] = sub_D9430;
      goto LABEL_6;
    }
    if ( sub_DA780() > 0 )
    {
      v6 = (_DWORD *)a1[4];
      goto LABEL_6;
    }
    return 0;
  }
  if ( v10() <= 0 )
    return 0;
  v6 = (_DWORD *)a1[4];
  v6[4] = 64;
LABEL_6:
  if ( sub_DB77C(v6, -1, 248, 1, 0, a3) <= 0 )
    return 0;
  if ( a2 )
    *a2 = a1[4];
  if ( (*(_DWORD *)(*(_DWORD *)a1[4] + 4) & 4) != 0 )
    return 1;
  if ( !sub_D1520(a1, a3, a4) )
    return 0;
  v12 = *(int (**)(void))(*(_DWORD *)a1[4] + 128);
  if ( !v12 )
    return 1;
  return v12();
}
