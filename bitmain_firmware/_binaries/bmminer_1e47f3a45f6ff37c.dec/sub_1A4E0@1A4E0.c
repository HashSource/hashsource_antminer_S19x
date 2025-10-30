int __fastcall sub_1A4E0(int result, char *a2, unsigned int a3)
{
  int v5; // r3
  char src[4]; // [sp+8h] [bp-81Ch] BYREF
  int v7; // [sp+Ch] [bp-818h]
  int v8; // [sp+10h] [bp-814h]
  int v9; // [sp+14h] [bp-810h]
  int v10; // [sp+18h] [bp-80Ch]
  int v11; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v10 = 0;
  *(_DWORD *)src = 0;
  v11 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    result = (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * result) + 180))();
    if ( a2 && a3 >= 0x19 )
      return (int)strcpy(a2, src);
  }
  else if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "read eeprom err, chain = %d.\n", result);
    return sub_3B6AC(4, s, 0, v5);
  }
  return result;
}
