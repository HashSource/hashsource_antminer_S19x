bool __fastcall sub_184F48(_DWORD *a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r6
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r3

  v1 = (int)(a1 + 2);
  v2 = sub_1DDB40(a1[2], a1[3], a1[4]);
  v3 = sub_1DD58C(v2);
  v4 = ps_getpid_0(v1);
  v5 = (_DWORD *)dword_487944;
  if ( dword_487944 )
  {
    do
    {
      if ( v4 == v5[1] )
        break;
      v5 = (_DWORD *)*v5;
    }
    while ( v5 );
  }
  v6 = dword_46D584;
  if ( dword_46D584 == 2 )
  {
    if ( sub_232950(v4) )
      goto LABEL_7;
    v6 = dword_46D584;
  }
  if ( v6 )
    return 0;
LABEL_7:
  if ( !((int (__fastcall *)(int))loc_16BDE4)(v3) || sub_1D374C() )
    return 0;
  return !v5 || v5[2] == 0;
}
