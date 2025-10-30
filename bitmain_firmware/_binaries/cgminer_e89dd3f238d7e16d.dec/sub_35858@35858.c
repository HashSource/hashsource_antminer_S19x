void __fastcall sub_35858(void **a1, const char *a2, const char *a3, int a4)
{
  char v8[2048]; // [sp+1Ch] [bp-810h] BYREF
  _DWORD *v9; // [sp+81Ch] [bp-10h]

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
      ++*(_QWORD *)&dword_93038;
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v8, "Discarded work");
        sub_1DB6C(7, v8, 0);
      }
    }
    else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v8, "Discarded cloned or rolled work");
      sub_1DB6C(7, v8, 0);
    }
    sub_30E0C(a1, a2, a3, a4);
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v8, 0x800u, "Discard work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_1DB6C(3, v8, 0);
  }
}
