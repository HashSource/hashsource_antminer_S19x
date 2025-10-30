int __fastcall sub_154A1C(int a1)
{
  int v1; // r5
  int v2; // r0
  int v3; // r7
  int v4; // r0
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int result; // r0

  v1 = dword_487668;
  if ( off_48A9F0 )
    a1 = off_48A9F0();
  v2 = sub_22F0C4(a1);
  if ( v2 )
  {
    v3 = dword_46DC04;
    v4 = sub_22F048(v2);
    v5 = sub_2591E4(v4);
    v6 = 1;
  }
  else
  {
    v3 = 0;
    v6 = 0;
    v5 = ((int (*)(void))sub_2591E4)();
  }
  if ( v5 )
    v5 = sub_259B58("");
  v7 = (_DWORD *)sub_242F8C(v5);
  v8 = sub_25680C(*v7);
  v9 = (_DWORD *)sub_242FB4(v8);
  sub_25680C(*v9);
  v10 = fileno(*(FILE **)(v1 + 52));
  v11 = sub_1FDDFC(v10);
  v12 = v11;
  if ( v11 )
  {
    sub_1FE058();
    v11 = sub_1FDE0C(v12);
  }
  result = sub_B78B4(v11);
  if ( v6 )
  {
    if ( v3 == 1 )
    {
      return sub_22F048(result);
    }
    else if ( v3 )
    {
      if ( v3 == 2 )
        return sub_22EFF4(result);
    }
    else
    {
      return sub_22EF7C(result);
    }
  }
  return result;
}
