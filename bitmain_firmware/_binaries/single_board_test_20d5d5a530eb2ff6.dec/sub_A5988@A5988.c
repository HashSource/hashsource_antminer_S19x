int __fastcall sub_A5988(_DWORD *a1)
{
  int v2; // r7
  int *v3; // r0
  int v4; // r3
  int v6; // r2
  int v7; // [sp+10h] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1[31] + 528);
  v3 = (int *)a1[285];
  v3[110] = v2;
  if ( sub_86258(v3, &v7, &v8, 0, 0, 0, 0) )
  {
    v4 = a1[31];
    v6 = v8;
    *(_DWORD *)(v4 + 560) = v7;
    *(_DWORD *)(v4 + 564) = v6;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 441, 138, (int)"ssl/tls13_enc.c", 351);
    return 0;
  }
}
