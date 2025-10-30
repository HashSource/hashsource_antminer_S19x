bool __fastcall sub_CA390(int a1, _DWORD *a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r4
  int v6; // r5
  _BOOL4 v10; // r5
  int v11; // [sp+Ch] [bp-8h]

  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  v5 = v4;
  if ( !a1 )
    v5 |= 1u;
  if ( v5 )
  {
    sub_D0048(16, 201, 134, "crypto/ec/ecp_nist.c", 152);
    sub_130B5C(0);
    return 0;
  }
  else
  {
    v6 = a4;
    if ( !a4 )
    {
      v11 = a3;
      v6 = sub_130B08(a1);
      v5 = v6;
      if ( !v6 )
        goto LABEL_11;
      a3 = v11;
    }
    if ( !sub_BABCC(a2, a3, v6) )
    {
LABEL_11:
      sub_130B5C(v5);
      return 0;
    }
    v10 = (*(int (__fastcall **)(_DWORD *, _DWORD *, _DWORD, int))(a1 + 88))(a2, a2, *(_DWORD *)(a1 + 40), v6) != 0;
    sub_130B5C(v5);
    return v10;
  }
}
