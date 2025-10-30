void __fastcall sub_32238(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = dword_68FD0;
  a1[7] = 0;
  if ( v2 || (v3 = a1[1], v3 >= sub_3218C()) )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *a1, (const char *)a1[41]);
      sub_20F58(6, s, 0);
    }
  }
  else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *a1, (const char *)a1[41]);
    sub_20F58(4, s, 0);
  }
}
