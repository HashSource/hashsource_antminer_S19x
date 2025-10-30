bool __fastcall sub_F2FB8(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v6; // r3
  __int16 v7; // r2
  void (__fastcall *v8)(_DWORD *); // r3
  void (__fastcall *v9)(_DWORD *); // r3
  int v11; // r3
  unsigned int v13; // r6
  unsigned int v14; // r9
  int (__fastcall *v15)(_DWORD *, int *); // r5
  int v16; // r3
  int (__fastcall *v17)(_DWORD *, int *, int); // r6
  unsigned int v18; // r0
  time_t v19; // r0
  int v20; // r3
  unsigned int *v21; // r3
  unsigned int v22; // r2
  int v23; // [sp+10h] [bp-Ch] BYREF
  int v24; // [sp+14h] [bp-8h] BYREF

  v3 = a1[14];
  v23 = 0;
  v24 = 0;
  if ( v3 < a3 )
  {
    sub_D0048(36, 108, 116, (int)"crypto/rand/drbg_lib.c", 299);
    goto LABEL_8;
  }
  if ( !a1[60] )
  {
    sub_D0048(36, 108, 128, (int)"crypto/rand/drbg_lib.c", 305);
    goto LABEL_8;
  }
  v6 = a1[23];
  if ( v6 )
  {
    if ( v6 == 2 )
      v7 = 114;
    else
      v7 = 103;
    sub_D0048(36, 108, v7, (int)"crypto/rand/drbg_lib.c", 312);
  }
  else
  {
    v11 = a1[12];
    a1[23] = 2;
    v13 = a1[10];
    v14 = a1[11];
    if ( v11 && !a1[63] )
    {
      v13 += v11;
      v14 += a1[13];
    }
    v15 = (int (__fastcall *)(_DWORD *, int *))a1[61];
    if ( v15 )
    {
      v15 = (int (__fastcall *)(_DWORD *, int *))v15(a1, &v24);
      v16 = v14 < (unsigned int)v15;
    }
    else
    {
      v16 = 0;
    }
    if ( (unsigned int)v15 < v13 )
      v16 |= 1u;
    if ( v16 )
    {
      sub_D0048(36, 108, 110, (int)"crypto/rand/drbg_lib.c", 335);
      goto LABEL_8;
    }
    if ( a1[12] )
    {
      v17 = (int (__fastcall *)(_DWORD *, int *, int))a1[63];
      if ( v17 )
      {
        v18 = v17(a1, &v23, a1[8] / 2);
        v17 = (int (__fastcall *)(_DWORD *, int *, int))v18;
        if ( v18 < a1[12] || v18 > a1[13] )
        {
          sub_D0048(36, 108, 111, (int)"crypto/rand/drbg_lib.c", 343);
          goto LABEL_8;
        }
      }
    }
    else
    {
      v17 = 0;
    }
    if ( (*(int (__fastcall **)(_DWORD *, int, int (__fastcall *)(_DWORD *, int *), int, int (__fastcall *)(_DWORD *, int *, int), int, unsigned int))a1[60])(
           a1,
           v24,
           v15,
           v23,
           v17,
           a2,
           a3) )
    {
      a1[23] = 1;
      a1[16] = 1;
      v19 = time(0);
      v20 = a1[20];
      a1[18] = v19;
      if ( v20 && !a1[1] )
      {
        v21 = a1 + 21;
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
      }
    }
    else
    {
      sub_D0048(36, 108, 108, (int)"crypto/rand/drbg_lib.c", 350);
    }
  }
LABEL_8:
  if ( v24 )
  {
    v8 = (void (__fastcall *)(_DWORD *))a1[62];
    if ( v8 )
      v8(a1);
  }
  if ( v23 )
  {
    v9 = (void (__fastcall *)(_DWORD *))a1[64];
    if ( v9 )
      v9(a1);
  }
  return a1[23] == 1;
}
