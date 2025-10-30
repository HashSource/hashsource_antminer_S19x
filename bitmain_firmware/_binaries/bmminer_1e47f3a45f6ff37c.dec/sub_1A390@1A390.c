int __fastcall sub_1A390(int a1)
{
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
    return (*(unsigned __int16 (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * a1) + 124))();
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v3, 0x800u, "No pcb version, chain = %d.\n", a1);
    sub_3B6AC(4, v3, 0, v2);
  }
  return 0xFFFF;
}
