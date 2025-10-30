int __fastcall sub_67354(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v5; // [sp+4h] [bp-10h] BYREF
  _BYTE v6[12]; // [sp+8h] [bp-Ch] BYREF

  v2 = (_DWORD *)(a1 + 8);
  if ( *a2 != ps_getpid_0(a1 + 8) )
    return 0;
  v5 = sub_23236C(*v2, v2[1], v2[2]);
  if ( v5 == -1 )
    return 0;
  sub_68318(v6, a2 + 1, &v5);
  return 0;
}
