int __fastcall sub_AAF94(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r0
  _BOOL4 v5; // r1

  v1 = sub_AAE94(a1);
  v2 = sub_26BC70(v1);
  v3 = ((int (__fastcall *)(int))loc_26C09C)(v1);
  v4 = sub_A9EE8(v2, 0, v3, 0, 1);
  v5 = v2 == v4;
  if ( !v1 )
    v5 = 0;
  if ( v5 )
    return v1;
  else
    return sub_26DD30(v4, 0, v3);
}
