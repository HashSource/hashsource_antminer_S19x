unsigned int __fastcall sub_F415C(_DWORD *a1, int a2)
{
  void *v2; // r6
  unsigned int v5; // r0
  unsigned int v6; // lr
  unsigned int v7; // r1
  unsigned int v8; // r7
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned int v11; // r3
  unsigned int v12; // r0
  bool v13; // zf
  unsigned int v14; // r12
  unsigned int v15; // r3
  void *v16; // r7

  v5 = sub_F414C((int)a1);
  if ( a2 )
  {
    v6 = a1[5];
    v7 = a1[1];
    v8 = v6 - v7;
    v9 = (a2 * v5 + 7) >> 3;
    if ( v9 > v6 - v7 )
    {
      sub_D0048(36, 115, 125, (int)"crypto/rand/rand_lib.c", 679);
      return 0;
    }
    else
    {
      v10 = a1[4];
      if ( v7 < v10 )
      {
        v11 = v10 - v7;
        if ( v9 < v11 )
          v9 = v11;
      }
      v12 = a1[6];
      if ( v9 <= v12 - v7 )
        return v9;
      v13 = v9 == v8;
      if ( v9 <= v8 )
        v13 = a1[2] == 0;
      if ( v13 )
      {
        v14 = v6 >> 1;
        do
        {
          if ( v14 <= v12 )
            v2 = (void *)a1[5];
          v15 = 2 * v12 - v7;
          if ( v14 > v12 )
            v2 = (void *)(2 * v12);
          else
            v15 = v6 - v7;
          v12 = (unsigned int)v2;
        }
        while ( v9 > v15 );
        if ( a1[3] )
          v16 = sub_E180C(v2);
        else
          v16 = sub_E0740(v2);
        if ( v16 )
        {
          memcpy(v16, (const void *)*a1, a1[1]);
          if ( a1[3] )
            ((void (__fastcall *)(_DWORD, _DWORD, const char *, int))loc_E18E0)(
              *a1,
              a1[6],
              "crypto/rand/rand_lib.c",
              650);
          else
            sub_E0758((void *)*a1, a1[6], (size_t)"crypto/rand/rand_lib.c");
          *a1 = v16;
          a1[6] = v2;
          return v9;
        }
        sub_D0048(36, 125, 65, (int)"crypto/rand/rand_lib.c", 645);
      }
      else
      {
        sub_D0048(36, 125, 68, (int)"crypto/rand/rand_lib.c", 632);
      }
      a1[1] = 0;
      a1[5] = 0;
      return 0;
    }
  }
  else
  {
    sub_D0048(36, 115, 105, (int)"crypto/rand/rand_lib.c", 671);
    return 0;
  }
}
