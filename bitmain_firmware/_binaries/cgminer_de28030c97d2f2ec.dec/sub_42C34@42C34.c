void __fastcall sub_42C34(int a1)
{
  int v1; // r4
  char v3[12]; // [sp+10h] [bp-80Ch] BYREF

  *(_DWORD *)(a1 + 28) = 0;
  if ( dword_87E6C || (v1 = *(_DWORD *)(a1 + 4), v1 >= sub_3F424()) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v3, 0x800u, "Pool %d %s alive", *(_DWORD *)a1, *(const char **)(a1 + 164));
      sub_1E4EC(6, v3, 0);
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v3, 0x800u, "Pool %d %s alive, testing stability", *(_DWORD *)a1, *(const char **)(a1 + 164));
    sub_1E4EC(4, v3, 0);
  }
}
