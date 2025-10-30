void __fastcall sub_53380(void ***a1, const char *a2, const char *a3, int a4)
{
  void **v5; // r1
  _DWORD *v9; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    if ( *((_BYTE *)v5 + 273) || v5[60] || *((_BYTE *)v5 + 272) )
    {
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "Discarded cloned or rolled work");
        sub_47AB4(7, s, 0);
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
      ++qword_242F00;
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        strcpy(s, "Discarded work");
        sub_47AB4(7, s, 0);
      }
    }
    sub_53084(a1, a2, a3, a4);
  }
  else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(s, 0x800u, "Discard work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_47AB4(3, s, 0);
  }
}
