int __fastcall sub_1A2A8(int result, char *a2, unsigned int a3)
{
  int v5; // r3
  char src[4]; // [sp+4h] [bp-818h] BYREF
  int v7; // [sp+8h] [bp-814h]
  int v8; // [sp+Ch] [bp-810h]
  int v9; // [sp+10h] [bp-80Ch]
  int v10; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v9 = 0;
  *(_DWORD *)src = 0;
  v10 = 0;
  v7 = 0;
  v8 = 0;
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    result = (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * result) + 44))();
    if ( a2 && a3 >= 0x15 )
      return (int)strcpy(a2, src);
  }
  else if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "No hash board sn, chain = %d.\n", result);
    return sub_3B6AC(4, s, 0, v5);
  }
  return result;
}
