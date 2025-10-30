int __fastcall sub_17968(char *a1, int a2, char *s1, _BYTE *a4, size_t n)
{
  int v5; // r8
  int v7; // r7
  char *v10; // r11
  int v11; // r5
  bool v12; // zf
  const void *v13; // r0
  __int16 s2[4]; // [sp+Ch] [bp-8h] BYREF

  v7 = 0;
  if ( !a2 )
    v5 = 0;
  s2[0] = 0;
  if ( a2 )
  {
    v5 = 0;
    do
    {
      v10 = s1;
      v11 = 0;
      while ( 1 )
      {
        v12 = memcmp(v10, s2, (unsigned __int8)n) == 0;
        v13 = v10;
        v10 += (unsigned __int8)n;
        if ( v12 )
        {
          *a4 = v11;
          goto LABEL_11;
        }
        ++v11;
        if ( !memcmp(v13, a1, (unsigned __int8)n) )
          break;
        if ( v11 == 32 )
          goto LABEL_11;
      }
      v5 = (unsigned __int8)(v5 + 1);
LABEL_11:
      ++v7;
      a1 += (unsigned __int8)n;
    }
    while ( a2 != v7 );
  }
  return v5;
}
