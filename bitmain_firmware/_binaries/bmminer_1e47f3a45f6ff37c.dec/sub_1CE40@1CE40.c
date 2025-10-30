int __fastcall sub_1CE40(int a1, int a2)
{
  int v3; // r3
  char src[4]; // [sp+4h] [bp-814h]
  int v5; // [sp+8h] [bp-810h]
  int v6; // [sp+Ch] [bp-80Ch]
  int v7; // [sp+10h] [bp-808h]
  int v8; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v7 = 0;
  *(_DWORD *)src = 0;
  v8 = 0;
  v5 = 0;
  v6 = 0;
  if ( dword_B3CC0 && *(_BYTE *)(dword_B3CC0 + 28) )
  {
    if ( a2 )
      (*(int (**)(void))(*(_DWORD *)(dword_B3CC0 + 4 * a1) + 172))();
  }
  else if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "No board name, chain = %d\n", a1);
    sub_3B6AC(4, s, 0, v3);
  }
  return -1;
}
