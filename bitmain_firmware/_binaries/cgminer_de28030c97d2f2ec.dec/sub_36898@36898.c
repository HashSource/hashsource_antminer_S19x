void __fastcall sub_36898(void **a1, const char *a2, const char *a3, int a4)
{
  char v8[2048]; // [sp+1Ch] [bp-808h] BYREF
  _DWORD *v9; // [sp+81Ch] [bp-8h]

  v9 = *a1;
  if ( v9 )
  {
    if ( *((_BYTE *)v9 + 273) != 1 && !v9[60] && *((_BYTE *)v9 + 272) != 1 )
    {
      if ( v9[65] )
      {
        ++*(_DWORD *)(v9[65] + 124);
        --*(_DWORD *)(v9[65] + 64);
        --*(_DWORD *)(v9[65] + 68);
      }
      ++*(_QWORD *)&dbl_941D0;
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v8, "Discarded work");
        sub_1E4EC(7, v8, 0);
      }
    }
    else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v8, "Discarded cloned or rolled work");
      sub_1E4EC(7, v8, 0);
    }
    sub_31F40(a1, a2, a3, a4);
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v8, 0x800u, "Discard work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_1E4EC(3, v8, 0);
  }
}
