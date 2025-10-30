void __fastcall sub_DEB78(int **a1, _DWORD *a2)
{
  int *v3; // r6
  int v5; // r1
  _DWORD *v6; // r6
  int v7; // r3
  _DWORD *v8; // r5
  int v9; // r3
  _DWORD *v10; // r9
  _DWORD *v11; // r7
  int v12; // r3
  int v13; // r3
  _DWORD *v14; // r8
  int v15; // r3
  int v16; // r3
  int (*v17)(); // r12
  int *v18; // r7
  _DWORD *v19; // r9
  _DWORD *v20; // r6
  _DWORD *v21; // r8
  int v22; // r3
  int v23; // r3
  void *v24; // r8
  int v25; // r3
  _DWORD *v26; // r8
  int v27; // r3
  _DWORD *v28; // [sp+10h] [bp-24h] BYREF
  _DWORD *v29; // [sp+14h] [bp-20h] BYREF
  void *ptr[2]; // [sp+18h] [bp-1Ch] BYREF
  char v31; // [sp+20h] [bp-14h] BYREF

  v3 = *a1;
  v5 = **a1;
  if ( !v5 )
  {
    v9 = *a1[1];
    if ( v9 )
    {
      sub_5864C(&v29, **(_DWORD ***)(v9 + 24));
      v10 = v29;
      sub_E0464(ptr, &v29);
      v11 = ptr[0];
      if ( ptr[0] )
      {
        if ( *((_DWORD *)ptr[0] + 1) )
        {
          v14 = (_DWORD *)v3[1];
          *v3 = (int)v10;
          v3[1] = (int)v11;
          if ( !v14 )
          {
LABEL_14:
            if ( v29 )
            {
              ptr[0] = v29;
              sub_57E18((_DWORD **)ptr);
            }
LABEL_16:
            v5 = **a1;
            goto LABEL_2;
          }
LABEL_25:
          v15 = v14[1];
          v14[1] = v15 - 1;
          if ( v15 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v14 + 8))(v14);
            v16 = v14[2];
            v14[2] = v16 - 1;
            if ( v16 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
          }
          goto LABEL_14;
        }
        v24 = ptr[0];
        (*(void (__fastcall **)(void *))(*(_DWORD *)ptr[0] + 8))(ptr[0]);
        v25 = v11[2];
        v11[2] = v25 - 1;
        if ( v25 == 1 )
          (*(void (__fastcall **)(void *))(*(_DWORD *)v24 + 12))(v24);
      }
      v14 = (_DWORD *)v3[1];
      *v3 = (int)v10;
      v3[1] = (int)v11;
      if ( !v14 )
        goto LABEL_14;
      goto LABEL_25;
    }
    sub_931D8((char **)ptr, "Type commands for breakpoint(s) %s, one per line.", (const char *)*a1[2]);
    v17 = sub_C71F4;
    if ( (unsigned int)(a2[3] - 27) > 2 )
      v17 = 0;
    v18 = *a1;
    sub_5807C(&v28, (int)ptr[0], *a1[3], 1, (void (__fastcall *)(_DWORD, int))v17, (int)a2);
    v19 = v28;
    sub_E0464(&v29, &v28);
    v20 = v29;
    if ( v29 )
    {
      if ( v29[1] )
      {
        v21 = (_DWORD *)v18[1];
        *v18 = (int)v19;
        v18[1] = (int)v20;
        if ( v21 )
        {
LABEL_48:
          v22 = v21[1];
          v21[1] = v22 - 1;
          if ( v22 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v21 + 8))(v21);
            v23 = v21[2];
            v21[2] = v23 - 1;
            if ( v23 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*v21 + 12))(v21);
          }
        }
LABEL_33:
        if ( v28 )
        {
          v29 = v28;
          sub_57E18(&v29);
        }
        if ( ptr[0] != &v31 )
          sub_339E64(ptr[0]);
        goto LABEL_16;
      }
      v26 = v29;
      (*(void (__fastcall **)(_DWORD *))(*v29 + 8))(v29);
      v27 = v20[2];
      v20[2] = v27 - 1;
      if ( v27 == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v26 + 12))(v26);
    }
    v21 = (_DWORD *)v18[1];
    *v18 = (int)v19;
    v18[1] = (int)v20;
    if ( v21 )
      goto LABEL_48;
    goto LABEL_33;
  }
LABEL_2:
  if ( a2[11] == v5 )
    return;
  if ( (unsigned int)(a2[3] - 27) > 2 )
    sub_C71F8(v5);
  else
    ((void (__fastcall *)(_DWORD *))loc_C945C)(a2);
  v6 = (_DWORD *)a2[12];
  v7 = **a1;
  v8 = (_DWORD *)(*a1)[1];
  a2[11] = v7;
  if ( v8 != v6 )
  {
    if ( v8 )
    {
      ++v8[1];
      if ( v6 )
        goto LABEL_19;
    }
    else if ( v6 )
    {
LABEL_19:
      v12 = v6[1];
      v6[1] = v12 - 1;
      if ( v12 == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v6 + 8))(v6);
        v13 = v6[2];
        v6[2] = v13 - 1;
        if ( v13 == 1 )
          (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      }
    }
    a2[12] = v8;
  }
  sub_1B9D50(a2);
}
