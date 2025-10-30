int __fastcall sub_2E297C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  void *v9; // r0

  if ( !sub_2DBB00(a1, a2, *(_DWORD *)(a3 + 148)) )
    return 0;
  if ( !*(_DWORD *)(a3 + 76) )
  {
    v7 = 0;
    *a1 = 0;
    a1[2] = 0;
LABEL_5:
    a1[1] = v7;
    return 1;
  }
  v8 = sub_2E2758(*(_DWORD *)(a3 + 148), a3, 0, 0, (*(unsigned __int8 *)(a2 + 3) >> 2) & 1);
  v7 = v8;
  *a1 = v8;
  if ( v8 )
  {
    a1[2] = &v8[3 * *(_DWORD *)(a3 + 76)];
    goto LABEL_5;
  }
  v9 = (void *)a1[3];
  if ( !v9 || v9 == *(void **)(*(_DWORD *)(*(_DWORD *)(a3 + 148) + 160) + 120) )
    return 0;
  free(v9);
  return 0;
}
