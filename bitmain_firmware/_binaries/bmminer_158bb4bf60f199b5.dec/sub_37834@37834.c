int __fastcall sub_37834(int a1)
{
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Check if chain is unbalance happen, chain = %d.\n", a1);
    sub_47AB4(4, v4, 0);
  }
  if ( dword_1AEA78 )
  {
    v2 = *(_DWORD *)(dword_1AEA78 + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int))(v2 + 36))(a1);
  }
  if ( (unsigned int)dword_9E31C > 3 )
    return sub_36F30();
  return 1;
}
