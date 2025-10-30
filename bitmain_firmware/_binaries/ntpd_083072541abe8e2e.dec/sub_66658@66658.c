int __fastcall sub_66658(unsigned __int16 *a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-18h] BYREF
  __int64 v6; // [sp+8h] [bp-10h] BYREF

  v2 = sub_66428(a1);
  v3 = sub_665B0((unsigned __int8 *)a1);
  sub_66038(&v5, v2 - 719163, v3);
  v6 = v5;
  return sub_65644((int)&v6);
}
