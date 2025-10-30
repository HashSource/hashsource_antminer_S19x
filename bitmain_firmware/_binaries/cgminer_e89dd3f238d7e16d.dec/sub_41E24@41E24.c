void __fastcall sub_41E24(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+10h] [bp-80Ch] BYREF

  *(_DWORD *)(a1 + 28) = 0;
  if ( dword_86CD4 || (v1 = *(_DWORD *)(a1 + 4), v1 >= sub_3E5A0()) )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v3, 0x800u, "Pool %d %s alive", *(_DWORD *)a1, *(const char **)(a1 + 164));
      sub_1DB6C(6, v3, 0);
    }
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v3, 0x800u, "Pool %d %s alive, testing stability", *(_DWORD *)a1, *(const char **)(a1 + 164));
    sub_1DB6C(4, v3, 0);
  }
}
