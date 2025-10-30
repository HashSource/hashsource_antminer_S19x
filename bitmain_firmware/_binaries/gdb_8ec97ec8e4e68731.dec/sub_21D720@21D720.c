int __fastcall sub_21D720(int a1, char *a2, int a3, int a4)
{
  int v8; // r8
  _DWORD *v9; // r5
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r3
  bool v13; // zf
  int result; // r0
  __int64 v15; // r8
  _DWORD *v16; // r6
  int v17; // r2
  int v18; // r0
  _DWORD *v19; // r10
  int v20; // r2
  void *v21; // r0
  int v22; // r0
  void *v23; // r0
  int v24; // [sp+10h] [bp-20h] BYREF
  _DWORD *v25; // [sp+14h] [bp-1Ch] BYREF
  __int64 v26; // [sp+18h] [bp-18h] BYREF
  char *v27; // [sp+20h] [bp-10h] BYREF
  int v28; // [sp+24h] [bp-Ch]
  __int64 v29; // [sp+28h] [bp-8h]

  v8 = sub_219F50(dword_487D2C);
  v9 = sub_21CBC4(a3);
  v10 = sub_21B850(&v26, v8, (int)v9, 0, a2, a4, &v24, &v25);
  v12 = v26;
  if ( !(_DWORD)v26 )
  {
    if ( v9 )
    {
      sub_201EE4(&v26, (int)v9, (int)a2, a4);
      v15 = v26;
      if ( (_DWORD)v26 )
        goto LABEL_10;
      v29 = 0;
      v27 = a2;
      v28 = a4;
      v18 = sub_1B7250((int)v9);
    }
    else
    {
      v29 = 0;
      v27 = a2;
      v28 = a4;
      v18 = sub_16F654((int)v10);
    }
    ((void (__fastcall *)(int, void *, char **, _DWORD *))loc_16E100)(v18, &loc_21C740, &v27, v9);
    v15 = v29;
    if ( !(_DWORD)v29 )
    {
      if ( v24 )
      {
        v19 = v25;
        v20 = *v25;
        if ( *v25 )
        {
          ++*(_DWORD *)(v24 + 8);
          if ( v20 == 1 )
          {
            v21 = (void *)v19[2];
            if ( v21 )
              free(v21);
          }
        }
        v19[1] = v9;
        *v19 = 1;
        v22 = sub_327254(a2);
        v19[3] = a4;
        v19[2] = v22;
      }
      goto LABEL_14;
    }
LABEL_10:
    if ( v24 )
    {
      v16 = v25;
      v17 = *v25;
      if ( *v25 )
      {
        ++*(_DWORD *)(v24 + 8);
        if ( v17 == 1 )
        {
          v23 = (void *)v16[2];
          if ( v23 )
            free(v23);
        }
      }
      *v16 = 2;
      v16[1] = v9;
      *((_QWORD *)v16 + 1) = v15;
    }
LABEL_14:
    *(_QWORD *)a1 = v15;
    return a1;
  }
  v13 = (_DWORD)v26 == 1;
  result = a1;
  if ( (_DWORD)v26 == 1 )
  {
    v12 = 0;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    v11 = HIDWORD(v26);
  }
  if ( !v13 )
  {
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v11;
  }
  return result;
}
