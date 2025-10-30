int __fastcall sub_3EC20(int result, int a2, int a3, int a4)
{
  unsigned int *v4; // r10
  int v5; // r3
  int v6; // r3
  unsigned int *v7; // r5
  unsigned int v8; // r8
  unsigned int v9; // r2
  unsigned int v10; // r4
  int v11; // r3
  int v12; // r3
  int v13; // r3
  char dest[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = (unsigned int *)result;
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    strcpy(dest, "==========================capability start==========================\n");
    result = sub_3AF5C(5, dest, 0, a4);
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
    {
      snprintf(dest, 0x800u, "board num = %d\n", *v4);
      result = sub_3AF5C(5, dest, 0, v5);
    }
  }
  v6 = (unsigned __int8)byte_5BC044;
  if ( *v4 )
  {
    v7 = v4;
    v8 = 0;
    do
    {
      if ( v6 || (v6 = (unsigned __int8)byte_4B6CA5, byte_4B6CA5) || dword_AFC2C > 4 )
      {
        snprintf(dest, 0x800u, "board id = %d, chain num = %d\n", v7[1], v7[2]);
        result = sub_3AF5C(5, dest, 0, v11);
        v6 = (unsigned __int8)byte_5BC044;
      }
      v9 = v7[2];
      if ( v9 )
      {
        v10 = 0;
        do
        {
          if ( !v6 )
          {
            while ( 1 )
            {
              v6 = (unsigned __int8)byte_4B6CA5;
              if ( byte_4B6CA5 || dword_AFC2C > 4 )
                break;
              if ( v9 <= ++v10 )
                goto LABEL_17;
            }
          }
          v12 = v7[v10++ + 3];
          snprintf(dest, 0x800u, "\tchain id = %d\n", v12);
          result = sub_3AF5C(5, dest, 0, v13);
          v9 = v7[2];
          v6 = (unsigned __int8)byte_5BC044;
        }
        while ( v9 > v10 );
      }
LABEL_17:
      ++v8;
      v7 += 18;
    }
    while ( *v4 > v8 );
  }
  if ( v6 || byte_4B6CA5 || dword_AFC2C > 4 )
  {
    strcpy(dest, "==========================capability end============================\n");
    return sub_3AF5C(5, dest, 0, v6);
  }
  return result;
}
