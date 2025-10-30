bool sub_F482C()
{
  _UNKNOWN **v0; // r0
  _UNKNOWN **v1; // r4
  int v2; // r0
  _DWORD *v3; // r5
  int (__fastcall *v4)(int, int); // r4
  int v6; // r6
  int v7; // r7
  int v8; // r4
  int *v9; // r0
  int *v10; // r5
  int v11; // r4

  v0 = (_UNKNOWN **)sub_F47B0();
  if ( !v0 )
    return 0;
  v1 = v0;
  if ( v0 == sub_F3E50() )
  {
    v9 = (int *)sub_F3B3C();
    v10 = v9;
    if ( v9 )
    {
      sub_F370C(v9);
      v11 = sub_F3328(v10, 0, 0, 0);
      sub_F3718(v10);
      return v11;
    }
    return 0;
  }
  v2 = sub_F3F4C(256, 1, (void *)0x20, 0x3000u);
  v3 = (_DWORD *)v2;
  if ( !v2 )
    return 0;
  if ( !sub_F4C94(v2) )
  {
    v4 = 0;
LABEL_6:
    sub_F408C(v3);
    return (bool)v4;
  }
  v4 = (int (__fastcall *)(int, int))v1[3];
  if ( !v4 )
    goto LABEL_6;
  v6 = sub_F40DC((int)v3);
  v7 = sub_F40E4((int)v3);
  sub_F40E0((int)v3);
  v8 = v4(v6, v7);
  sub_F408C(v3);
  return v8 != 0;
}
