int __fastcall sub_3C6E8(struct sockaddr *a1, int a2, int a3, int a4)
{
  char *v6; // r12
  int sa_family; // r0
  int v10; // r1
  __int16 v11; // r3
  int v12; // r2
  int v13; // r3
  bool v14; // zf
  char *v15; // lr
  bool v16; // zf
  int *v17; // r3
  __int16 v18; // r3
  int v19; // r0
  int v20; // r12
  char v22; // r3
  int v23; // r12
  struct sockaddr v24; // [sp+8h] [bp-24h] BYREF
  int v25; // [sp+18h] [bp-14h]
  int v26; // [sp+1Ch] [bp-10h]
  int v27; // [sp+20h] [bp-Ch]

  v6 = (char *)&GLOBAL_OFFSET_TABLE_;
  sa_family = a1->sa_family;
  v10 = 31488;
  v11 = __rev16(*(unsigned __int16 *)(a3 + 4));
  v12 = 0;
  v24.sa_family = sa_family;
  memset(&v24.sa_data[2], 0, 12);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  *(_WORD *)v24.sa_data = 31488;
  if ( (v11 & 0xFFFu) > 1 )
  {
    sub_64E00(3, "do_setclr_trap: err_nitems > 1");
    v22 = *(_BYTE *)(a3 + 3);
    v23 = 3;
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v22, v23);
  }
  v13 = *(_DWORD *)(a3 + 8);
  if ( !v13 )
  {
    v15 = (char *)any_interface;
    goto LABEL_11;
  }
  v14 = sa_family == 2;
  if ( sa_family == 2 )
  {
    *(_DWORD *)&v24.sa_data[2] = *(_DWORD *)(a3 + 8);
  }
  else
  {
    v6 = &v24.sa_data[6];
    sa_family = *(_DWORD *)(a3 + 24);
    v10 = *(_DWORD *)(a3 + 28);
    v12 = *(_DWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 36);
  }
  if ( !v14 )
  {
    *(_DWORD *)v6 = sa_family;
    *((_DWORD *)v6 + 1) = v10;
    *((_DWORD *)v6 + 2) = v12;
    *((_DWORD *)v6 + 3) = v13;
  }
  v15 = sub_178F8(&v24);
  if ( !v15 )
  {
    v22 = *(_BYTE *)(a3 + 3);
    v23 = 4;
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v22, v23);
  }
  sa_family = v24.sa_family;
LABEL_11:
  v16 = sa_family == 2;
  if ( sa_family == 2 )
    v17 = *(int **)(a3 + 12);
  else
    v17 = (int *)(a3 + 40);
  if ( sa_family == 2 )
  {
    *(_DWORD *)&v24.sa_data[2] = v17;
  }
  else
  {
    sa_family = *v17;
    v10 = v17[1];
    v12 = v17[2];
    v17 = (int *)v17[3];
    v6 = &v24.sa_data[6];
  }
  if ( !v16 )
  {
    *(_DWORD *)v6 = sa_family;
    *((_DWORD *)v6 + 1) = v10;
    *((_DWORD *)v6 + 2) = v12;
    *((_DWORD *)v6 + 3) = v17;
  }
  v18 = *(_WORD *)(a3 + 16);
  if ( !v18 )
    v18 = 3912;
  *(_WORD *)v24.sa_data = v18;
  if ( a4 )
    v19 = sub_23D98(&v24.sa_family, (int)v15, 0, (*(_BYTE *)a3 >> 3) & 7);
  else
    v19 = sub_240C0(&v24.sa_family, (int)v15, 0);
  if ( v19 )
    v20 = 0;
  else
    v20 = 4;
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), v20);
}
