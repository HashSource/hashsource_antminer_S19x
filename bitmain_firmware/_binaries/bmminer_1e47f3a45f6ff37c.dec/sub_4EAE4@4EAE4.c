char *__fastcall sub_4EAE4(int a1, int a2)
{
  int i; // r5
  char *result; // r0
  bool v6; // zf
  int v7; // r4
  unsigned int v8; // r2
  char *v9; // r8
  char *v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Dump freq table, chain = %d.\n", a1);
    sub_3B6AC(4, s, 0, v13);
  }
  for ( i = 0; i != 4; ++i )
  {
    result = (char *)sub_26C0C(i);
    if ( result )
    {
      v6 = a1 == i;
      if ( a1 != i )
        v6 = a1 == 255;
      v7 = !v6;
      if ( v6 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          memset(s, v7, 0x800u);
          snprintf(s, 0x800u, "chain = %d\n", i);
          sub_3C5B8(3, s, v7);
        }
        result = (char *)sub_26A44();
        v8 = dword_B308C;
        v9 = result;
        if ( result )
        {
          v10 = 0;
          do
          {
            if ( v8 > 3 )
            {
              memset(s, 0, 0x800u);
              snprintf(s, 0x800u, "[%3d]:%-3d", v10, *(_DWORD *)(a2 + 4 * (_DWORD)v10));
              sub_3C5B8(3, s, 0);
              if ( (unsigned int)dword_B308C > 3 )
              {
                memset(s, 0, 0x800u);
                *(_DWORD *)s = &unk_202020;
                sub_3C5B8(3, s, 0);
              }
            }
            v11 = sub_26A54();
            result = (char *)sub_8F7E4(++v10, v11);
            v8 = dword_B308C;
            if ( !v12 && (unsigned int)dword_B308C > 3 )
            {
              memset(s, 0, 0x800u);
              *(_WORD *)s = 10;
              result = sub_3C5B8(3, s, 0);
              v8 = dword_B308C;
            }
          }
          while ( v9 != v10 );
        }
        if ( v8 > 3 )
        {
          memset(s, 0, 0x800u);
          *(_WORD *)s = 10;
          result = sub_3C5B8(3, s, 0);
        }
      }
    }
    a2 += 1024;
  }
  return result;
}
