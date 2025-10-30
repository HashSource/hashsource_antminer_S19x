int __fastcall sub_4B2C8(_DWORD *a1)
{
  int v2; // r3
  int v4; // r3
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Send work one chain, chain = %d.\n", *a1);
    sub_3B6AC(4, v5, 0, v4);
  }
  if ( dword_535D94 )
  {
    v2 = *(_DWORD *)(dword_535D94 + 4);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD))(v2 + 28))(*a1, a1[2]);
      a1[1] = 1;
      return 0;
    }
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return 0;
  strcpy(v5, "Handle is NULL.\n");
  sub_3B6AC(3, v5, 0, *(int *)"LL.\n");
  return 0;
}
