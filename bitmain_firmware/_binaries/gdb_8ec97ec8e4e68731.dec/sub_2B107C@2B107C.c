int __fastcall sub_2B107C(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  bool v5; // zf
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  if ( !dword_48FC08 )
  {
    dword_48FC08 = 1;
    nullsub_126();
  }
  if ( sub_2A8A04((int)a1, 0, 0) || sub_2A87D8((int)v6, 4u, (int)a1) != 4 )
    return 0;
  if ( v6[0] != 83 || aCccccccccccccc[v6[1]] == 99 || aCccccccccccccc[v6[2]] == 99 || aCccccccccccccc[v6[3]] == 99 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(3);
    return 0;
  }
  v2 = a1[40];
  if ( sub_2B0058((int)a1) && sub_2B0910(a1) )
  {
    result = a1[1];
    if ( a1[31] )
      a1[10] |= 0x200u;
  }
  else
  {
    v4 = a1[40];
    v5 = v4 == v2;
    if ( v4 != v2 )
      v5 = v4 == 0;
    if ( !v5 )
      sub_2AD1F0((int)a1);
    a1[40] = v2;
    return 0;
  }
  return result;
}
