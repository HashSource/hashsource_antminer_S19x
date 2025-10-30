int __fastcall sub_2CC04C(int a1, int a2)
{
  int (*v2)(void); // r3
  int v4; // r3

  v2 = *(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 44);
  if ( v2 )
    return v2();
  if ( (*(_DWORD *)(a2 + 12) & 0x800082) != 0 )
    return 1;
  v4 = *(_DWORD *)(a2 + 16);
  if ( (char **)v4 == &off_4708A8 )
    return 1;
  return (*(_DWORD *)(v4 + 20) >> 12) & 1;
}
