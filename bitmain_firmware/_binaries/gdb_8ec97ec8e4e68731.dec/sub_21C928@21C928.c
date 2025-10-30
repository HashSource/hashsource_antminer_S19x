int __fastcall sub_21C928(int a1, int *a2, int a3)
{
  char v4; // r2
  int v7; // r2
  int v8; // r3
  char *v9; // r5
  size_t v10; // r0
  void *v12; // r0
  char *v13; // r5
  size_t v14; // r0
  void *v15; // [sp+8h] [bp-24h] BYREF
  void *v16[2]; // [sp+Ch] [bp-20h] BYREF
  _BYTE v17[16]; // [sp+14h] [bp-18h] BYREF
  void *ptr; // [sp+24h] [bp-8h]

  *(_BYTE *)(a1 + 8) = 0;
  v4 = *((_BYTE *)a2 + 5);
  *(_DWORD *)(a1 + 4) = 0;
  v16[1] = 0;
  if ( a3 == 4 )
    v7 = v4 & 1;
  else
    v7 = 0;
  v17[0] = 0;
  ptr = 0;
  *(_DWORD *)a1 = a1 + 8;
  v16[0] = v17;
  if ( !v7 )
  {
    v8 = *a2;
LABEL_7:
    if ( v8 == 2 )
    {
      sub_33B48C(a1, a2 + 2);
    }
    else
    {
      v9 = sub_21C8B0((char *)a2[2], a3, (int *)v16);
      v10 = strlen(v9);
      sub_33BC54(a1, 0, *(_DWORD *)(a1 + 4), v9, v10);
    }
    goto LABEL_9;
  }
  sub_100150(&v15, (const char *)a2[2], *((unsigned __int8 *)a2 + 4));
  v12 = v15;
  v8 = *a2;
  if ( !v15 )
    goto LABEL_7;
  if ( v8 == 2
    || (v13 = sub_21A4F0((char *)v15, (int *)v16),
        v14 = strlen(v13),
        sub_33BC54(a1, 0, *(_DWORD *)(a1 + 4), v13, v14),
        (v12 = v15) != 0) )
  {
    free(v12);
  }
LABEL_9:
  if ( ptr )
    free(ptr);
  if ( v16[0] != v17 )
    sub_339E64(v16[0]);
  return a1;
}
