int __fastcall sub_BFAFC(char *a1, int a2, int a3)
{
  int v5; // r0
  size_t v6; // r5
  int v7; // r4
  int v8; // r0
  int v9; // r4
  int v10; // r0

  v5 = (*(int (**)(void))(*(_DWORD *)(a3 + 64) + 8))();
  v6 = v5;
  if ( v5 <= 0 )
    return v5;
  v8 = sub_B85BC(*(_DWORD **)(a3 + 8));
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v7 = v9 >> 3;
  if ( (int)(v7 - v6) > 0 )
  {
    memmove(&a1[v7 - v6], a1, v6);
    memset(a1, 0, v7 - v6);
  }
  return v7;
}
