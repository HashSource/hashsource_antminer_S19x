int __fastcall sub_1C608(int a1, char *a2, unsigned int a3)
{
  int v7; // r3
  char src[4]; // [sp+4h] [bp-814h] BYREF
  int v9; // [sp+8h] [bp-810h]
  int v10; // [sp+Ch] [bp-80Ch]
  int v11; // [sp+10h] [bp-808h]
  int v12; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v11 = 0;
  *(_DWORD *)src = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  if ( !dword_B3CC0 || !*(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "No ft ver, chain = %d\n", a1);
      sub_3B6AC(4, s, 0, v7);
    }
    return -1;
  }
  if ( !a2 || (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * a1) + 68))() )
    return -1;
  if ( a3 > 0x15 )
  {
    strcpy(a2, src);
    return 0;
  }
  return -2;
}
