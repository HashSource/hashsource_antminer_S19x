int __fastcall sub_36E78(_DWORD *a1)
{
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Send work one chain, chain = %d.\n", *a1);
    sub_47AB4(4, v4, 0);
  }
  if ( dword_1AEA78 )
  {
    v2 = *(_DWORD *)(dword_1AEA78 + 4);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD))(v2 + 28))(*a1, a1[2]);
      a1[1] = 1;
      return 0;
    }
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    return 0;
  sub_36E34();
  return 0;
}
