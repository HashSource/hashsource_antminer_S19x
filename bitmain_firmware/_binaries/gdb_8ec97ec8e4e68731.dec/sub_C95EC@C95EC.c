int __fastcall sub_C95EC(_DWORD *a1)
{
  int v2; // r12
  int v3; // r0
  int v5; // [sp+4h] [bp-4h]

  v5 = a1[24];
  sub_C959C(a1[4]);
  v2 = a1[3];
  a1[31] = v3;
  a1[23] = v5;
  if ( v2 == 1 )
    return off_489A0C();
  else
    return sub_230760(a1[11], a1 + 22);
}
