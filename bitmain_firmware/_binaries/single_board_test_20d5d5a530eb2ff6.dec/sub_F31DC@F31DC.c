bool __fastcall sub_F31DC(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v4; // r5
  unsigned int v7; // r8
  int (__fastcall *v8)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int); // r5
  unsigned int v9; // r0
  unsigned int v10; // r5
  void (__fastcall *v11)(_DWORD *); // r3
  int v13; // r1
  time_t v14; // r0
  int v15; // r3
  unsigned int *v16; // r3
  unsigned int v17; // r2
  int v18; // [sp+Ch] [bp-4h] BYREF

  v4 = a1[23];
  v18 = 0;
  if ( v4 == 2 )
  {
    sub_D0048(36, 110, 114, (int)"crypto/rand/drbg_lib.c", 409);
    return 0;
  }
  if ( !v4 )
  {
    sub_D0048(36, 110, 115, (int)"crypto/rand/drbg_lib.c", 413);
    return 0;
  }
  if ( a2 )
  {
    v7 = a3;
    if ( a1[15] < a3 )
    {
      sub_D0048(36, 110, 102, (int)"crypto/rand/drbg_lib.c", 420);
      return 0;
    }
    v8 = (int (__fastcall *)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int))a1[61];
    a1[23] = 2;
    if ( v8 )
      goto LABEL_6;
  }
  else
  {
    v8 = (int (__fastcall *)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int))a1[61];
    v7 = 0;
    a1[23] = 2;
    if ( v8 )
    {
LABEL_6:
      v9 = v8(a1, &v18, a1[8], a1[10], a1[11], a4);
      v10 = v9;
      if ( v9 < a1[10] || v9 > a1[11] )
        goto LABEL_8;
      v13 = v18;
LABEL_15:
      if ( (*(int (__fastcall **)(_DWORD *, int, unsigned int, int, unsigned int))(a1[60] + 4))(a1, v13, v10, a2, v7) )
      {
        a1[23] = 1;
        a1[16] = 1;
        v14 = time(0);
        v15 = a1[20];
        a1[18] = v14;
        if ( v15 )
        {
          if ( !a1[1] )
          {
            v16 = a1 + 21;
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 + 1, v16) );
          }
        }
      }
      goto LABEL_9;
    }
  }
  v13 = a1[10];
  if ( !v13 )
  {
    v10 = 0;
    goto LABEL_15;
  }
LABEL_8:
  sub_D0048(36, 110, 110, (int)"crypto/rand/drbg_lib.c", 432);
LABEL_9:
  if ( v18 )
  {
    v11 = (void (__fastcall *)(_DWORD *))a1[62];
    if ( v11 )
      v11(a1);
  }
  return a1[23] == 1;
}
