int __fastcall sub_CAA90(_DWORD *a1)
{
  int v2; // r0
  int v3; // r2
  bool v4; // zf
  _BOOL4 v5; // r3

  a1[10] = sub_B822C();
  a1[17] = sub_B822C();
  v2 = sub_B822C();
  v3 = a1[10];
  a1[18] = v2;
  if ( !v3 )
    goto LABEL_9;
  v4 = v2 == 0;
  if ( v2 )
    v4 = a1[17] == 0;
  v5 = v4;
  if ( v4 )
  {
LABEL_9:
    sub_B895C(v3);
    sub_B895C(a1[17]);
    sub_B895C(a1[18]);
    return 0;
  }
  else
  {
    a1[19] = v5;
    return 1;
  }
}
