void __fastcall sub_2CEA0(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v5; // r1
  _DWORD *v9; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    if ( *((_BYTE *)v5 + 273) || v5[60] || *((_BYTE *)v5 + 272) )
    {
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy(s, "Discarded cloned or rolled work");
        sub_20F58(7, s, 0);
      }
    }
    else
    {
      v9 = v5[65];
      if ( v9 )
      {
        ++v9[31];
        --*((_DWORD *)v5[65] + 16);
        --*((_DWORD *)v5[65] + 17);
      }
      ++qword_73380;
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy(s, "Discarded work");
        sub_20F58(7, s, 0);
      }
    }
    sub_2CBA8(a1, a2, a3, a4);
  }
  else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
  {
    snprintf(s, 0x800u, "Discard work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_20F58(3, s, 0);
  }
}
