int __fastcall sub_3A514(int a1)
{
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v3, 0x800u, "Pushing work from pool %d to hash queue", **(_DWORD **)(a1 + 260));
    sub_1DB6C(7, v3, 0);
  }
  *(_DWORD *)(a1 + 336) = dword_86EF4;
  sub_388CC(a1);
  ++*(_DWORD *)(*(_DWORD *)(a1 + 260) + 68);
  return sub_391F8(a1);
}
