int __fastcall sub_1000B8(int a1)
{
  void *v1; // r4
  int v2; // r1
  int v3; // r5
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  sub_7F64C(v5, a1, 0);
  v1 = (void *)v5[0];
  if ( !v5[0] )
    return 0;
  v2 = sub_FE5FC(*(_DWORD **)(v5[0] + 4));
  if ( v2 )
  {
    sub_7F564(v5, v2, 10);
    v3 = v5[0];
  }
  else
  {
    v3 = 0;
  }
  sub_7F5D0((int)v1);
  sub_33AC04(v1);
  return v3;
}
