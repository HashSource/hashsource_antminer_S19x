int __fastcall sub_AD7D8(_DWORD *a1, int a2, int a3)
{
  bool v3; // zf
  _DWORD *v4; // r5
  int v5; // r4
  int v6; // r0

  v3 = a2 == 1;
  if ( a2 != 1 )
    v3 = a3 == 0;
  if ( v3 )
    goto LABEL_7;
  v4 = a1;
  v5 = a2;
  if ( a2 == 6 )
  {
    v6 = sub_EB288(a3);
    if ( v6 )
      goto LABEL_6;
  }
  else
  {
    v6 = sub_AE228(a3);
    if ( v6 )
    {
LABEL_6:
      a3 = v6;
      a2 = v5;
      a1 = v4;
LABEL_7:
      sub_AD794(a1, a2, a3);
      return 1;
    }
  }
  return 0;
}
