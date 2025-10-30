int __fastcall sub_3B464(int a1)
{
  char v3[4]; // [sp+8h] [bp-804h] BYREF

  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "Pushing work from pool %d to hash queue", **(_DWORD **)(a1 + 260));
    sub_1E4EC(7, v3, 0);
  }
  *(_DWORD *)(a1 + 336) = dword_8808C;
  sub_3986C(a1);
  ++*(_DWORD *)(*(_DWORD *)(a1 + 260) + 68);
  return sub_3A180(a1);
}
