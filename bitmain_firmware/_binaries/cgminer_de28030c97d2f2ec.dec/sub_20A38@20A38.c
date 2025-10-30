int __fastcall sub_20A38(const char *a1, const char *a2, const char *a3, int a4)
{
  char v10[4]; // [sp+20h] [bp-814h] BYREF
  unsigned __int8 v11; // [sp+823h] [bp-11h]
  signed int v12; // [sp+824h] [bp-10h]
  unsigned __int8 v13; // [sp+82Bh] [bp-9h]
  signed int i; // [sp+82Ch] [bp-8h]

  v13 = 0;
  if ( a1 )
  {
    v12 = strlen(a1);
    for ( i = 0; ; ++i )
    {
      if ( i >= v12 )
      {
        v13 = 1;
        return 1;
      }
      v11 = a1[i];
      if ( (int)dword_6A934[v11] < 0 )
        break;
    }
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v10, 0x800u, "Invalid char 0x%x passed to valid_hex from in %s %s():%d", v11, a2, a3, a4);
      sub_1E4EC(3, v10, 0);
    }
    return v13;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v10, 0x800u, "Null string passed to valid_hex from in %s %s():%d", a2, a3, a4);
      sub_1E4EC(3, v10, 0);
    }
    return v13;
  }
}
