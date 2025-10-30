int __fastcall sub_F42B8(_DWORD *a1, char *src, size_t n, int a4)
{
  unsigned int v5; // r8
  unsigned int v7; // r0
  char *v8; // r6
  unsigned int v10; // r3
  bool v12; // cc
  int v14; // r3
  int v15; // r2

  v5 = a1[5];
  v7 = a1[1];
  if ( v5 - v7 < n )
  {
    sub_D0048(36, 103, 106, (int)"crypto/rand/rand_lib.c", 728);
    return 0;
  }
  v8 = (char *)*a1;
  if ( *a1 )
  {
    if ( !n )
      return 1;
    v10 = a1[6];
    if ( v7 >= v10 || src != &v8[v7] )
    {
      if ( n <= v10 - v7 )
      {
LABEL_15:
        memcpy(&v8[v7], src, n);
        v14 = a1[7];
        a1[1] += n;
        a1[7] = a4 + v14;
        return 1;
      }
      if ( a1[2] )
      {
        sub_D0048(36, 125, 68, (int)"crypto/rand/rand_lib.c", 632);
      }
      else
      {
        while ( 1 )
        {
          v12 = v5 >> 1 > v10;
          v10 *= 2;
          if ( !v12 )
            break;
          if ( n <= v10 - v7 )
          {
            v5 = v10;
            break;
          }
        }
        if ( a1[3] )
          v8 = (char *)sub_E180C((void *)v5);
        else
          v8 = (char *)sub_E0740((void *)v5);
        if ( v8 )
        {
          memcpy(v8, (const void *)*a1, a1[1]);
          if ( a1[3] )
            ((void (__fastcall *)(_DWORD, _DWORD, const char *, int))loc_E18E0)(
              *a1,
              a1[6],
              "crypto/rand/rand_lib.c",
              650);
          else
            sub_E0758((void *)*a1, a1[6], (size_t)"crypto/rand/rand_lib.c");
          v7 = a1[1];
          *a1 = v8;
          a1[6] = v5;
          goto LABEL_15;
        }
        sub_D0048(36, 125, 65, (int)"crypto/rand/rand_lib.c", 645);
      }
      return 0;
    }
    v15 = 747;
  }
  else
  {
    v15 = 733;
  }
  sub_D0048(36, 103, 68, (int)"crypto/rand/rand_lib.c", v15);
  return 0;
}
