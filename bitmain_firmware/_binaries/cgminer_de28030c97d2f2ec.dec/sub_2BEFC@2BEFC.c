void __fastcall sub_2BEFC(void *a1, const void *a2, size_t a3, const char *a4, const char *a5, int a6)
{
  char v6[4]; // [sp+20h] [bp-804h] BYREF

  if ( a3 && a3 <= 0x80000000 )
  {
    if ( a1 )
    {
      if ( a2 )
      {
        memcpy(a1, a2, a3);
      }
      else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v6, 0x800u, "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d", a3, a4, a5, a6);
        sub_1E4EC(3, v6, 0);
      }
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v6, 0x800u, "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d", a3, a4, a5, a6);
      sub_1E4EC(3, v6, 0);
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v6, 0x800u, "ERR: Asked to memcpy %u bytes from %s %s():%d", a3, a4, a5, a6);
    sub_1E4EC(3, v6, 0);
  }
}
