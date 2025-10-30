_DWORD *__fastcall sub_272040(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r3
  int v7; // r2
  unsigned int v8; // r3
  int v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r5
  int v15; // r6
  _DWORD *v16; // r11
  _DWORD *v18; // r4
  int v19; // r3
  void *v20[2]; // [sp+1Ch] [bp-38h] BYREF
  char v21; // [sp+24h] [bp-30h] BYREF
  void *ptr[2]; // [sp+34h] [bp-20h] BYREF
  _BYTE v23[16]; // [sp+3Ch] [bp-18h] BYREF
  int v24; // [sp+4Ch] [bp-8h]

  v3 = a1[38];
  v7 = *(_DWORD *)(v3 + 8);
  *(_BYTE *)v3 = 1;
  if ( v7 )
  {
    v18 = a1 + 23;
    ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))loc_271AE8)(a1, 0, 0, 0, 0);
    sub_26FD10(v18, a2, a3);
    return v18;
  }
  else
  {
    v8 = a1[21];
    if ( v8 == -1 )
    {
      v9 = (**(int (***)(void))(a1[26] + 36))();
      a1[21] = v9;
      v8 = v9;
      if ( v9 == -1 )
        return a1 + 23;
    }
    v11 = (_DWORD *)a1[24];
    v12 = a1[23];
    if ( v8 > ((int)v11 - v12) >> 2 )
    {
      do
      {
        while ( 1 )
        {
          v13 = (_DWORD *)a1[25];
          ptr[0] = 0;
          if ( v13 != v11 )
            break;
          sub_273178(a1 + 23);
          v11 = (_DWORD *)a1[24];
          v12 = a1[23];
          v19 = a1[21];
          if ( v19 <= (unsigned int)(((int)v11 - v12) >> 2) )
            goto LABEL_12;
        }
        v19 = a1[21];
        if ( v11 )
          *v11 = 0;
        a1[24] = ++v11;
      }
      while ( v19 > (unsigned int)(((int)v11 - v12) >> 2) );
    }
    else
    {
      v19 = a1[21];
    }
LABEL_12:
    if ( v19 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( !*(_DWORD *)(v12 + 4 * v14) )
        {
          (*(void (__fastcall **)(void **, _DWORD *, int))(*(_DWORD *)(a1[26] + 36) + 8))(v20, a1, v14);
          ptr[1] = 0;
          v23[0] = 0;
          ptr[0] = v23;
          v15 = a1[23];
          sub_33C508(ptr, v20);
          v24 = (*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(a1[26] + 36) + 16))(a1, v14);
          v16 = sub_270E30((int)a1, v14, (int)ptr);
          if ( ptr[0] != v23 )
            sub_339E64(ptr[0]);
          *(_DWORD *)(v15 + 4 * v14) = v16;
          if ( v20[0] != &v21 )
            sub_339E64(v20[0]);
          v19 = a1[21];
        }
        if ( v19 <= ++v14 )
          break;
        v12 = a1[23];
      }
    }
    v10 = a1 + 23;
    sub_26FD10(v10, a2, a3);
    return v10;
  }
}
