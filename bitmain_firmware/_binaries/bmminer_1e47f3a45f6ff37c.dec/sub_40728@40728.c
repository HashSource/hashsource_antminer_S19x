char *__fastcall sub_40728(char *result, int a2, int a3, int a4)
{
  char *v4; // r11
  int v5; // r3
  _DWORD *v6; // r6
  unsigned int v7; // r10
  int v8; // r3
  unsigned int v9; // r12
  _DWORD *v10; // r5
  unsigned int i; // r4
  int v12; // r3
  char dest[2088]; // [sp+8h] [bp-828h] BYREF

  if ( result )
  {
    v4 = result;
    if ( (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4)
      && ((strcpy(dest, "==========================capability start==========================\n"),
           result = (char *)sub_3B6AC(5, dest, 0, a4),
           byte_5C0EFC)
       || byte_4B9A21
       || dword_B3094 > 4) )
    {
      snprintf(dest, 0x800u, "board num = %d\n", *(_DWORD *)v4);
      result = (char *)sub_3B6AC(5, dest, 0, v5);
      if ( !*(_DWORD *)v4 )
      {
        a4 = (unsigned __int8)byte_5C0EFC;
        goto LABEL_20;
      }
    }
    else if ( !*(_DWORD *)v4 )
    {
LABEL_25:
      if ( dword_B3094 <= 4 )
        return result;
LABEL_22:
      strcpy(dest, "==========================capability end============================\n");
      return (char *)sub_3B6AC(5, dest, 0, a4);
    }
    a4 = (unsigned __int8)byte_5C0EFC;
    v6 = v4 + 12;
    v7 = 0;
    do
    {
      if ( a4 || (a4 = (unsigned __int8)byte_4B9A21, byte_4B9A21) || dword_B3094 > 4 )
      {
        snprintf(dest, 0x800u, "board id = %d, chain num = %d\n", *(v6 - 2), *(v6 - 1));
        result = (char *)sub_3B6AC(5, dest, 0, v8);
        a4 = (unsigned __int8)byte_5C0EFC;
      }
      v9 = *(v6 - 1);
      if ( v9 )
      {
        v10 = v6;
        for ( i = 0; i < v9; ++i )
        {
          result = dest;
          if ( a4 || (a4 = (unsigned __int8)byte_4B9A21, byte_4B9A21) || dword_B3094 > 4 )
          {
            snprintf(dest, 0x800u, "\tchain id = %d\n", *v10);
            result = (char *)sub_3B6AC(5, dest, 0, v12);
            a4 = (unsigned __int8)byte_5C0EFC;
            v9 = *(v6 - 1);
          }
          ++v10;
        }
      }
      ++v7;
      v6 += 18;
    }
    while ( v7 < *(_DWORD *)v4 );
LABEL_20:
    if ( a4 || byte_4B9A21 )
      goto LABEL_22;
    goto LABEL_25;
  }
  return result;
}
