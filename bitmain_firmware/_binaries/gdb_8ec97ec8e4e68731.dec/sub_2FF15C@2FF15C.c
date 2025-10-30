unsigned int __fastcall sub_2FF15C(int a1, int a2, int a3)
{
  int v3; // r3
  char *v7; // r0
  int v8; // r1
  char *v9; // r6
  _DWORD *v10; // r0

  v3 = *(_DWORD *)(a2 + 20);
  if ( (v3 & 0x20000) == 0 || (v3 & 0x2000000) != 0 )
    return 0;
  v7 = sub_2AAC2C(dword_48FE8C, *(const char **)a2, 1, 0);
  v8 = *((_DWORD *)v7 + 3);
  v9 = v7;
  if ( v8 )
    return sub_2FEF68((_DWORD *)a2, v8, a3);
  v10 = (_DWORD *)sub_2AAEC8((int)dword_48FE8C, 8);
  if ( v10 )
  {
    *v10 = *((_DWORD *)v9 + 3);
    v10[1] = a2;
    *((_DWORD *)v9 + 3) = v10;
  }
  else
  {
    (*(void (**)(const char *, ...))(*(_DWORD *)(a3 + 24) + 44))("%F%P: already_linked_table: %E\n");
  }
  return 0;
}
