int __fastcall sub_3CFB8(struct sockaddr *a1, int a2, int a3, int a4)
{
  char *v5; // r12
  int v7; // r0
  int sa_family; // r1
  unsigned int v11; // r3
  int v12; // r2
  int *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // lr
  bool v19; // zf
  int *v20; // r3
  __int16 v21; // r3
  int v22; // r0
  int v23; // r12
  struct sockaddr v25; // [sp+8h] [bp-24h] BYREF
  int v26; // [sp+18h] [bp-14h]
  int v27; // [sp+1Ch] [bp-10h]
  int v28; // [sp+20h] [bp-Ch]

  v5 = (char *)&GLOBAL_OFFSET_TABLE_;
  v7 = *(unsigned __int16 *)(a3 + 4);
  sa_family = a1->sa_family;
  v11 = (HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)((_WORD)v7 << 8)) & 0xFFF;
  v25.sa_family = a1->sa_family;
  memset(&v25.sa_data[2], 0, 12);
  v12 = 31488;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  *(_WORD *)v25.sa_data = 31488;
  if ( v11 > 1 )
  {
    sub_65D40(3, "do_setclr_trap: err_nitems > 1");
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  else
  {
    v13 = *(int **)(a3 + 8);
    if ( v13 )
    {
      if ( sa_family == 2 )
      {
        *(_DWORD *)&v25.sa_data[2] = *(_DWORD *)(a3 + 8);
      }
      else
      {
        v13 = (int *)(a3 + 24);
        v5 = &v25.sa_data[6];
      }
      if ( sa_family != 2 )
      {
        v14 = *v13;
        v15 = v13[1];
        v16 = v13[2];
        v17 = v13[3];
        *(_DWORD *)v5 = v14;
        *((_DWORD *)v5 + 1) = v15;
        *((_DWORD *)v5 + 2) = v16;
        *((_DWORD *)v5 + 3) = v17;
      }
      v7 = sub_17B78(&v25);
      v18 = v7;
      if ( !v7 )
        return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
      sa_family = v25.sa_family;
    }
    else
    {
      v18 = any_interface;
    }
    v19 = sa_family == 2;
    if ( sa_family == 2 )
    {
      v20 = *(int **)(a3 + 12);
    }
    else
    {
      v20 = (int *)(a3 + 40);
      v5 = &v25.sa_data[6];
    }
    if ( sa_family == 2 )
    {
      *(_DWORD *)&v25.sa_data[2] = v20;
    }
    else
    {
      v7 = *v20;
      sa_family = v20[1];
      v12 = v20[2];
      v20 = (int *)v20[3];
    }
    if ( !v19 )
    {
      *(_DWORD *)v5 = v7;
      *((_DWORD *)v5 + 1) = sa_family;
      *((_DWORD *)v5 + 2) = v12;
      *((_DWORD *)v5 + 3) = v20;
    }
    v21 = *(_WORD *)(a3 + 16);
    if ( !v21 )
      v21 = 3912;
    *(_WORD *)v25.sa_data = v21;
    if ( a4 )
      v22 = sub_240BC((int *)&v25, v18, 0, (*(_BYTE *)a3 >> 3) & 7);
    else
      v22 = sub_243D4(&v25.sa_family, v18, 0);
    if ( v22 )
      v23 = 0;
    else
      v23 = 4;
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), v23);
  }
}
