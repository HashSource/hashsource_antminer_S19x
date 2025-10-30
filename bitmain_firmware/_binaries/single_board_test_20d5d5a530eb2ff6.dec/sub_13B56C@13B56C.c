int __fastcall sub_13B56C(int a1, int a2, int a3)
{
  int v6; // r4
  int result; // r0
  int v8; // [sp+0h] [bp-10h] BYREF
  _BYTE v9[12]; // [sp+4h] [bp-Ch] BYREF

  v8 = 0;
  sub_D1260();
  if ( a1 )
  {
    sub_13B198((int)v9, a1);
    v6 = sub_13B488((int)v9, a2, a3, &v8);
  }
  else
  {
    v6 = sub_13B488(0, a2, a3, &v8);
  }
  sub_D128C();
  result = v6;
  if ( v6 )
    return v8;
  return result;
}
