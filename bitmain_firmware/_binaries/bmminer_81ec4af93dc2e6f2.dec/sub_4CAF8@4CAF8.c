char *__fastcall sub_4CAF8(int a1, int a2)
{
  int i; // r5
  char *result; // r0
  bool v5; // zf
  int v6; // r4
  char *v7; // r8
  void *v8; // r2
  char *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Dump freq table, chain = %d.\n", a1);
    sub_3AF5C(4, s, 0, v12);
  }
  for ( i = 0; i != 4; ++i )
  {
    result = (char *)sub_266F0(i);
    if ( result )
    {
      v5 = a1 == 255;
      if ( a1 != 255 )
        v5 = a1 == i;
      v6 = !v5;
      if ( v5 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          memset(s, v6, 0x800u);
          snprintf(s, 0x800u, "chain = %d\n", i);
          sub_3BE28(3, s, v6);
        }
        result = (char *)sub_26540();
        v7 = result;
        v8 = off_AFC24;
        if ( result )
        {
          v9 = 0;
          do
          {
            if ( (unsigned int)v8 > 3 )
            {
              memset(s, 0, 0x800u);
              snprintf(s, 0x800u, "[%3d]:%-3d", v9, *(_DWORD *)(a2 + (i << 10) + 4 * (_DWORD)v9));
              sub_3BE28(3, s, 0);
              if ( (unsigned int)off_AFC24 > 3 )
              {
                memset(s, 0, 0x800u);
                *(_DWORD *)s = &unk_202020;
                sub_3BE28(3, s, 0);
              }
            }
            ++v9;
            v10 = sub_26550();
            result = (char *)sub_8C474(v9, v10);
            v8 = off_AFC24;
            if ( !v11 && (unsigned int)off_AFC24 > 3 )
            {
              memset(s, 0, 0x800u);
              *(_WORD *)s = 10;
              result = sub_3BE28(3, s, 0);
              v8 = off_AFC24;
            }
          }
          while ( v7 != v9 );
        }
        if ( (unsigned int)v8 > 3 )
        {
          memset(s, 0, 0x800u);
          *(_WORD *)s = 10;
          result = sub_3BE28(3, s, 0);
        }
      }
    }
  }
  return result;
}
