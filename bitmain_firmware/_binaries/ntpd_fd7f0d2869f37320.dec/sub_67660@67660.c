int __fastcall sub_67660(unsigned __int16 *a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-18h] BYREF
  __int64 v6; // [sp+8h] [bp-10h] BYREF

  v2 = sub_67430(a1);
  v3 = sub_675B8((unsigned __int8 *)a1);
  sub_6702C(&v5, v2 - 719163, v3);
  v6 = v5;
  return sub_66674((int)&v6);
}
