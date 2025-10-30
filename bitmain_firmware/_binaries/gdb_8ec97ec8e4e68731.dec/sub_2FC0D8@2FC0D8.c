int __fastcall sub_2FC0D8(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v8; // r9
  unsigned int v9; // r6
  bool v10; // zf

  if ( a3 <= 0xB )
    return 0;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a2);
  v9 = v8 + (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a2 + 4) + 12;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a2 + 8);
  v10 = a3 == v9;
  if ( a3 >= v9 )
    v10 = v8 == 8;
  if ( !v10 || strcmp((const char *)(a2 + 12), "arch: ") )
    return 0;
  *a4 = a2 + 20;
  return 1;
}
