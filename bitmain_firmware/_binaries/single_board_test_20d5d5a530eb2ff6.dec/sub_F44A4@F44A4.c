char *__fastcall sub_F44A4(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r6
  int v4; // r2
  char *v5; // r5
  unsigned int v6; // r3
  bool v7; // cc
  char *v8; // r7

  if ( a2 )
  {
    v3 = a1[5];
    v4 = a1[1];
    if ( a2 > v3 - v4 )
    {
      v5 = 0;
      sub_D0048(36, 113, 125, (int)"crypto/rand/rand_lib.c", 785);
      return v5;
    }
    v5 = (char *)*a1;
    if ( !*a1 )
    {
      sub_D0048(36, 113, 68, (int)"crypto/rand/rand_lib.c", 790);
      return v5;
    }
    v6 = a1[6];
    if ( a2 <= v6 - v4 )
    {
LABEL_13:
      v5 += v4;
      return v5;
    }
    if ( a1[2] )
    {
      sub_D0048(36, 125, 68, (int)"crypto/rand/rand_lib.c", 632);
    }
    else
    {
      while ( 1 )
      {
        v7 = v3 >> 1 > v6;
        v6 *= 2;
        if ( !v7 )
          break;
        if ( a2 <= v6 - v4 )
        {
          v3 = v6;
          break;
        }
      }
      if ( a1[3] )
        v8 = (char *)sub_E180C((void *)v3);
      else
        v8 = (char *)sub_E0740((void *)v3);
      if ( v8 )
      {
        memcpy(v8, (const void *)*a1, a1[1]);
        if ( a1[3] )
          ((void (__fastcall *)(_DWORD, _DWORD, const char *, int))loc_E18E0)(*a1, a1[6], "crypto/rand/rand_lib.c", 650);
        else
          sub_E0758((void *)*a1, a1[6], (size_t)"crypto/rand/rand_lib.c");
        v4 = a1[1];
        v5 = v8;
        *a1 = v8;
        a1[6] = v3;
        goto LABEL_13;
      }
      sub_D0048(36, 125, 65, (int)"crypto/rand/rand_lib.c", 645);
    }
  }
  return 0;
}
